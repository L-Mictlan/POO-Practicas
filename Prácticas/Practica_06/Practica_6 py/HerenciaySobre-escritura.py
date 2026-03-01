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


# ================= CALCULADORA CON SOBRESCRITURA =================
class CalculadoraIterativa(Calculadora):

    # 🔁 multiplicación con sumas sucesivas
    def multiplicar(self, a, b):
        resultado = 0
        positivo = b >= 0
        b = abs(int(b))

        for _ in range(b):
            resultado += a

        self._resultado = resultado if positivo else -resultado
        return self._resultado

    # 🔁 potencia con multiplicaciones sucesivas
    def potencia(self, a, b):
        if b < 0:
            return "Error: exponente negativo no soportado"

        resultado = 1
        for _ in range(int(b)):
            resultado = self.multiplicar(resultado, a)

        self._resultado = resultado
        return self._resultado

    # 🔁 división con restas sucesivas
    def dividir(self, a, b):
        if b == 0:
            return "Error: división entre cero"

        cociente = 0
        signo = (a >= 0) == (b >= 0)
        a = abs(a)
        b = abs(b)

        while a >= b:
            a -= b
            cociente += 1

        self._resultado = cociente if signo else -cociente
        return self._resultado


# ========================= MAIN =========================
def main():
    calc = CalculadoraIterativa()

    while True:
        print("\n=== CALCULADORA ITERATIVA ===")
        print("1. Sumar")
        print("2. Restar")
        print("3. Multiplicar (sumas sucesivas)")
        print("4. Dividir (restas sucesivas)")
        print("5. Potencia (multiplicaciones sucesivas)")
        print("6. Mostrar resultado")
        print("0. Salir")

        opcion = int(input("Opción: "))

        if opcion == 1:
            a = float(input("Número: "))
            print("Resultado:", calc.sumar(a))

        elif opcion == 2:
            a = float(input("A: "))
            b = float(input("B: "))
            print("Resultado:", calc.restar(a, b))

        elif opcion == 3:
            a = int(input("A: "))
            b = int(input("B: "))
            print("Resultado:", calc.multiplicar(a, b))

        elif opcion == 4:
            a = int(input("Dividendo: "))
            b = int(input("Divisor: "))
            print("Resultado:", calc.dividir(a, b))

        elif opcion == 5:
            a = int(input("Base: "))
            b = int(input("Exponente: "))
            print("Resultado:", calc.potencia(a, b))

        elif opcion == 6:
            print("Resultado actual:", calc.mostrar_resultado())

        elif opcion == 0:
            print("Saliendo...")
            break

        else:
            print("Opción no válida")


if __name__ == "__main__":
    main()
