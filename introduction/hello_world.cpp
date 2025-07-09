#include <iostream>

int suma(int a, int b){
    return (a + b);
}

void test_function(){
    int numero;
    numero = 9;
    int array[4];

    array[0] = numero;

    int result = suma(numero, 5);

    std::cout << "Array: " << array[0] << " Suma:" << result << std::endl;
}


int main(){
    std::cout << "Hello, World!" << std::endl;
    test_function(); // retorna 9
    return 0;
}



// std::cout ---> print terminal
// #include <cstdio> para printf()