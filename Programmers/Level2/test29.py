import math

def solution(n):
    answer = []
    N = n
    d = 2
    while d <= int(math.sqrt(n)):
        if N % d != 0:
            d += 1
        else:
            answer.append(d)
            N //= d
    if N > 1:
        answer.append(int(N))
    answer = set(answer)
    answer = sorted(list(answer))
    return answer

print(solution(17))
print(solution(2))
print(solution(3))
print(solution(99))
print(solution(98))
print(solution(100))
print(solution(121))