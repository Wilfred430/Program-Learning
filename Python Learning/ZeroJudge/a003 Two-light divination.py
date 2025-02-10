n1,n2 = input().split()
s = (int(n1)*2 + int(n2))%3

if s==0:
    print("普通")
elif s==1:
    print("吉")
else:
    print("大吉")
    