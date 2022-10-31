def solution(S, C):
    stringToSet = set(S)
    stringtoList = list(S)
    indexes = []
    for it in stringToSet:
        if stringtoList.count(it) == 1:
            continue
        indexes += list(filter(lambda x : stringtoList[x] == it, range(len(stringtoList))))
    before = indexes[0]
    array = []
    for i in range(1, len(indexes)):
        temp = []
        diff = indexes[i] - before
        if (diff > 0):
            for i in range(diff):
                temp.append(before + i + 1)
            before = indexes[i]
            array.append(temp)
        else:
            before = indexes[i]
            continue
    for c in C:
        for it in array:
            if c in it:
                a




    return array



print(solution("aabcba", [1, 3, 2]))