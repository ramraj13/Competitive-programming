#include<iostream>
#include<string>
#include<vector>
#include<iterator>


using namespace std;


class staircase
{
		private:
			int length;
			string list;
			vector<int> v;
		public:
			staircase(int l, string str)
			{
				length=l;
				list=str;
			}
			void accept()
			{
				int freq =0;
				int count=0;
				list=list+" ";
				int first=0,last=0;
				while(count < list.length())
				{ 
					last++;
					if(list.at(count)==' ')
					{
						string sub=list.substr(first,last-1);
						int len=0;
						for(int i=0;i< sub.length();i++)
						{
							len=len*10 + ((int)sub.at(i)-48);
						}
						
						v.push_back(len);
						first=count+1;
						last=0;
					} 
						count ++; 
				}


				for(auto e: v){ if(e==1){freq++;} }
				cout << freq << endl;

				v.push_back(1);
				vector <int>stairs;
				int counter=0;
				for(auto e : v){ if (e==1){stairs.push_back(counter);counter=0;}counter++;}

				for(auto point=stairs.begin()+1;point!=stairs.end();++point){ cout << *(point)<< " ";}

			}



};

int main()
{
	

	
	string l,strs;
	getline(cin,l);
	getline(cin,strs);

	int len;
	for(int i=0;i< l.length();i++)
	{
		len=len*10 + ((int)l.at(i)-48);
	}
	staircase str(len,strs);
	str.accept();

}