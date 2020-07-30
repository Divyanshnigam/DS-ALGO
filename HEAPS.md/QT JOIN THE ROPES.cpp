// Join the n ropes to get minimum cost such that cost of sum of 2 ropes A & B is (A+B)
#include<iostream>
#include<queue>
using namespace std;
int join_ropes(int ropes[],int n)
{
	priority_queue<int,vector<int>,greater<int> > pq(ropes,ropes+n);  //created a min heap i.e. all ropes are arranged in a assending order
	int cost=0;
	while(pq.size()>1)    // atleat 2 rope
    {
    	int a=pq.top();
    	pq.pop();
    	int b=pq.top();
    	pq.pop();
    	int new_rope=a+b;
    	cost+=new_rope;
    	pq.push(new_rope);   //inserting the new made rope in min heap in assending oder 
	}
	return cost;
}
int main()
{
	int ropes[]={4,3,2,6};
	int n=4;
	cout<<join_ropes(ropes,n)<<endl;  //29
	return 0;
}
