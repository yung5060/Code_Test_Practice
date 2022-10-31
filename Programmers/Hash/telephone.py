def solution(phone_book):
    phone_book.sort()
    for i in range(len(phone_book) - 1):
        if len(phone_book[i]) < len(phone_book[i + 1]):
            if phone_book[i + 1][:len(phone_book[i])] == phone_book[i]:
                return False
    return True

def solution1(phone_book):
    phone_book.sort()
    for p, r in zip(phone_book, phone_book[1:]):
        if r.startswith(p):
            return False
    return True

print(solution1(["119", "97674223", "1195524421"]))
print(solution1(["123","456","789"]))
print(solution1(["12","123","1235","567","88"]))