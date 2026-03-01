# =========================
# Clase: ArregloConPuntero
# =========================
class ArregloConPuntero:
    def __init__(self):
        # Arreglo principal
        self.arreglo = [0] * 5

        # "Puntero" que apunta al arreglo
        self.puntero = self.arreglo

    def ingresar_numeros(self):
        print("Ingresa 5 números (acceso indirecto):")
        for i in range(5):
            self.puntero[i] = float(input(f"Número {i + 1}: "))

    def suma(self):
        total = 0
        for i in range(5):
            total += self.puntero[i]
        return total

    def promedio(self):
        return self.suma() / 5

    def media(self):
        # Media aritmética
        return self.promedio()

    def maximo(self):
        mayor = self.puntero[0]
        for i in range(1, 5):
            if self.puntero[i] > mayor:
                mayor = self.puntero[i]
        return mayor

    def minimo(self):
        menor = self.puntero[0]
        for i in range(1, 5):
            if self.puntero[i] < menor:
                menor = self.puntero[i]
        return menor


# =========================
# Programa principal
# =========================
def main():
    datos = ArregloConPuntero()
    datos.ingresar_numeros()

    print("\n=== RESULTADOS ===")
    print("Arreglo:", datos.arreglo)
    print("Suma:", datos.suma())
    print("Promedio:", datos.promedio())
    print("Media:", datos.media())
    print("Máximo:", datos.maximo())
    print("Mínimo:", datos.minimo())


if __name__ == "__main__":
    main()
