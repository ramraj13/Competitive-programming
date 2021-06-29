#include<iostream>
#include<vector>
#include<string>
#include<iterator>


using namespace std;

struct node
{
	char data;
	node* left;
	node* dag;
	node(char key)
	{
		data=key;
		left=nullptr;
		dag=nullptr;
	}
};


class Solution {
public:
	
    bool isSubsequence(string s, string t) {
		
		
		int n=0;
        if(s.length()==0){return 1;}
        else
        {
            for(int i=0;i < t.length(); i++) { if(s.at(n)==t.at(i)) { n++; if(n==s.length()){break;} } }
			
			//cout << s.length() << endl;
		    if(n==s.length()){ return 1;}
		    else{ return 0; }
            
        }
		
		
		
        
    }
};

int main()
{
	
	Solution sol;
	
	cout <<sol.isSubsequence("b","abc") << endl;
	
}