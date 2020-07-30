#include<iostream>
using namespace std;
class fun
{
	public:
		void operator()()
		{
			cout<<"Having fun inside () oprator fn!!";
		}
};
int main()
{
	fun f;        //constructor
	f();       //overloaded() operator__function call when f is object
	return 0;
}
