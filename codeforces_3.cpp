/* Vasya has his favourite number n. He wants to split it to some non-zero digits. It means, that he wants to choose some digits d1,d2,…,dk, such that 1≤di≤9 for all i and d1+d2+…+dk=n.

Vasya likes beauty in everything, so he wants to find any solution with the minimal possible number of different digits among d1,d2,…,dk. Help him!

Input
The first line contains a single integer n — the number that Vasya wants to split (1≤n≤1000).

Output
In the first line print one integer k — the number of digits in the partition. Note that k must satisfy the inequality 1≤k≤n. In the next line print k digits d1,d2,…,dk separated by spaces. All digits must satisfy the inequalities 1≤di≤9.

You should find a partition of n in which the number of different digits among d1,d2,…,dk will be minimal possible among all partitions of n into non-zero digits. Among such partitions, it is allowed to find any. It is guaranteed that there exists at least one partition of the number n into digits.

Author @ramraj13 |  DATE 25-08-2020 | 17:12 pm

*/



#include<iostream>
#include<map>
using namespace std;

extern "C"{
    #include<stdlib.h>
    #include<math.h>
}


bool check_value(int key,int number){
    
    int flag=key;
    int sum=0;
    while(sum < number){ sum=sum+flag;}
    
    if (sum==number){ return true ; }
    else { return false; }

}



int main(){

    map<int,int> hashmap1;
    int number;
    cin >> number;
    int count=0;

    for(int i=1; i< 10 ; i++){
        bool alpha=check_value(i,number);
        if (alpha==true){ 
            count++;
            hashmap1.insert(pair<int,int>(count,i));}
        //else{ hashmap1.insert(pair<int,int>(0,number));}



    }
    /*
    map<int, int>::iterator itr; 
    for (itr = hashmap1.begin(); itr != hashmap1.end(); ++itr) { 
        cout  << itr->first << " "
              << itr->second << '\n'; 
    } 
    */

    int size=hashmap1.size();
    int element=hashmap1.at(size);

    int remainder=number/element;

    cout << remainder <<"\n";

    for(int x=0; x< remainder; x++){ cout << element << " ";}




    
}