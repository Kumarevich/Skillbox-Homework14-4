#include <iostream>

int main() {
    int arrOne[4][4], arrTwo[4][4];
    int err = 1;

    std::cout << "Input numbers for two arrays." << std::endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << "Line " << i + 1 << ", element " << j + 1 << " (arr 1, arr 2): ";
            std::cin >> arrOne[i][j] >> arrTwo[i][j];
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (arrOne[i][j] != arrTwo[i][j]) {
                std::cout << "Not equal";
                return err;
            }
        }
    }
    
    std::cout << "Equal";
    return 0;
}
