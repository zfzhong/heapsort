"""
Heapsort algorithm implemented in Python 3.
"""

class HeapSort:
    def __init__(self, array):
        self.array = array
        self.length = len(array)

    def swap(self, i, j):
        tmp = self.array[i]
        self.array[i] = self.array[j]
        self.array[j] = tmp

    def adjust_heap(self, i, n):
        while 2*i + 1 < n:
            child = 2*i + 1
            
            if child + 1 < n and self.array[child + 1] > self.array[child]:
                child = child + 1

            if self.array[i] >= self.array[child]:
                return
            
            self.swap(i, child)
            i = child
        
    def construct_heap(self):
        i = (self.length - 1) // 2
        while i >= 0:
            self.adjust_heap(i, self.length)
            i = i - 1

    def sort(self):
        self.construct_heap()
        for i in range(0, self.length):
            self.swap(0, self.length-i-1)
            self.adjust_heap(0, self.length-i-1)


    def dump(self):
        for i in range(0, self.length):
            print(self.array[i], end=" ")
        print("")
