
//static memory = global/static variables; everyone has access to
//auto memory allocation like in functions -> stack
//dynamic --> heap, need to get rid of it

/*vectors  utilizing heap space but automatically cleans it up
    keeps track of things in the heap. 
        kind of like a smart pointer
 
    stack-> cannot grow or shrink.
   
you don't know everything at compile time, you need things to be dynamic. 




* after type for variable means it is a pointer [to store the adress]
    before a variable is dereferences it [go to that adress and return what is there]

& before a variable gets address 
after type of parameter gets the reference



*/

#include <iostream>

int main(){
    int x{5}; //on stack
    int* x_ptr =&x; //points to the x on the stack by getting the address of x

    std::cout << *x_ptr << "\n";
    std::cout << *(&x) << "\n";
    
    int* y_ptr = new int{99}; //gives extra memory and you can control what memory you have. 
    // int* y_ptr is on the stack

    std::cout << *y_ptr << "\n";
    delete y_ptr;//need to clean it up to not have data leaks
    y_ptr = nullptr; 
    //*y_ptr = 9999; --> bad practice; pointing something that you don't control; 

    //a better way to do this is to use smart pointers 

    /*
     int* y_ptr = new int{999};
     y_ptr=new int{11};

     bad practice; the 999 int will be "floating in the ether" and will be a dangling pointer
     there is no way to delete 999, it is unrecoverable because you didn't delete it before. 
     
     


    */


    return 0;
}