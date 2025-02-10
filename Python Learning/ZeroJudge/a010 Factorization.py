Dem=2;t=0
num = int(input())
while num != 1:
    t = 0
    while num % Dem == 0:
        num /= Dem
        t+=1
    if t > 0:
        if t > 1:
            print(str(Dem)+"^"+str(t),end="")
        else:
            print(str(Dem),end="")
    if t > 0 and num != 1:
        print(" * ",end="")
    Dem += 1
    