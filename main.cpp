#include <iostream>

int parse_int(const char* str) {
    int res = 0;
    while (*str != '\0') {
        res = res * 10 + (*str - '0');
        str++;
    }
    return res;
}

int main(int argc, char* argv[]) {
    int number = parse_int(argv[1]);

    double* arr_a = new double[number];
    double* arr_b = new double[number];

    for (int i = 0; i < number; i++) {
        std::cin >> arr_a[i];
    }

    for (int i = 0; i < number; i++) {
        std::cin >> arr_b[i];
    }

    double scalar = 0.0;
    for (int i = 0; i < number; i++) {
        scalar += arr_a[i] * arr_b[i];
    }

    std::cout << scalar << std::endl;
    delete[] arr_a;
    delete[] arr_b;
}
