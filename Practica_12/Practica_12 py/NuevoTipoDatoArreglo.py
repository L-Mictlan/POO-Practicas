# =========================
# Tipo de dato: Auto
# =========================
class Auto:
    def __init__(self, precio, anio):
        self.precio = precio
        self.anio = anio

    def __str__(self):
        return f"Auto (año = {self.anio}, precio = ${self.precio})"


# =========================
# Tipo de dato: Persona
# =========================
class Persona:
    def __init__(self, nombre, apellido, am, genero, edad):
        self.nombre = nombre
        self.apellido = apellido
        self.am = am
        self.genero = genero
        self.edad = edad

    def __str__(self):
        return (
            f"Persona: {self.nombre} {self.apellido} {self.am}, "
            f"Género: {self.genero}, Edad: {self.edad}"
        )


# =========================
# Nuevo tipo de dato: Arreglo de Autos
# =========================
class ListaAutos:
    def __init__(self):
        self.autos = []

    def agregar_auto(self, auto):
        self.autos.append(auto)

    def mostrar_autos(self):
        print("=== LISTA DE AUTOS ===")
        for auto in self.autos:
            print(auto)


# =========================
# Nuevo tipo de dato: Arreglo de Personas
# =========================
class ListaPersonas:
    def __init__(self):
        self.personas = []

    def agregar_persona(self, persona):
        self.personas.append(persona)

    def mostrar_personas(self):
        print("=== LISTA DE PERSONAS ===")
        for persona in self.personas:
            print(persona)


# =========================
# Programa principal
# =========================
def main():
    # Crear listas (nuevos tipos de datos)
    lista_autos = ListaAutos()
    lista_personas = ListaPersonas()

    # Crear objetos
    auto1 = Auto(250000, 2022)
    auto2 = Auto(320000, 2024)

    persona1 = Persona("Luis", "Guzmán", "Pérez", "Masculino", 20)
    persona2 = Persona("Ana", "López", "Martínez", "Femenino", 22)

    # Agregar a los arreglos
    lista_autos.agregar_auto(auto1)
    lista_autos.agregar_auto(auto2)

    lista_personas.agregar_persona(persona1)
    lista_personas.agregar_persona(persona2)

    # Mostrar resultados
    lista_autos.mostrar_autos()
    print()
    lista_personas.mostrar_personas()


if __name__ == "__main__":
    main()
