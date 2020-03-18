n = int(input())
x = 0
while n:
    str = input()
    if str.find('++') >= 0:
        x += 1
    else:
        x -= 1
    n -= 1
print(x)
