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
# Nuevo tipo de dato:
# Arreglo de Personas con puntero
# =========================
class ListaPersonasConPuntero:
    def __init__(self):
        # Arreglo real
        self.personas = []

        # "Puntero" que apunta al arreglo
        self.puntero = self.personas

    def agregar_persona(self, persona):
        # Acceso indirecto al arreglo
        self.puntero.append(persona)

    def mostrar_personas(self):
        print("=== LISTA DE PERSONAS (ACCESO INDIRECTO) ===")
        for persona in self.puntero:
            print(persona)


# =========================
# Programa principal
# =========================
def main():
    lista = ListaPersonasConPuntero()

    # Crear personas
    p1 = Persona("Luis", "Guzmán", "Pérez", "Masculino", 20)
    p2 = Persona("Ana", "López", "Martínez", "Femenino", 22)
    p3 = Persona("Carlos", "Hernández", "Ruiz", "Masculino", 25)

    # Agregar personas usando el puntero
    lista.agregar_persona(p1)
    lista.agregar_persona(p2)
    lista.agregar_persona(p3)

    # Mostrar usando el puntero
    lista.mostrar_personas()


if __name__ == "__main__":
    main()
