#include <iostream>
 
class Example {

public:

    int* data;

    Example() {        

        data = new int[10];

    }

    void processData() {

        std::cout << "Data: " << data[0] << std::endl;

    }

    void faultyLogic(int a, int b) {

        if (a > b) {

            std::cout << "a is less than b" << std::endl;

        } else {

            std::cout << "a is greater than or equal to b" << std::endl;

        }

    }

};
 
int main() {

    Example* example = new Example();   

    example->processData();

    example->faultyLogic(5, 3);

    return 0;

}
 
