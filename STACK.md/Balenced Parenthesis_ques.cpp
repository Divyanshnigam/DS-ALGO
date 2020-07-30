#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool checkexpr(string str)
{
	stack<char>s;
	for(int i=0;i<s.size();i++)
	{
		char cur=str[i];
		if(cur=='(' or cur=='[' or cur=='{')
		{
			s.push(cur);
		}
		else if(cur==')')
		{
			if(s.empty() or s.top()!='(')
			{
				return false;
			}
			s.pop();
		}
		else if(cur==']')
		{
			if(s.empty() or s.top()!='[')
			{
				return false;
			}
			s.pop();
		}
		else if(cur=='{')
		{
			if(s.empty() or s.top()!='}')
			{
				return false;
			}
			s.pop();
		}
	}
	return s.empty();
}
int main() 
{
	string expr;
	cin>>expr;
    cout<<checkexpr(expr);       //always returing 1??????????????

/*	if(isvalid==1)
	{
		cout<<"Yes";
	}
	else if(isvalid==0)
	{
	cout<<"No";
	}*/
	return 0;
}
