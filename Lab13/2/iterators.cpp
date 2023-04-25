#include <iostream>
#include <math.h>

#include "DynArray.h"

using namespace std;

template <class A>
class Iterator
{
	int cur;
	A& arr;
public:
	Iterator(A& a) : cur(0), arr(a) {}
	void begin() {
		//write your code here
		cur = 0;
	}
	void end() {
		//write your code here
		cur = arr.size();
	}
	bool atend() { 
		//write your code here
		return cur == arr.size()-1;
	}
	void advance() {
		//write your code here
		cur++;		
	}
	void print() {
		//write your code here
		cout << cur << " : " << arr[cur] << endl;
	}
};

template <class A, class X>
void insert_four(A& a)
{
	for (int i = 0; i < 5; i++)
		a.add((X)(2.0*cos(double(i))));
};


int main(int argc, const char * argv[])
{
	DynArray<int> ia;
	insert_four<DynArray<int>, int>(ia);

	DynArray<float> fa;
	insert_four<DynArray<float>, float>(fa);

	{ Iterator<DynArray<int>> it(ia);
	for (it.begin(); !it.atend(); it.advance()) it.print();
	}

	{ Iterator<DynArray<float>> it(fa);
	for (it.begin(); !it.atend(); it.advance()) it.print();
	}

	return 0;
}