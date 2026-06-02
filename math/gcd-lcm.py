def gcd(a, b):
    while b:
        temp = a
        a = b
        b = temp%a
    return a

print("gcd of 48 and 18 is = ", gcd(48, 18))
print("lcm of 48 and 18 is = ", (48*18)/gcd(48, 18))