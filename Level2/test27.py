def solution(stack1, stack2, stack3):
    answer = ""
    total = stack1 + stack2 + stack3
    total.sort(reverse = True)
    for it in total:
        if len(stack1) and it == stack1[-1]:
            stack1.pop()
            answer += "1"
        elif len(stack2) and it == stack2[-1]:
            stack2.pop()
            answer += "2"
        elif len(stack3) and it == stack3[-1]:
            stack3.pop()
            answer += "3"
    return answer

print(solution([2, 7], [4, 5], [1]))