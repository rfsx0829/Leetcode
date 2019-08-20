while True:
    try:
        m, n = raw_input().split(' ')
        m = int(m)
        n = int(n)
    except:
        break
    if m%2 == 0 or n%2 == 0:
        ss = ".00"
    else:
        ss = ".41"
    
    print(str(m*n)+ss)
