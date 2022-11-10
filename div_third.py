def number_replacement(length, array, word):
    respArray = ['' for i in range(length)]
    for i in range(length):
        for index, j in enumerate(array):
            if j == array[i]:
                respArray[index] = word[i]
    if ''.join(respArray) == word:
        return "YES"
    return "NO"


t = int(input())

while t > 0:
    length = int(input())
    array = list(map(int, input().split(' ')))
    word = input()
    print(number_replacement(length, array, word))
    t -= 1
