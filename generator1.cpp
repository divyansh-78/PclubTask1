#include "testlib.h"
#include <iostream>

int main(int argc, char* argv[]) {
    // Register the generator with command-line arguments
    registerGen(argc, argv, 1);
    
    // Define the range
    const int LOWER_BOUND = 1;
    const int UPPER_BOUND = 1000;
    
    // Generate a random number in the range [LOWER_BOUND, UPPER_BOUND]
    int random_number = rnd.next(LOWER_BOUND, UPPER_BOUND);
    
    // Output the random number
    std::cout << random_number << std::endl;

    return 0;
}