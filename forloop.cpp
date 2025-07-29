#include <iostream>

int main() {
    int start = 0;
    int text_len = 100;
    int direction = 12;
    int i;

    for ( i = start; i >= 0 && i < text_len; i += direction ) {
        // placeholder body
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}
