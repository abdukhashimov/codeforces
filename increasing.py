t = int(input())


def re_arrange(array):
    array.sort()
    i = 1
    j = 0
    while i < len(array):
        if array[i] == array[j]:
            return "NO"
        i += 1
        j += 1
    return "YES"


while t > 0:
    length = int(input())
    array = list(map(int, input().split(' ')))
    print(re_arrange(array=array))
    t -= 1
