n1 = int(input("Please enter a num1: "))
n2 = int(input("Please enter a num2: "))
op = input("Please enter the operation which you want: ")

if op == "+":
    print(n1+n2)
elif op == "-":
    print(n1-n2)
elif op == "*":
    print(n1*n2)
elif op == "/":
    print(n1/n2)
else:
    print(n1**n2)    