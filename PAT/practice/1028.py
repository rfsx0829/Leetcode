from collections import Counter
  
while True:
    try:
        a, b = input().split()
        res = True
        for i in Counter(b):
            if Counter(a)[i] - Counter(b)[i] < 0:
                res = False
                break
        print("Yes" if res else "No")
    except:
        break