for i in range(5):
    print(i)
else:
    print(i) #Before the loop come to end, the operation work previously
print()
    
n = input("Please enter a integer which you want to find: ")
n = int(n)
for i in range(n):
    if i*i == n:
        print("Find a root solution: ",i)
        break
else:
    print("There is no root solution of the num: ",n)