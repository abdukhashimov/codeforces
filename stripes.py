from array import array
def stripes(array):
    for row in array:
        count = 0
        for item in row:
            if item == 'R':
                count += 1
        if count == 8:
            return "R"
    return "B"


t = int(input())

while t > 0:
    res = []
    input()
    for i in range(8):
        res.append(input())
    print(stripes(array=res))
    t -= 1
