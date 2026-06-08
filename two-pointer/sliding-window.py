arr = [3, 8, 2, 5, 7, 6, 12]
w = 4

current = 0
for i in range(w):
    current = current+arr[i]

max_sum = current
for i in range(1, len(arr)-w+1):
    current = current - arr[i-1] + arr[i+w-1]
    if (current > max_sum):
        max_sum = current

print(max_sum)
