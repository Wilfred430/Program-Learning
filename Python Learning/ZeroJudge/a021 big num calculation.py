while True:
    try:
        a,b,c = input().split(" ")
        if b == '+':
            print(int(int(a) + int(c)))
        elif b == '-':
            print(int(int(a) - int(c)))
        elif b == '*':
            print(int(int(a) * int(c)))
        elif b == '/':
            print(int(int(a) // int(c)))
    except EOFError:
        break
