list=[]
abbr=[]

times=input()

def shortner(name):

   new_name=name[0]+str(len(name)-2)+name[-1]
   return new_name
def accept():
    f=[]
    while True:
        word=input()
        f=word.split(' ')
        if len(f)==1:break
        else:print("One word per n");f.pop();continue

    return f


def check_length(word):
    if len(word)>10:return 1

def show(f_list):
    for x in f_list:
        print(x)

def call(time):
    for x in range(int(time)):
        f_word=accept()

        if f_word[0].islower():
                if 1 <=len(f_word[0]) <= 100 :list.append(f_word[0])
                else:print("Out of length")

        else:print("Uppercase not allowed")

    for x in list:
        if check_length(x)==1:abbr.append(shortner(x))
        else: abbr.append(x)

    show(abbr)



if __name__=="__main__":

    if 1 <= int(times) <= 100:
        call(times)
    else: print(f"Integer exceeded by {int(times)- 100}")






