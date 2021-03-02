def findelement(arr, n,key):
    for i in range (n):
        if (arr[i])==key:
            return i+1
        else:
            continue

arr = [1,2,4,2,3,1,5,6,3,1]
n = len(arr)
print(findelement(arr, n , 5))
