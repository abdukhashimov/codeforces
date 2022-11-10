def is_sum(array):
    if array[0] + array[1] == array[2] or array[0] + array[2] == array[1] or array[0] == array[1] + array[2]:
        return "YES"
    return "NO"

t = int(input())

while t > 0:
    array = list(map(int, input().split(' ')))
    print(is_sum(array=array))
    t -= 1
