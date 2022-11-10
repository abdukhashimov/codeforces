import math


def coprime(array):
    maxVal = -1
    # TODO: Create index and do the broot force for that indexes
    for i, num in enumerate(array):
        for j in range(i, len(array)):
            if math.gcd(num, array[j]) == 1:
                maxVal = max(maxVal, i + j + 2)

    return maxVal


t = int(input())

while t > 0:
    length = int(input())
    array = list(map(int, input().split(' ')))
    print(coprime(array=array))
    t -= 1
