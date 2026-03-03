# QUICK SORT (PE y POO)
def quick_sort(lista):
    if len(lista) <= 1:
        return lista
    
    pivote = lista[len(lista) // 2]
    menores = [x for x in lista if x < pivote]
    iguales = [x for x in lista if x == pivote]
    mayores = [x for x in lista if x > pivote]
    
    return quick_sort(menores) + iguales + quick_sort(mayores)

# --- Pruebas PE ---
enteros = [5, 2, 9, 1, 7]
print("Enteros ordenados:", quick_sort(enteros))

caracteres = ['d', 'a', 'c', 'b']
print("Caracteres ordenados:", quick_sort(caracteres))

# --- Pruebas POO ---
class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def __lt__(self, otro):
        return self.edad < otro.edad

    def __repr__(self):
        return f"{self.nombre} ({self.edad})"

personas = [
    Persona("Ana", 25),
    Persona("Luis", 20),
    Persona("Carlos", 30)
]

print("Personas ordenadas por edad:", quick_sort(personas))