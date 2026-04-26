class Heap:

    def __init__(self, max_size):
        self.heap = [0]*max_size
        self.size = 0

    # a is current, b is target
    # Returns True is b is to be swapped
    def compare(self, a, b):
         return b > a
    
    def insert(self, val):
        self.size += 1

        # insert at the end of heap
        self.heap[self.size] = val

        # move value to it's atcual place
        idx = self.size

        while idx > 1:
            parent = idx//2

            if self.compare(self.heap[parent], self.heap[idx]):
                self.heap[parent], self.heap[idx] = self.heap[idx], self.heap[parent]
                idx = parent
            else:
                break

    def print(self):
        print("Heap is: ", end="")
        for i in range(1, self.size+1):
            print(self.heap[i], end= " ")

heap = Heap(5)
heap.insert(10)
heap.insert(20)
heap.insert(21)
heap.insert(15)
# heap.insert(35)

heap.print()