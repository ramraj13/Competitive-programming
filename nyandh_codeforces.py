import concurrent.futures
p,t=input().split(' ')
list=[]

def problem_time(problems):
    time=0
    for i in range(1,int(problems)+1):time+=i*5
    return time

def time_check(problems,t_time):
    pt=problem_time(int(problems))
    if ( pt/60 +int(t_time)/60) <= 4.0 :return int(problems)
    else:return 0

def final_check(problems,list):
    with concurrent.futures.ThreadPoolExecutor() as executor:
        for i in range(1,int(problems)+1):
            result=executor.submit(time_check,i,t)
            list.append(result.result())
    return list

if __name__=="__main__":
    l=[]
    l=final_check(p,list)
    print(max(l))
