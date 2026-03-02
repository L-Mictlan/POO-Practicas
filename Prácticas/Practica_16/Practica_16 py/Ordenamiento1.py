from abc import ABC, abstractmethod
from typing import List


# ----- Abstracción (D de SOLID) -----
class SortStrategy(ABC):

    @abstractmethod
    def sort(self, data: List[int]) -> List[int]:
        pass


# ----- Implementación concreta -----
class BubbleSort(SortStrategy):

    def sort(self, data: List[int]) -> List[int]:
        arr = data.copy()
        n = len(arr)

        for i in range(n):
            for j in range(0, n - i - 1):
                if arr[j] > arr[j + 1]:
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]

        return arr


# ----- Clase de alto nivel -----
class Sorter:

    def __init__(self, strategy: SortStrategy):
        self._strategy = strategy

    def sort(self, data: List[int]) -> List[int]:
        return self._strategy.sort(data)


# ----- MAIN -----
if __name__ == "__main__":
    data = [5, 2, 9, 1, 5, 6]

    strategy = BubbleSort()
    sorter = Sorter(strategy)

    sorted_data = sorter.sort(data)

    print("Original:", data)
    print("Ordenado:", sorted_data)