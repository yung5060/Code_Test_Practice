def solution(priorities, location):
    tmp = []
    order = []
    for i in range(len(priorities)):
        tmp.append(i)
    while(len(priorities) != 0):
        if(len(priorities) == 1):
            order.append(tmp[0])
            break
        maximum = max(priorities[1::])
        if priorities[0] >= maximum:
            order.append(tmp[0])
            priorities = priorities[1::]
            tmp = tmp[1::]
        else:
            priorities.append(priorities[0])
            tmp.append(tmp[0])
            priorities = priorities[1::]
            tmp = tmp[1::]
    return order.index(location) + 1

print(solution([2, 1, 3, 2], 2))
print(solution([1, 1, 9, 1, 1, 1], 0))
