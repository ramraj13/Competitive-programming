
##THE OUTPUT IS CORRECT BUT STILL THE CHECKER GIVES ERROR IN LINE 2

rc=input()

def apart(inp):
    msg=inp.split(' ')
    return msg[0],msg[1]

def pattern(row,column):

    for i in range(int(row)):
        for j in range(int(column)):space(j,i,int(column))
        print('\r')

def space(pos,index_r,index_c):
    st =""
    eve=""
    if index_r%2==0:eve+="#"

    else:
        z=index_r+1
        if ((z+ 1)//2)%2!=0:
            if pos==index_c-1:st+="#";
            else:st+="."

        elif ((z + 1)//2)%2==0 :
            if pos==0:st+="#"
            else:st+="."
    print(eve,end="")
    print(st ,end="")

if __name__=="__main__":
    r,c=apart(rc)
    pattern(r,c)

