arr = [1, 2, 3, 5, 7, 10, 11, 15]

i = 0
j = len(arr)-1


while i < j:
    sum = arr[i]+arr[j]
    if sum == 15:
        print(arr[i], "+", arr[j], " =>", sum)
        break
    
    if sum < 15:
        i = i+1
    else:
        j = j-1

