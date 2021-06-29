#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

class Solution 
{
	
private:
	
	vector<int> array;
public:
	
	
	int  divide(int number)
	{
		int count=0;
		while(number!=0)
		{
			if(number%2==1){ count++;};number/=2;
		}
		return count;
	}
	

	
    vector<int> countBits(int n)
	{
		for(int i=0;i <=n;i++)
		{
			array.push_back(divide(i));
		}
		
		return array;
    }
};


int main()
{
	int number;
	cin >> number;
	
	Solution sol;
	vector<int>temp=sol.countBits(number);
	for(auto e: temp){cout << e <<" " ;}
	
	
	
	

}