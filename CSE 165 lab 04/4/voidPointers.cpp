#include <iostream>
#include "Stack.h"
#include <fstream> 
using namespace std;

void delete_func(void * pt){
    double * dpt = (double *)pt;
    cout <<"Deleting: " << * dpt << "\n";
    delete dpt;
}


int main(int argc, const char * argv[])
{
    Stack * doubleStack = new Stack;
	
	doubleStack->initialize();
    
    double value;
	int n;
	
	cin >> n;
    
	for (int i=0; i < n; i++){
		cin >> value;
        doubleStack->push(new double(value));
	}
   
    //setting up the delete_fun = void (*del_func_prt)(void *pt)
    void (*del_func_ptr)(void * pt) = delete_func;
    //Add a member functions to set this pointers deletecd = delcb
    doubleStack->setDeleteCallback(del_func_ptr);
    //clean up called
    doubleStack->cleanup();
    
    return 0;
}

/*
One of the problems of our Stack and LinkedList structs is that if we make them handle
generic types with void* pointers, they will not know how to delete the elements we insert
in them. We will see later how templates will solve that, but for now let’s practice using
pointers to functions. Extend the book’s Stack struct (file Stack.h) with one more member
variable that will hold a pointer to the following function prototype:
v o i d d e l e t e c b ( v o i d ∗p t )
You will then add a member function to set this pointer:
v o i d S t a c k : : s e t D e l e t e C a l l b a c k ( v o i d ( ∗ d e l c b ) ( v o i d ∗ p t ) )
After you do this, then add the corresponding code in the cleanup method to traverse
all elements of the stack, deleting the links and calling the delete callback once for each
stored void pointer. The user will be responsible for providing the delete callback and
implementing it with the correct delete call after converting the void pointer argument to
its correct type. You may download the Stack.h file, make the modifications described
above and submit it. Your code will be evaluated using voidPointers.cpp.
*/
