#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> pq;   //for max heap
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		pq.push(no);    //0(logN)
	}
	//print and remove from heap
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}
/*o/p:
5
10 7 4 7 3
10 7 7 4 3
*/
