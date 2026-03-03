# BURBUJA (Ordenamiento indirecto)
def burbuja_indirecta(lista):
    n = len(lista)
    indices = list(range(n))
    
    for i in range(n):
        for j in range(0, n - i - 1):
            if lista[indices[j]] > lista[indices[j + 1]]:
                indices[j], indices[j + 1] = indices[j + 1], indices[j]
    
    return indices

# --- Pruebas PE ---
enteros = [5, 2, 9, 1, 7]
idx = burbuja_indirecta(enteros)
print("Enteros ordenados:", [enteros[i] for i in idx])

# --- Pruebas POO ---
class Producto:
    def __init__(self, nombre, precio):
        self.nombre = nombre
        self.precio = precio

    def __gt__(self, otro):
        return self.precio > otro.precio

    def __repr__(self):
        return f"{self.nombre} (${self.precio})"

productos = [
    Producto("Laptop", 1200),
    Producto("Mouse", 25),
    Producto("Teclado", 80)
]

idx_prod = burbuja_indirecta(productos)
print("Productos ordenados por precio:", [productos[i] for i in idx_prod])