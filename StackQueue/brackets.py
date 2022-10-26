def solution(s):
    stack = []
    for letter in s:
        if(len(stack) == 0):
            if(letter == ')'):
                return False
            stack.append(letter)
            continue
        if(stack[-1] != letter):
            stack.pop()
        else:
            stack.append(letter)
    return len(stack) == 0