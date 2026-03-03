import xml.etree.ElementTree as ET

class Persona:
    def __init__(self, nombre, edad):
        self.__nombre = nombre
        self.__edad = edad

    def mostrar(self):
        return f"{self.__nombre} - {self.__edad}"

    def get_datos(self):
        return self.__nombre, self.__edad


class Alumno(Persona):
    def __init__(self, nombre, edad, promedio):
        super().__init__(nombre, edad)
        self.__promedio = promedio

    def mostrar(self):
        return f"{super().mostrar()} - Promedio: {self.__promedio}"

    def get_promedio(self):
        return self.__promedio


numero = 10
decimal = 3.5
arreglo_normal = [1, 2, 3]
arreglo_dinamico = [4, 5, 6]

alumno = Alumno("Juan", 20, 9.8)

root = ET.Element("Datos")

basicos = ET.SubElement(root, "Basicos")
ET.SubElement(basicos, "Numero").text = str(numero)
ET.SubElement(basicos, "Decimal").text = str(decimal)

arr_norm = ET.SubElement(root, "ArregloNormal")
for num in arreglo_normal:
    ET.SubElement(arr_norm, "Elemento").text = str(num)

arr_din = ET.SubElement(root, "ArregloDinamico")
for num in arreglo_dinamico:
    ET.SubElement(arr_din, "Elemento").text = str(num)

persona_xml = ET.SubElement(root, "Alumno")
nombre, edad = alumno.get_datos()
ET.SubElement(persona_xml, "Nombre").text = nombre
ET.SubElement(persona_xml, "Edad").text = str(edad)
ET.SubElement(persona_xml, "Promedio").text = str(alumno.get_promedio())

tree = ET.ElementTree(root)
tree.write("datos.xml")

print("XML creado correctamente.")
