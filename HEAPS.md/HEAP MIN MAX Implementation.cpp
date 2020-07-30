#include<iostream>
#include<vector>
using namespace std;
class Heap{
	vector<int>v;
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
	void heapify(int idx)      //to store the elements in the tree in min/max heap format
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
	public:
		Heap(int default_size=10,bool type=true)   //constructor
		{
			v.reserve(default_size);
			v.push_back(-1);        //to block the 0th index if array
			minheap=type;           //true if min 
		}
		void push(int d)
		{
			v.push_back(d);
			int idx=v.size()-1;    //-1 since 0th index is blocked
			int parent=idx/2;      
//keep pushing to the top till you reach a root or stop midway becoz current element is greater than parent.
		    while(idx >1 and compare(v[idx],v[parent]))
		    {
		    	swap(v[idx],v[parent]);
		    	idx =parent;
		    	parent=parent/2;
			}
		}
		int top()
		{
			return v[1];
		}
		void pop()
		{
			int last=v.size()-1;
			swap(v[1],v[last]);
			v.pop_back();
			heapify(1);     //passsing the index if not fullfilling the condition
		}
		bool empty()
		{
			return v.size()==1;   //since 0th index is blocked
		}			
};
int main()
{
	Heap h(10,true);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		h.push(no);
	}
	
	//remove all element and print them 
	while(!h.empty())
	{
		cout<<h.top()<<" ";
		h.pop();
	}
	return 0;
}
/*
i/p:
6
10 20 15 14 11 90
o/p:
10 11 14 15 20 90
*/
