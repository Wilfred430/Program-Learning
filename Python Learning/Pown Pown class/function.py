def GCD(a,b):
    if b == 0:
        return a
    return GCD(b,a//b)
    
print(GCD(180,24))
print(GCD(3,6))
print(GCD(3,21))
print()

def minus(n1,n2):
    return n1-n2

print(minus(1,3))
print(minus(n2=1,n1=3))
print()

# no limit arguements
# concept: let data become tuple set -> use loop to operate
def avg(*num):
    sum = 0
    for i in num:
        sum += i
    return sum/len(num)

print(avg(1,9,8,-3,-6,-4,7,2))