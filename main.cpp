#include <stdio.h>
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cstdlib>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

int nums[6] = {1, 2, 3, 4, 5, 6};

int main(int argc, char** argv) {
    
    for(int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        cout << nums[i] << '\n';
    }

    return 0;
}