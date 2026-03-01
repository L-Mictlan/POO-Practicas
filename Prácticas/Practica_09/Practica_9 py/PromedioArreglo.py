# =========================
# Clase: ArregloNumeros
# =========================
class ArregloNumeros:
    def __init__(self):
        # Una sola variable arreglo
        self.numeros = [0] * 5

    def ingresar_numeros(self):
        print("Ingresa 5 números:")
        for i in range(5):
            self.numeros[i] = float(input(f"Número {i + 1}: "))

    def suma(self):
        total = 0
        for n in self.numeros:
            total += n
        return total

    def promedio(self):
        return self.suma() / len(self.numeros)

    def media(self):
        # Media aritmética
        return self.promedio()

    def maximo(self):
        mayor = self.numeros[0]
        for n in self.numeros:
            if n > mayor:
                mayor = n
        return mayor

    def minimo(self):
        menor = self.numeros[0]
        for n in self.numeros:
            if n < menor:
                menor = n
        return menor


# =========================
# Programa principal
# =========================
def main():
    arreglo = ArregloNumeros()
    arreglo.ingresar_numeros()

    print("\n=== RESULTADOS ===")
    print("Arreglo:", arreglo.numeros)
    print("Suma:", arreglo.suma())
    print("Promedio:", arreglo.promedio())
    print("Media:", arreglo.media())
    print("Máximo:", arreglo.maximo())
    print("Mínimo:", arreglo.minimo())


if __name__ == "__main__":
    main()
