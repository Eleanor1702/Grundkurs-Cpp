//Code Ausschnitt in std::vector
/* int array[SIZE];
 * for(auto i=0; i <= SIZE; ++i){
 *      array[i] = i+1;
 * }
  */

#include <iostream>
#include <vector>
#define SIZE 10

int main() {
    std::vector<int> array (SIZE);

    for(auto i=0; i<SIZE; ++i) {
        array[i] = i+1;
    }

    for(auto i=0; i<array.size(); ++i) {
        array[i] = i+1;
    }

    for(auto elem : array){
        std::cout << elem << std::endl;
    }

    return 0;
}