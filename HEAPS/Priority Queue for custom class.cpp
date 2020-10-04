#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
class person{               //person pair class
	public:
		string name;
		int age;
		person(string n, int a)    //constructor with parameters
		{
			name=n;
			age=a;
		}
};
class personcompare        //Compare class 
{
	public:
		bool operator()(person A,person B)    
		{
			return A.age>B.age;          // can also return acc. to name 
		}
};
int main()
{
	
	int n;
	cin>>n;
	priority_queue<person,vector<person>,personcompare> pq;     //to make a min heap
	for(int i=0;i<n;i++)
	{
		string name;
		int age;
		cin>>name>>age;
		person p(name,age);      // i/p in class person as p
		pq.push(p); 
	}
	int k=3;                 //printing top k elements
	for(int i=0;i<k;i++)
	{
		person p=pq.top();
		cout<<p.name<<" "<<p.age<<endl;
		pq.pop();
	}
	return 0;
}
/*5
i/p:
A 20
B 3
C 40
D 10
E 15
o/p:
B 3
D 10
E 15
*/
