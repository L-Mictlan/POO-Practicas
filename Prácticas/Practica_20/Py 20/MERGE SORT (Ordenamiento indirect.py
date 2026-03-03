# MERGE SORT (Ordenamiento indirecto)
def merge(lista, izquierda, derecha):
    resultado = []
    i = j = 0
    while i < len(izquierda) and j < len(derecha):
        if lista[izquierda[i]] <= lista[derecha[j]]:
            resultado.append(izquierda[i])
            i += 1
        else:
            resultado.append(derecha[j])
            j += 1
    resultado.extend(izquierda[i:])
    resultado.extend(derecha[j:])
    return resultado

def merge_indirecto(lista, indices):
    if len(indices) <= 1:
        return indices
    medio = len(indices) // 2
    izquierda = merge_indirecto(lista, indices[:medio])
    derecha = merge_indirecto(lista, indices[medio:])
    return merge(lista, izquierda, derecha)

def merge_sort_indirecto(lista):
    indices = list(range(len(lista)))
    return merge_indirecto(lista, indices)

# --- Pruebas POO ---
class Estudiante:
    def __init__(self, nombre, promedio):
        self.nombre = nombre
        self.promedio = promedio

    def __le__(self, otro):
        return self.promedio <= otro.promedio

    def __repr__(self):
        return f"{self.nombre} ({self.promedio})"

estudiantes = [
    Estudiante("Ana", 90),
    Estudiante("Luis", 85),
    Estudiante("Carlos", 95)
]

idx = merge_sort_indirecto(estudiantes)
print("Estudiantes ordenados por promedio:", [estudiantes[i] for i in idx])