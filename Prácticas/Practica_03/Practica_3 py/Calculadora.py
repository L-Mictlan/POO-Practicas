class Calculadora:
    def __init__(self, a, b):
        # Atributos del objeto (encapsulados por convención)
        self._a = a
        self._b = b

    def sumar(self):
        return self._a + self._b

    def restar(self):
        return self._a - self._b

    def multiplicar(self):
        return self._a * self._b

    def dividir(self):
        if self._b == 0:
            return "Error: división entre cero"
        else:
            return self._a / self._b

    def potencia(self):
        return self._a ** self._b

    def residuo(self):
        if self._b == 0:
            return "Error: división entre cero"
        else:
            return self._a % self._b

def main():
    print("=== Calculadora ===")
    print("1. Sumar")
    print("2. Restar")
    print("3. Multiplicar")
    print("4. Dividir")
    print("5. Potencia")
    print("6. Residuo")

    opcion = int(input("Elige una opción: "))
    num1 = float(input("Ingresa el primer número: "))
    num2 = float(input("Ingresa el segundo número: "))

    calc = Calculadora(num1, num2)

    if opcion == 1:
        print("Resultado:", calc.sumar())
    elif opcion == 2:
        print("Resultado:", calc.restar())
    elif opcion == 3:
        print("Resultado:", calc.multiplicar())
    elif opcion == 4:
        print("Resultado:", calc.dividir())
    elif opcion == 5:
        print("Resultado:", calc.potencia())
    elif opcion == 6:
        print("Resultado:", calc.residuo())
    else:
        print("Opción no válida")


if __name__ == "__main__":
    main()
