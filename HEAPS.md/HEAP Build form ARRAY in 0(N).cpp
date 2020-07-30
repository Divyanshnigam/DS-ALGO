#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v)
{
	for(int x:v)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}
	bool minheap;
	bool compare(int a,int b)
	{
		if(minheap)
		{
			return a<b;
		}
		else
		{
			return  a>b;
		}
	}
	void heapify(vector<int> v,int idx)      //to store the elements in the tree in min/max heap format
	{
		int left=2*idx;     //index of left child
		int right=left+1;   //index of right chid
		int min_idx=idx;    //index of root
		int last=v.size()-1; //-1 becoz of blocked 0th index
	
		if(left<=last and compare(v[left],v[min_idx]))   //left<=last --itterate over all the the indexes from left child to last node and 
		{
			min_idx=left;             //for swaping with the left child & assinging the left chid index
		}
		if(right<=last and compare(v[right],v[min_idx]))   //right<=last --itterate over all the the indexes from right child to last node and 
		{
			min_idx=right;             //for swaping with the right child & assinging the right chid index
		}
		//now swapping the elements
		if(min_idx!=idx)
		{
			swap(v[idx],v[min_idx]);
			heapify(min_idx);           //repeating till the last of the child root
		}
	}
void buildheapoptimised(vector<int> &v)
{
	for(int i=(v.size()-1)/2;i>=1;i++)
	{
		heapify(v,i);
	}
}
int main()
{
	vector<int> v{-1,10,20,5,6,1,8,9,4};
	print(v);
	buildheapoptimised(v);
	print(v);
}
/*
o/p:
-1 10 20 5 6 1 8 9 4 
-1 20 10 9 6 1 5 8 4 
*/
