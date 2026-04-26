import heapq
heap = heapq()
x = input()
# insert
heapq.heappush(heap, x)

# remove top
heapq.heappop(heap)

# peek top
heap[0]