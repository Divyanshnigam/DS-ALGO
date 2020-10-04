#include<iostream>
#include<vector>
#include<queue>
using namespace std;
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
void print(vector<int> v)
{
	for(int x:v)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}
void heapify(vector<int> v,int idx,int size)      //to store the elements in the tree in min/max heap format
	{
		int left=2*idx;     //index of left child
		int right=left+1;   //index of right chid
		int min_idx=idx;    //index of root
		int last=size;      //-1 becoz of blocked 0th index
	
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
			heapify(v,min_idx,size-1);           //repeating till the last of the child root
		}
	}
void buildheap(vector<int> &v)
{
	for(int i=2;i<v.size();i++)
	{
		int idx=i;
		int parent=i/2;
		while(idx>1 and v[idx]>v[parent])
		{
			swap(v[idx],v[parent]);
			idx=parent;
			parent=parent/2;
		}
	}
}
void heapsort(vector<int> &arr)
{
	buildheap(arr);                //max heap
	int n=arr.size();
	//remove n-1 elements from heap
	while(n>1)
	{
		swap(arr[1],arr[n-1]);   //largest element at front moved to last
		//remove that element from heap
		n--;                     //now skiping that element
		heapify(arr,1,n);   //heapify the remaininig elements
	}
}
int main()
{
	vector<int> v;
	v.push_back(-1);
	int n;
	cin>>n;
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		v.push_back(temp);
	}
	heapsort(v);
	print(v);
	return 0;	
}
