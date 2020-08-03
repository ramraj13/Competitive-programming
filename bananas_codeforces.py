
data=input()

def data_check(d):
    flag=d.split(' ')
    val=money_generator(flag[0],flag[2])
    borrow=val-int(flag[1])

    return borrow

def money_generator(price,amount):
    sum=0
    for x in range(1,int(amount)+1):sum+=int(price)*x

    return sum

if __name__=="__main__":
    b=data_check(data)
    if b > 0:print(b)
    else:print(0)

