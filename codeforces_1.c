/*  Grigoriy, like the hero of one famous comedy film, found a job as a night security guard at the museum. At first night he received embosser and was to take stock of the whole exposition.

Embosser is a special devise that allows to "print" the text of a plastic tape. Text is printed sequentially, character by character. The device consists of a wheel with a lowercase English letters written in a circle, static pointer to the current letter and a button that print the chosen letter. At one move it's allowed to rotate the alphabetic wheel one step clockwise or counterclockwise. Initially, static pointer points to letter 'a'. Other letters are located as shown on the picture:


After Grigoriy add new item to the base he has to print its name on the plastic tape and attach it to the corresponding exhibit. It's not required to return the wheel to its initial position with pointer on the letter 'a'.

Our hero is afraid that some exhibits may become alive and start to attack him, so he wants to print the names as fast as possible. Help him, for the given string find the minimum number of rotations of the wheel required to print it.

Input
The only line of input contains the name of some exhibit — the non-empty string consisting of no more than 100 characters. It's guaranteed that the string consists of only lowercase English letters.

Output
Print one integer — the minimum number of rotations of the wheel, required to print the name given in the input.

Codeforces

Author : @ramraj13 | 10:57 am | 22-08-2020 

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

struct  data_key
{
    char data;
    int key;
    struct data_key *link;
};

struct data_key *insert(struct data_key *root,int data,int key)
{
    if (root->link==NULL){
		root->link=(struct data_key *)malloc(sizeof(struct data_key));
		root=root->link;
		root->data=data;
        root->key=key;
		root->link=NULL;
		
	}
	return root;
	
}


char  * return_array(){}


struct data_key* binary_search(struct data_key * arraypoint ,struct data_key * point, char character,int *sum){

    struct data_key *temp;
    temp=NULL;
    int clock,anticlock;
    clock=anticlock=0;
    for(temp=arraypoint;temp->data!=character;temp=temp->link);
    clock=abs(temp->key - point->key);
    anticlock=26-clock;

    if (clock >anticlock){//printf(" The anticlock is : %d \n",anticlock);
            *sum=*sum+anticlock;
    }
    else{ //printf("The clock is : %d \n", clock);
            *sum=*sum+clock;
     }

    

    point=temp;
    return point ;

}


int clock_queue(int *top){}


int main(){
    struct data_key *start, *temp,*point;
    start=temp=NULL;
    int count=0;
    int sum;
    char string[100];
    for (int i=97; i< 123 ; i++){ 
        count++;

        if (start==NULL){ 
            start=(struct data_key *)malloc(sizeof(struct data_key));
            start->data=(char)i;
            start->key=count;
            start->link=NULL;
            temp=start;
            
        }
        else{
           temp=insert(temp,(char)i,count);
        }

    }
    //printf("%u %c %d ",start,start->data,start->key);
    //printf("%u %c %d ",temp,temp->data,temp->key);

    //for (demo=start;demo->data!='u';demo=demo->link);
    //printf("%u %c %d ",demo,demo->data,demo->key);


    //point=demo;

    //point=binary_search(start, point ,'s');

    //printf("%u %c %d ",point,point->data,point->key);

    
    gets(string);


    int length =strlen(string);
    point=start;
    for (int i=0; i< length; i++){

        point=binary_search(start,point,string[i],&sum);


    }
    printf("%d ",sum);

}

