#include <iostream>

int main() {
    int x, y;
    while (true) {
        std::cout << "자연수 x와 y를 입력하세요: ";
        std::cin >> x >> y;

        if (x > 0 && y > 0) break;
        std::cout << "오류: x와 y는 자연수여야 합니다. 다시 입력하세요.\n";
    }
    int** arr = new int* [x];
    for (int a = 0; a < x; ++a) {
        arr[a] = new int[y];
    }

    int value = 1;
    for (int a = 0; a < x; ++a) {
        for (int b = 0; b < y; ++b) {
            arr[a][b] = value++;
        }
    }

    std::cout << "\n이차원 배열의 값:\n";
    for (int a = 0; a < x; ++a) {
        for (int b = 0; b < y; ++b) {
            std::cout << arr[a][b] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}