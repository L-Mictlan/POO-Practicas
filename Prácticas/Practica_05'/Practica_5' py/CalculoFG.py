import math


# ===== Clase base =====
class Figura:
    def __init__(self, lados):
        self.lados = lados

    def calcular_area(self):
        raise NotImplementedError("Este método debe ser implementado por la clase hija")


# ===== Clases hijas =====
class Triangulo(Figura):
    def __init__(self, base, altura):
        super().__init__(3)
        self.base = base
        self.altura = altura

    def calcular_area(self):
        return (self.base * self.altura) / 2


class Cuadrado(Figura):
    def __init__(self, lado):
        super().__init__(4)
        self.lado = lado

    def calcular_area(self):
        return self.lado ** 2


class PoligonoRegular(Figura):
    def __init__(self, lados, longitud_lado):
        super().__init__(lados)
        self.longitud_lado = longitud_lado

    def calcular_area(self):
        # Fórmula del área de un polígono regular
        return (self.lados * self.longitud_lado ** 2) / (
            4 * math.tan(math.pi / self.lados)
        )

def main():
    print("=== Calculadora de Áreas ===")
    lados = int(input("Ingresa el número de lados de la figura: "))

    if lados == 3:
        base = float(input("Ingresa la base del triángulo: "))
        altura = float(input("Ingresa la altura del triángulo: "))
        figura = Triangulo(base, altura)

    elif lados == 4:
        lado = float(input("Ingresa el lado del cuadrado: "))
        figura = Cuadrado(lado)

    elif lados >= 5:
        longitud = float(input("Ingresa la longitud de cada lado: "))
        figura = PoligonoRegular(lados, longitud)

    else:
        print("Una figura válida debe tener al menos 3 lados.")
        return

    print(f"El área de la figura de {figura.lados} lados es: {figura.calcular_area()}")


if __name__ == "__main__":
    main()
