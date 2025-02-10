while True:
    try:
        rows,cols = input().split(" ")
        rows = int(rows)
        cols = int(cols)

        arr = [[0 for i in range(cols)] for j in range(rows)]
        for i in range(rows):
            arr[i][0:cols] = list(map(int, input().split(" ")))
        
        for i in range(cols):
            for j in range(rows):
                print(str(arr[j][i]),end=" ")
            print()
    except EOFError:
        break;
        