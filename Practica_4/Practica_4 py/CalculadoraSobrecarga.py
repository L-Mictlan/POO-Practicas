class Calculadora:
    def __init__(self):
        # Estado interno
        self._resultado = 0

    # 0 parámetros → usa el estado interno
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

    # número variable de parámetros (sobrecarga flexible)
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

    # potencia con 1 o 2 parámetros
    def potencia(self, a, b=None):
        if b is None:
            self._resultado = a ** 2   # cuadrado
        else:
            self._resultado = a ** b
        return self._resultado

def main():
    calc = Calculadora()

    print("Resultado inicial:", calc.mostrar_resultado())     # 0 parámetros

    print("Suma:", calc.sumar(10))                             # 1 parámetro
    print("Resta:", calc.restar(20, 5))                        # 2 parámetros
    print("Multiplicación:", calc.multiplicar(2, 3, 4))       # múltiples parámetros
    print("División:", calc.dividir(10))                       # 1 parámetro (b por defecto)
    print("Potencia (cuadrado):", calc.potencia(5))           # 1 parámetro
    print("Potencia:", calc.potencia(2, 3))                    # 2 parámetros
    print("Resultado final:", calc.mostrar_resultado())        # 0 parámetros


if __name__ == "__main__":
    main()
# Calculadora con métodos que simulan sobrecarga mediante diferentes firmas