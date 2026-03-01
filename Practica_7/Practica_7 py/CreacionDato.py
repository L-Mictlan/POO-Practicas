# =========================
# Nuevo tipo de dato: Auto
# =========================
class Auto:
    def __init__(self, precio, anio):
        self.precio = precio
        self.anio = anio

    def __str__(self):
        return f"Auto (año = {self.anio}, precio = ${self.precio})"


# =========================
# Nuevo tipo de dato: Persona
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
# Programa principal
# =========================
def main():
    auto1 = Auto(250000, 2022)
    persona1 = Persona("Luis", "Guzmán", "Pérez", "Masculino", 20)

    print(auto1)
    print(persona1)


if __name__ == "__main__":
    main()
