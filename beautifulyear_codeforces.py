import concurrent.futures

year=int(input())

def year_check(y):
        flag=y
        year_str=[]

        for x in range(len(str(flag))):year_str.append(str(flag)[x])

        x=duplicate(year_str)
        if x==1:return flag
        else:return 0

def duplicate(list):
    demo_list=[]
    count=0
    for x in list:
        if x not in demo_list:demo_list.append(x);count+=1

    if len(list)==count:return 1
    else: return 0

def sort(y1):
    l=[]
    with concurrent.futures.ThreadPoolExecutor() as executor:
        count=1
        while count < 9000:
            result=executor.submit(year_check,(year+count))
            l.append(result.result())
            count+=1

    return l

def ans(list):

    for x in list:
        if x > 0: return x;break

if __name__=="__main__":
    answer=ans(sort(year))
    print(answer)





