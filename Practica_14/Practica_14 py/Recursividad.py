# =========================
# Clase base
# =========================
class Calculadora:
    def __init__(self):
        self._resultado = 0

    def mostrar_resultado(self):
        return self._resultado

    def sumar(self, a):
        self._resultado += a
        return self._resultado

    def restar(self, a, b):
        self._resultado = a - b
        return self._resultado

    def multiplicar(self, a, b):
        self._resultado = a * b
        return self._resultado

    def dividir(self, a, b):
        if b == 0:
            return "Error: división entre cero"
        self._resultado = a / b
        return self._resultado

    def potencia(self, a, b):
        self._resultado = a ** b
        return self._resultado


# =========================
# Calculadora Recursiva
# =========================
class CalculadoraRecursiva(Calculadora):

    # 🔁 multiplicación recursiva (sumas sucesivas)
    def multiplicar(self, a, b):
        if b == 0:
            return 0
        if b < 0:
            return -self.multiplicar(a, -b)
        return a + self.multiplicar(a, b - 1)

    # 🔁 potencia recursiva (multiplicaciones sucesivas)
    def potencia(self, a, b):
        if b == 0:
            return 1
        if b < 0:
            return "Error: exponente negativo no soportado"
        return self.multiplicar(a, self.potencia(a, b - 1))

    # 🔁 factorial recursivo
    def factorial(self, n):
        if n < 0:
            return "Error: factorial negativo no existe"
        if n == 0 or n == 1:
            return 1
        return self.multiplicar(n, self.factorial(n - 1))

    # 🔁 fibonacci recursivo
    def fibonacci(self, n):
        if n < 0:
            return "Error: fibonacci negativo no existe"
        if n == 0:
            return 0
        if n == 1:
            return 1
        return self.fibonacci(n - 1) + self.fibonacci(n - 2)


# =========================
# MAIN
# =========================
def main():
    calc = CalculadoraRecursiva()

    while True:
        print("\n=== CALCULADORA RECURSIVA ===")
        print("1. Multiplicar (recursiva)")
        print("2. Potencia (recursiva)")
        print("3. Factorial (recursivo)")
        print("4. Fibonacci (recursivo)")
        print("5. Mostrar resultado")
        print("0. Salir")

        opcion = int(input("Opción: "))

        if opcion == 1:
            a = int(input("A: "))
            b = int(input("B: "))
            calc._resultado = calc.multiplicar(a, b)
            print("Resultado:", calc._resultado)

        elif opcion == 2:
            a = int(input("Base: "))
            b = int(input("Exponente: "))
            calc._resultado = calc.potencia(a, b)
            print("Resultado:", calc._resultado)

        elif opcion == 3:
            n = int(input("Número: "))
            calc._resultado = calc.factorial(n)
            print("Resultado:", calc._resultado)

        elif opcion == 4:
            n = int(input("Posición: "))
            calc._resultado = calc.fibonacci(n)
            print("Resultado:", calc._resultado)

        elif opcion == 5:
            print("Resultado actual:", calc.mostrar_resultado())

        elif opcion == 0:
            print("Saliendo...")
            break

        else:
            print("Opción no válida")


if __name__ == "__main__":
    main()
