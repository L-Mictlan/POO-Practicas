class Suma:
    def __init__(self, a, b):
        # Atributos (encapsulados por convención)
        self._a = a
        self._b = b

    def sumar(self):
        return self._a + self._b


# Programa principal
if __name__ == "__main__":
    num1 = 5
    num2 = 7

    # Crear objeto con parámetros
    operacion = Suma(num1, num2)

    # Mostrar resultado
    print("La suma de", num1, "y", num2, "es:", operacion.sumar())
