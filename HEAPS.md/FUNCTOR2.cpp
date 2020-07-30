#include<iostream>
#include<cstring>
using namespace std;
class fun
{
	public:
		void operator()(string s)
		{
			cout<<"Having fun inside () oprator fn!!"<<s;
		}
};
int main()
{
	fun f;        //constructor
	f("c++");       //overloaded() operator__function call when f is object
	return 0;
}
