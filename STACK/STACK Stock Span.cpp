#include<iostream>
#include<stack>
using namespace std;
void printspan(int arr[] , int n)
{
	stack <int> s;
	int ans[100] = {};
	for(int day = 0 ; day < n; ++day)
	{
		int curPrice = arr[day];
		while(s.empty() == false && arr[s.top()] < curPrice)
		{
			s.pop();
		}
		int betterdays = s.empty() ? 0: s.top();
		int span = day - betterdays;
		ans[day] = span;
		s.push(day);
	}
	for(int i = 0 ; i < n ; i++)
	{
		cout<<ans[i]<<" ";
	}
	cout<<"END";
}
int main()
{
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	printspan(arr,n);
	return 0;
}

