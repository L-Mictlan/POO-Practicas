class Calculadora:
    def __init__(self):
        # Estado interno
        self._resultado = 0

    # 0 parámetros
    def mostrar_resultado(self):
        return self._resultado

    # 1 parámetro
    def sumar(self, a):
        self._resultado += a
        return self._resultado

    # 2 parámetros
    def restar(self, a, b):
        self._resultado = a - b
        return self._resultado

    # parámetros variables (sobrecarga flexible)
    def multiplicar(self, *numeros):
        if not numeros:
            return "Error: no se pasaron números"

        resultado = 1
        for n in numeros:
            resultado *= n

        self._resultado = resultado
        return self._resultado

    # parámetros opcionales
    def dividir(self, a, b=1):
        if b == 0:
            return "Error: división entre cero"
        self._resultado = a / b
        return self._resultado

    # 1 o 2 parámetros
    def potencia(self, a, b=None):
        if b is None:
            self._resultado = a ** 2
        else:
            self._resultado = a ** b
        return self._resultado

class CalculadoraCientifica(Calculadora):

    # Nuevo método (heredado + extendido)
    def residuo(self, a, b):
        if b == 0:
            return "Error: división entre cero"
        self._resultado = a % b
        return self._resultado

    # Sobrescritura (override) de multiplicar
    def multiplicar(self, *numeros):
        print("Multiplicación científica")
        return super().multiplicar(*numeros)

def main():
    calc = CalculadoraCientifica()

    while True:
        print("\n=== CALCULADORA OOP CON HERENCIA ===")
        print("1. Sumar (1 parámetro)")
        print("2. Restar (2 parámetros)")
        print("3. Multiplicar (n parámetros)")
        print("4. Dividir (1 o 2 parámetros)")
        print("5. Potencia (1 o 2 parámetros)")
        print("6. Residuo (herencia)")
        print("7. Mostrar resultado")
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
            nums = input("Ingresa números separados por espacio: ")
            numeros = list(map(float, nums.split()))
            print("Resultado:", calc.multiplicar(*numeros))

        elif opcion == 4:
            a = float(input("Dividendo: "))
            b = input("Divisor (enter = 1): ")
            b = float(b) if b else 1
            print("Resultado:", calc.dividir(a, b))

        elif opcion == 5:
            a = float(input("Base: "))
            b = input("Exponente (enter = cuadrado): ")
            if b == "":
                print("Resultado:", calc.potencia(a))
            else:
                print("Resultado:", calc.potencia(a, float(b)))

        elif opcion == 6:
            a = int(input("A (entero): "))
            b = int(input("B (entero): "))
            print("Resultado:", calc.residuo(a, b))

        elif opcion == 7:
            print("Resultado actual:", calc.mostrar_resultado())

        elif opcion == 0:
            print("Saliendo...")
            break

        else:
            print("Opción no válida")


if __name__ == "__main__":
    main()
#endif // HERENCIA_H