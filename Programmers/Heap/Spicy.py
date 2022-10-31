import heapq

def solution(scoville, K):
    heapq.heapify(scoville)
    count = 0
    while scoville[0] < K and len(scoville) > 1:
        a = heapq.heappop(scoville)
        b = heapq.heappop(scoville)
        heapq.heappush(scoville, a + (2 * b))
        count += 1
    return count if scoville[0] >= K else -1

print(solution([1, 2, 3, 9, 10, 12], 7))