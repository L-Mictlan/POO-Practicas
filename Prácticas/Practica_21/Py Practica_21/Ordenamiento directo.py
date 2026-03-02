class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad


class Ordenador:

    def ordenar_enteros_indirecto(self, lista):
        indices = list(range(len(lista)))
        self._quicksort(lista, indices, 0, len(lista) - 1)

        print("Orden indirecto:")
        for i in indices:
            print(lista[i], end=" ")
        print()

    def _quicksort(self, lista, indices, low, high):
        if low < high:
            pi = self._partition(lista, indices, low, high)
            self._quicksort(lista, indices, low, pi - 1)
            self._quicksort(lista, indices, pi + 1, high)

    def _partition(self, lista, indices, low, high):
        pivot = lista[indices[high]]
        i = low - 1

        for j in range(low, high):
            if lista[indices[j]] < pivot:
                i += 1
                indices[i], indices[j] = indices[j], indices[i]

        indices[i + 1], indices[high] = indices[high], indices[i + 1]
        return i + 1

    def ordenar_personas(self, personas):
        personas.sort(key=lambda p: p.edad)
        print("\nPersonas ordenadas por edad:")
        for p in personas:
            print(p.nombre, "-", p.edad)


# MAIN
if __name__ == "__main__":
    o = Ordenador()

    numeros = [9, 3, 7, 1, 5]
    o.ordenar_enteros_indirecto(numeros)

    personas = [
        Persona("Ana", 22),
        Persona("Luis", 18),
        Persona("Maria", 30)
    ]

    o.ordenar_personas(personas)