from abc import ABC, abstractmethod
from typing import List


# ----- Abstracción -----
class SortStrategy(ABC):

    @abstractmethod
    def sort(self, data: List[int]) -> List[int]:
        pass


# ----- Implementación concreta: QuickSort -----
class QuickSort(SortStrategy):

    def sort(self, data: List[int]) -> List[int]:
        return self._quicksort(data.copy())

    def _quicksort(self, arr: List[int]) -> List[int]:
        if len(arr) <= 1:
            return arr

        pivot = arr[len(arr) // 2]
        left = [x for x in arr if x < pivot]
        middle = [x for x in arr if x == pivot]
        right = [x for x in arr if x > pivot]

        return self._quicksort(left) + middle + self._quicksort(right)


# ----- Clase de alto nivel -----
class Sorter:

    def __init__(self, strategy: SortStrategy):
        self._strategy = strategy

    def sort(self, data: List[int]) -> List[int]:
        return self._strategy.sort(data)


# ----- MAIN -----
if __name__ == "__main__":
    data = [8, 3, 1, 7, 0, 10, 2]

    strategy = QuickSort()
    sorter = Sorter(strategy)

    sorted_data = sorter.sort(data)

    print("Original:", data)
    print("Ordenado:", sorted_data)