# =========================
# Clase: Matriz
# =========================
class Matriz:
    def __init__(self, filas, columnas):
        self.filas = filas
        self.columnas = columnas
        self.datos = [[0 for _ in range(columnas)] for _ in range(filas)]

    def ingresar_datos(self):
        print(f"Ingrese los datos de la matriz ({self.filas}x{self.columnas}):")
        for i in range(self.filas):
            for j in range(self.columnas):
                self.datos[i][j] = float(input(f"[{i}][{j}]: "))

    def mostrar(self):
        for fila in self.datos:
            print(fila)

    # =========================
    # A * constante
    # =========================
    def multiplicar_constante(self, c):
        resultado = Matriz(self.filas, self.columnas)
        for i in range(self.filas):
            for j in range(self.columnas):
                resultado.datos[i][j] = self.datos[i][j] * c
        return resultado

    # =========================
    # A * B
    # =========================
    def multiplicar_matriz(self, otra):
        if self.columnas != otra.filas:
            raise ValueError("No se pueden multiplicar las matrices")

        resultado = Matriz(self.filas, otra.columnas)

        for i in range(self.filas):
            for j in range(otra.columnas):
                suma = 0
                for k in range(self.columnas):
                    suma += self.datos[i][k] * otra.datos[k][j]
                resultado.datos[i][j] = suma

        return resultado


# =========================
# Programa principal
# =========================
def main():
    print("=== MATRIZ A ===")
    A = Matriz(2, 2)
    A.ingresar_datos()

    print("\n=== MATRIZ B ===")
    B = Matriz(2, 2)
    B.ingresar_datos()

    print("\nMatriz A:")
    A.mostrar()

    print("\nMatriz B:")
    B.mostrar()

    # A * constante
    constante = float(input("\nIngrese una constante: "))
    A_const = A.multiplicar_constante(constante)

    print("\nResultado A * constante:")
    A_const.mostrar()

    # A * B
    AB = A.multiplicar_matriz(B)
    print("\nResultado A * B:")
    AB.mostrar()


if __name__ == "__main__":
    main()
