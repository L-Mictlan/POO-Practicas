import turtle

# =========================
# Clase base: Fractal
# =========================
class Fractal:
    def __init__(self):
        self.t = turtle.Turtle()
        self.t.speed(0)
        self.pantalla = turtle.Screen()


# =========================
# Triángulo de Sierpinski
# =========================
class Sierpinski(Fractal):

    def dibujar_triangulo(self, tam):
        for _ in range(3):
            self.t.forward(tam)
            self.t.left(120)

    def sierpinski(self, tam, nivel):
        if nivel == 0:
            self.dibujar_triangulo(tam)
            return

        self.sierpinski(tam / 2, nivel - 1)
        self.t.forward(tam / 2)
        self.sierpinski(tam / 2, nivel - 1)
        self.t.backward(tam / 2)
        self.t.left(60)
        self.t.forward(tam / 2)
        self.t.right(60)
        self.sierpinski(tam / 2, nivel - 1)
        self.t.left(60)
        self.t.backward(tam / 2)
        self.t.right(60)


# =========================
# Polvo (Conjunto) de Cantor
# =========================
class Cantor(Fractal):

    def cantor(self, x, y, longitud, nivel):
        if nivel == 0:
            return

        self.t.penup()
        self.t.goto(x, y)
        self.t.pendown()
        self.t.forward(longitud)

        y -= 20
        self.cantor(x, y, longitud / 3, nivel - 1)
        self.cantor(x + 2 * longitud / 3, y, longitud / 3, nivel - 1)


# =========================
# MAIN
# =========================
def main():
    print("1. Triángulo de Sierpinski")
    print("2. Polvo de Cantor")
    opcion = int(input("Opción: "))

    if opcion == 1:
        fractal = Sierpinski()
        fractal.t.penup()
        fractal.t.goto(-200, -150)
        fractal.t.pendown()
        fractal.sierpinski(400, 4)

    elif opcion == 2:
        fractal = Cantor()
        fractal.cantor(-300, 200, 600, 5)

    turtle.done()


if __name__ == "__main__":
    main()
