while True:
    try:
        For = input().replace('/','//')
        print(eval(For))
    except EOFError:
        break
    