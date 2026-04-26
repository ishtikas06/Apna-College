class Heap:

    def __init__(self):
        self.heap = []
        self.size = 0

    def compare(self, a, b):
         return b > a
    
    def insert(self, val):
        self.heap.append(val)
        self.size += 1

        idx = self.size - 1

        while idx > 0:   # FIXED
            parent = (idx - 1) // 2

            if self.compare(self.heap[parent], self.heap[idx]):
                self.heap[parent], self.heap[idx] = self.heap[idx], self.heap[parent]
                idx = parent
            else:
                break

    def __heapify(self, i): #idx = parent index
        if i >= self.size:
            return
        l, r = 2*i +1, 2*i+2

        max_i = i

        if l < self.size and self.heap[l] > self.heap[max_i]:
            max_i = l

        if r < self.size and self.heap[r] > self.heap[max_i]:
            max_i = r

        self.heap[max_i], self.heap[i] = self.heap[i], self.heap[max_i]
        if max_i != i:
            self.__heapify(max_i)

    def pop(self):
        self.heap[0], self.heap[self.size-1] = self.heap[self.size-1], self.heap[0]

        ans = self.heap.pop()
        self.size -= 1

        self.__heapify(0)

    def print(self):
        print("Heap is: ", end="")
        for i in range(0, self.size):
            print(self.heap[i], end= " ")
        print()


heap = Heap()
heap.insert(9)
heap.insert(4)
heap.insert(8)
heap.insert(1)
heap.insert(2)
heap.insert(5)

heap.print()

while heap.size != 0:
    heap.pop()

    heap.print()