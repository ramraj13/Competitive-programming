
string1=input()
string2=input()

def make_list(s1,s2):
    list1=[];list2=[];
    for x in range(len(s1)):list1.append(s1[x]);list2.append(s2[x])

    return list1,list2

def string_compare(list1,list2):
    list=[]
    for x in range(len(list1)):
        if list1[x]==list2[x]:list.append(0)
        else:list.append(1)

    return list

def convert(list):
    st=""
    for x in list:st=st+str(x)

    return st


if __name__=="__main__":
    l1=[];l2=[]
    l1,l2=make_list(string1,string2)
    string=convert(string_compare(l1,l2))
    print(string)

