a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)
if b**2 - 4*a*c == 0:
    root = int((-b + (b**2 - 4*a*c)**0.5)/(2*a))
    print("Two same roots x=" + str(root))
elif b**2 - 4*a*c > 0:
    root1 = int((-b + (b**2 - 4*a*c)**0.5)/(2*a))
    root2 = int((-b - (b**2 - 4*a*c)**0.5)/(2*a))
    print("Two different roots x1=" + str(root1) + " , x2=" + str(root2))
else:
    print("No real root")