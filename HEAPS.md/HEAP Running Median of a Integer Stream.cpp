#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> leftheap;    //max heap
	priority_queue<int,vector<int>,greater<int> > rightheap;
	int d;
	cin>>d;
    leftheap.push(d);
	float med=d;
	cout<<"median "<<med<<endl;
	cin>>d;
	//input all elements
	while(d!=-1)
	{
		if(leftheap.size()>rightheap.size())
		{
			if(d<med)
		    {  
			    rightheap.push(leftheap.top());
			    leftheap.pop();
			    leftheap.push(d);
		    }
		    else
		    {
		        rightheap.push(d);
		    }
			med=(leftheap.top()+rightheap.top())/2.0;
		}
		else if(leftheap.size()==rightheap.size())
		{
			if(d<med)
			{
				leftheap.push(d);
				med=leftheap.top();
			}
			else
			{
				rightheap.push(d);
				med=rightheap.top(); 
			}
		}
		else
		{
			if(d>med)
		    {  
			    leftheap.push(leftheap.top());
			    rightheap.pop();
			    rightheap.push(d);
		    }
		    else
		    {
		        leftheap.push(d);
		    }
			med=(leftheap.top()+rightheap.top())/2.0;
		}
		cout<<"median "<<med<<endl;
		cin>>d;				
	}
	return 0;
}
/*
1
median 1
1
median 1
5
median 1
4
median 2.5
3
median 3
2
median 2.5
-1
*/
 
