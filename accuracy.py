n = int(input())

ns = str(n)

res = ""

for i in range(len(ns)-1):
    cnt = 1
    if(ns[i]==ns[i+1]):
        cnt+=1
    else:
        cnt = 1
    res+=(str(cnt)+str(ns[i]))

print(res)
    