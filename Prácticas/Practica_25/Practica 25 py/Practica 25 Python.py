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


numero = 5
decimal = 2.3
arreglo_normal = [4, 5, 6]
arreglo_dinamico = [7, 8, 9]

alumno = Alumno("Ana", 22, 9.5)

with open("datos.txt", "w") as f:
    f.write(str(numero) + "\n")
    f.write(str(decimal) + "\n")
    f.write(" ".join(map(str, arreglo_normal)) + "\n")
    f.write(" ".join(map(str, arreglo_dinamico)) + "\n")
    nombre, edad = alumno.get_datos()
    f.write(f"{nombre} {edad} {alumno.get_promedio()}\n")

print("TXT creado correctamente.")
