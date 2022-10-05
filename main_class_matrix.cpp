#include <iostream>

class My_matrix {

public:
    int n, m; // n - строки, m - стовпчики

    // функція створення 2-х матриць і знаходження суми
    int matrix(int n, int m) {
        int matrix_1[n][m];
        int matrix_2[n][m];
        int matrix_sum[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> matrix_1[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> matrix_2[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                matrix_sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
            }
        }
        return matrix_sum[n][m];
    }
};

int main(){
    My_matrix sum{};
    int q = sum.matrix(5, 6);
    std::cout << q << std::endl;
    return 0;
    }


