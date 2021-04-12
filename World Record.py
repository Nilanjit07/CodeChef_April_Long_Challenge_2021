for _ in range(int(input())):
    k1,k2,k3,v = map(float, input().split())
    a = k1 * k2 * k3 * v
    b = 100/a
    b = round(b,2)
    if b < 9.58:
        print("YES")
    else:
        print("NO")
