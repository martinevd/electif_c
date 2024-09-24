#include <iostream>



void printGreetings(int upper_bound){
    for(int i = 2; i <= upper_bound; i+=2){
        std::cout << i << "\n";
    }
    std::cout << "Hello, World!" << "\n";
    if (upper_bound%2 == 0){
        upper_bound --;
    }
    for(int i = upper_bound; i > 0; i-=2){
        std::cout << i << "\n";
    }

}

int main()
{
    printGreetings(14);
    return 0;
}
