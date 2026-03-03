import json

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


numero = 7
decimal = 1.9
arreglo_normal = [7, 8, 9]
arreglo_dinamico = [10, 11, 12]

alumno = Alumno("Carlos", 19, 8.7)

datos = {
    "Basicos": {
        "Numero": numero,
        "Decimal": decimal
    },
    "ArregloNormal": arreglo_normal,
    "ArregloDinamico": arreglo_dinamico,
    "Alumno": {
        "Nombre": alumno.get_datos()[0],
        "Edad": alumno.get_datos()[1],
        "Promedio": alumno.get_promedio()
    }
}

with open("datos.json", "w") as f:
    json.dump(datos, f, indent=4)

print("JSON creado correctamente.")
