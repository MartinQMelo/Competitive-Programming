n = int(input())
nums = list(map(int, input().split()))
nums.sort()

for i in range(n - 1):
    if nums[i] != i+1:
        print(i+1)
        break