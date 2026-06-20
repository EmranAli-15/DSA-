def bigmod(base, pow, mod):
    if pow == 0:
        return 1
    elif pow%2 == 1:
        p1 = base%mod
        x = bigmod(base, pow-1, mod)
        p2 = x%mod
        return (p1*p2)%mod
    else:
        x = bigmod(base, pow/2, mod)
        return (x*x)%mod

print(bigmod(2, 30, 11))