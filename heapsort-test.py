import sys
import random

from heapsort import HeapSort

if __name__ == "__main__":
    if len(sys.argv) <= 1:
        print("Usage:", sys.argv[0], "<num_of_elements>")
        sys.exit(1)
        
    size = int(sys.argv[1])
    array = []

    for i in range(0, size):
        y = random.randint(0, 100)
        array.append(y)

    h = HeapSort(array)
    h.dump()
    h.sort()
    h.dump()
    
