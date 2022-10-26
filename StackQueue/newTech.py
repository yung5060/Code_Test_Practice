def solution(progresses, speeds):
    temp = []
    for i in range(len(progresses)):
        a = int((100 - progresses[i]) / speeds[i])
        if int((100 - progresses[i]) / speeds[i]) != (100 - progresses[i]) / speeds[i]:
            a += 1
        temp.append(a)
    count = 1
    before = temp[0]
    answer = []
    for i in range(1, len(temp)):
        if temp[i] > before:
            answer.append(count)
            count = 1
            before = temp[i]
        else:
            count += 1
    answer.append(count)
    return answer

print(solution([95, 90, 99, 99, 80, 99], [1, 1, 1, 1, 1, 1]))