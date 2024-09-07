#include <iostream>

#define WINDOW_WIDTH 256
#define WINDOW_HEIGHT 256

int main() {
    std::cout << "P3" << std::endl;
    std::cout << WINDOW_WIDTH << " " << WINDOW_HEIGHT << std::endl;
    std::cout << 255 << std::endl;

    for (size_t i = 0; i < WINDOW_WIDTH; i++)
    {
        for (size_t j = 0; j < WINDOW_HEIGHT; j++)
        {
            std::cout << i << " " << j << " " << 255 << std::endl;
        }
    }

    return 0;
}