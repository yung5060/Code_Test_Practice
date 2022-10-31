def solution(priorities, location):
    temp = []
    for i in range(1, len(priorities) + 1):
        temp.append(i)
    temp.sort(key = lambda x : priorities[x - 1], reverse=True)
    return temp

print(solution([2, 1, 3, 2], 2))