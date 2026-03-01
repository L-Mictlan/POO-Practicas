import sys

# =========================
# Tipos de datos creados en OOP
# =========================
class Auto:
    def __init__(self, precio, anio):
        self.precio = precio
        self.anio = anio


class Persona:
    def __init__(self, nombre, apellido, am, genero, edad):
        self.nombre = nombre
        self.apellido = apellido
        self.am = am
        self.genero = genero
        self.edad = edad


# =========================
# Programa principal
# =========================
def main():
    # Tipos de datos básicos
    entero = 10
    flotante = 3.14
    booleano = True
    cadena = "Hola"
    lista = [1, 2, 3]
    tupla = (1, 2, 3)
    diccionario = {"a": 1, "b": 2}

    # Objetos creados en OOP
    auto1 = Auto(250000, 2023)
    persona1 = Persona("Luis", "Guzmán", "Pérez", "Masculino", 20)

    print("=== TAMAÑO DE TIPOS DE DATOS BÁSICOS ===")
    print("int:", sys.getsizeof(entero), "bytes")
    print("float:", sys.getsizeof(flotante), "bytes")
    print("bool:", sys.getsizeof(booleano), "bytes")
    print("str:", sys.getsizeof(cadena), "bytes")
    print("list:", sys.getsizeof(lista), "bytes")
    print("tuple:", sys.getsizeof(tupla), "bytes")
    print("dict:", sys.getsizeof(diccionario), "bytes")

    print("\n=== TAMAÑO DE TIPOS DE DATOS OOP ===")
    print("Auto:", sys.getsizeof(auto1), "bytes")
    print("Persona:", sys.getsizeof(persona1), "bytes")


if __name__ == "__main__":
    main()
