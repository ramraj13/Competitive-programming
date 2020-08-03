username=input()

def separate(usr):
    n_list = []
    for x in range(len(usr)):n_list.append(usr[x])

    return n_list


def sort(list):
    flag=[]
    for x in list:
        if x not in flag:flag.append(x)

    return flag


def f_list():
    l=[]
    l=sort(separate(username))
    if len(l)%2==0:print("CHAT WITH HER!")
    else:print("IGNORE HIM!")

if __name__=="__main__":
    f_list()