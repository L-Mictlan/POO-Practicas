# =========================
# Clase contenedora (simula puntero)
# =========================
class Referencia:
    def __init__(self, objeto):
        self.objeto = objeto


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
# Nuevo tipo de dato: Arreglo de Autos (manejo indirecto)
# =========================
class ListaAutos:
    def __init__(self):
        self.autos = []

    def agregar_auto(self, ref_auto):
        self.autos.append(ref_auto)

    def mostrar_autos(self):
        print("=== LISTA DE AUTOS ===")
        for ref in self.autos:
            print(ref.objeto)


# =========================
# Nuevo tipo de dato: Arreglo de Personas (manejo indirecto)
# =========================
class ListaPersonas:
    def __init__(self):
        self.personas = []

    def agregar_persona(self, ref_persona):
        self.personas.append(ref_persona)

    def mostrar_personas(self):
        print("=== LISTA DE PERSONAS ===")
        for ref in self.personas:
            print(ref.objeto)


# =========================
# Programa principal
# =========================
def main():
    lista_autos = ListaAutos()
    lista_personas = ListaPersonas()

    # Crear objetos
    auto1 = Auto(250000, 2022)
    auto2 = Auto(320000, 2024)

    persona1 = Persona("Luis", "Guzmán", "Pérez", "Masculino", 20)
    persona2 = Persona("Ana", "López", "Martínez", "Femenino", 22)

    # Crear referencias (manejo indirecto)
    ref_auto1 = Referencia(auto1)
    ref_auto2 = Referencia(auto2)

    ref_persona1 = Referencia(persona1)
    ref_persona2 = Referencia(persona2)

    # Agregar referencias a las listas
    lista_autos.agregar_auto(ref_auto1)
    lista_autos.agregar_auto(ref_auto2)

    lista_personas.agregar_persona(ref_persona1)
    lista_personas.agregar_persona(ref_persona2)

    # Mostrar resultados
    lista_autos.mostrar_autos()
    print()
    lista_personas.mostrar_personas()


if __name__ == "__main__":
    main()