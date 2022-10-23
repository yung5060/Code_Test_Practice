def solution(clothes):
    dic = {}
    for item in clothes:
        if item[1] in dic:
            dic.get(item[1]).append(item[0])
        else:
            dic[item[1]] = [item[0]]
    answer = 1
    print(dic)
    for k, v in dic.items():
        answer *= len(v) + 1
    return answer - 1

print(solution([["crow_mask", "face"], ["blue_sunglasses", "face"], ["smoky_makeup", "face"]]))