t = int(input())

def solve(word):
    all = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes"
    if all.find(word) >= 0:
        print("YES")
    else:
        print("NO")

while t > 0:
    word = input()
    solve(word)
    t-=1
