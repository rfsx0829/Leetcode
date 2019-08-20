a, arr = int(input()), []
for i in range(a):
    arr.append(input().split())
arr.sort(key=lambda c: int(c[2]))
print(arr[-1][0] + " " + arr[-1][1])
print(arr[0][0] + " " + arr[0][1])
