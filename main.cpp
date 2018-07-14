#include <iostream>
#define  LOG(x) std::cout<<(x)<<std::endl
int main() {
    /* pointers are just integers, stores memory address
     * type* means that that memory address expected to store "type" type of data
     * typles pointer := void*
     */
    int var=8;

    //ptr stores the memory address of var
    void* ptr=&var;
    LOG(ptr);
//    don't work, becouse ptr is void*
//    LOG(&(*ptr));
//    LOG(*ptr);
//    you cannot dereference a void* pointer!
//    You must cast it to something!

    auto ppp = (int*) ptr;
    LOG(*ppp);
    int* ptr2= nullptr;
    int var2;
    ptr2=&var2;
    //*ptr dereferencing this way
    *ptr2=9;
    LOG(ptr2);
    LOG(&(*ptr2));
    LOG(*ptr2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}