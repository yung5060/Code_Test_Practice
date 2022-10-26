def solution(nums):
    temp = set(nums)
    numOfPokemons = int(len(nums) / 2)
    numOfSet = len(temp)
    return min(numOfPokemons, numOfSet)

print(solution([3,1,2,3]))
print(solution([3,3,3,2,2,4]))
print(solution([3,3,3,2,2,2]))
