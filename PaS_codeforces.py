
string1=input()
string2=input()

def length_check(s1,s2):
    count=0
    check=0
    for x in range(len(s1)):
        if s1[x].lower()==s2[x].lower():count+=1

        elif s1[x].lower()!=s2[x].lower():
            if ord(s1[x].lower()) > ord(s2[x].lower()):check+=1;break
            elif ord(s2[x].lower()) > ord(s1[x].lower()):check-=1;break


    if count==len(s1):print(0)
    else:print(check)

if __name__=="__main__":
    length_check(string1,string2)
    