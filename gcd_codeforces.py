import math
test_case=input().split(' ')

def heap_left(fixed,gcd):return gcd-math.gcd(fixed,gcd)

def assignment(p1,p2,n):
    list=[int(n)]
    flag=int(n)
    count=0
    while flag!=0:
        if count%2==0:flag=heap_left(int(p1),list[count]);list.append(heap_left(int(p1),list[count]))
        else:flag=heap_left(int(p2),list[count]);list.append(heap_left(int(p2),list[count]))
        count+=1

    if len(list)%2==0:print(0)
    else:print(1)

if __name__=="__main__":
    assignment(test_case[0],test_case[1],test_case[2])
    #print(test_case[0],test_case[1],)