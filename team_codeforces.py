problems=input()

def sort_out(message):
    count=0
    m=message.split(' ')
    for x in m:
        if x=='1':count+=1
    if count >=2:return 1
    else: return 0

def call(time):
    sum=0
    for x in range(int(time)):
        msg=input()
        out=sort_out(msg)
        sum+=out
    print(sum)

if __name__=="__main__":
    call(problems)