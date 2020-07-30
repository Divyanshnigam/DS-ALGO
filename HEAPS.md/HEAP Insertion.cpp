#include<iostream>
#include<vector>         //vector since they uses dynamic array and hence can expand their size when needed
using namespace std;
class Heap
{
	vector<int> v;      
	bool minheap;
	bool compare(int a,int b)
	{
		if(minheap)
		{
			return a<b;
		}
		else
		{
			return a>b;
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
};

