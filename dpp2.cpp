#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

class Solution 
{
	private:
		int count=0;
public:

	int return_num(int n)
	{
		int temp=(rand()% n)+1;
		if(n%temp==0 and temp!=n){ ;return n-temp; }
		else if(temp==1){return 0; }
		else
		{
			return return_num(n);
		}
	}

    bool divisorGame(int n) 
	{
		count++;
		int temp=return_num(n);
		if(temp==1)
		{
			if(count%2==1){return true;}
			else{ return false;}
		}
		else if(temp==0){return false;}
		else
		{
			return divisorGame(temp);
		}
		
	}
};


int main()
{
	int number;
	cin >> number;
	Solution sol;
	
	bool temp=sol.divisorGame(number);
	cout << temp  << endl;
	
}