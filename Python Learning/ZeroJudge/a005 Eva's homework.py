line = input()
for i in line:
    while True:
        try:
            input_str = input()
            a = list(map(int,input_str.split()))
            if a[3]/a[2] == a[2]/a[1]:
                a = a + [int(a[3]*(a[2]/a[1]))]
                print(str(a[0])+" "+str(a[1])+" "+str(a[2])+" "+str(a[3])+" "+str(a[4]))
            else:
                a = a + [int(a[3]+(a[2]-a[1]))]
                print(str(a[0])+" "+str(a[1])+" "+str(a[2])+" "+str(a[3])+" "+str(a[4]))
        except EOFError:
            break