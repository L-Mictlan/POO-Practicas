import math


# ===== Clase base =====
class Figura:
    def __init__(self, lados):
        self.lados = lados

    def calcular_area(self):
        raise NotImplementedError

class Triangulo(Figura):
    def __init__(self, a, b, c):
        super().__init__(3)
        self.a = a
        self.b = b
        self.c = c

    # Área usando fórmula de Herón
    def calcular_area(self):
        s = (self.a + self.b + self.c) / 2
        return math.sqrt(s * (s - self.a) * (s - self.b) * (s - self.c))

    # Tipo según lados
    def tipo_por_lados(self):
        if self.a == self.b == self.c:
            return "Equilátero (60° cada ángulo)"
        elif self.a == self.b or self.a == self.c or self.b == self.c:
            return "Isósceles"
        else:
            return "Escaleno"

    # Tipo según ángulos
    def tipo_por_angulos(self):
        # ordenar lados
        lados = sorted([self.a, self.b, self.c])
        x, y, z = lados  # z es el mayor

        # Teorema de Pitágoras
        if math.isclose(z**2, x**2 + y**2):
            return "Rectángulo"
        elif z**2 > x**2 + y**2:
            return "Obtuso"
        else:
            return "Agudo"

def main():
    print("=== Calculadora de Triángulos ===")

    a = float(input("Ingresa el lado A: "))
    b = float(input("Ingresa el lado B: "))
    c = float(input("Ingresa el lado C: "))

    # Validación básica
    if a + b <= c or a + c <= b or b + c <= a:
        print("Los lados no forman un triángulo válido.")
        return

    triangulo = Triangulo(a, b, c)

    print("\n--- Resultados ---")
    print("Área:", triangulo.calcular_area())
    print("Tipo por lados:", triangulo.tipo_por_lados())
    print("Tipo por ángulos:", triangulo.tipo_por_angulos())


if __name__ == "__main__":
    main()
