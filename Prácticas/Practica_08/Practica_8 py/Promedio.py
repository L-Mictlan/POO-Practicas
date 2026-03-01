# =========================
# Clase OOP: Estadisticas
# =========================
class Estadisticas:
    def __init__(self):
        self.numeros = []

    def ingresar_numeros(self):
        print("Ingresa 5 números:")
        for i in range(5):
            num = float(input(f"Número {i + 1}: "))
            self.numeros.append(num)

    def suma(self):
        return sum(self.numeros)

    def promedio(self):
        return self.suma() / len(self.numeros)

    def media(self):
        # En este caso es igual al promedio
        return self.promedio()

    def maximo(self):
        return max(self.numeros)

    def minimo(self):
        return min(self.numeros)


# =========================
# Programa principal
# =========================
def main():
    stats = Estadisticas()
    stats.ingresar_numeros()

    print("\n=== RESULTADOS ===")
    print("Suma:", stats.suma())
    print("Promedio:", stats.promedio())
    print("Media:", stats.media())
    print("Máximo:", stats.maximo())
    print("Mínimo:", stats.minimo())


if __name__ == "__main__":
    main()
