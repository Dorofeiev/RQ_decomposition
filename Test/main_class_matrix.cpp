#include <iostream>

class My_matrix {

public:
    int n, m; // n - стовпчики, m - строки


    // функція створення 2-х матриць і знаходження
    float matrix(int n, int m) {
        float matrix_1[n][m];
        float matrix_2[n][m];
        float matrix_sum[n][m];

        std::cout << "CУМА МАТРИЦЬ" << std::endl;

        // створення матриці matrix_1
        std::cout << "Введіть елементи matrix_1: " << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> matrix_1[i][j];
            }
        }

        // створення матриці matrix_2
        std::cout << "Введіть елементи matrix_2: " << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> matrix_2[i][j];
            }
        }

        // розрахунок суми матриць
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                matrix_sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
            }
        }

        // вивід матриці matrix_1
        std::cout << "matrix_1\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_1[i][j] << " ";
            }
        }
        std::cout << std::endl;

        // вивід матриці matrix_2
        std::cout << "matrix_2\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_2[i][j] << " ";
            }
        }
        std::cout << std::endl;

        // вивід суми матриц matrix_1 + matrix_2
        std::cout << "matrix_1 + matrix_2 = \n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_sum[i][j] << " ";
            }
        }
        std::cout << std::endl;

        return matrix_sum[n][m];
    }




    // функція створення матриці і знаходження добутку матриці на число
    float matrix_multiplication_k(int n, int m) {
        float matrix_k[n][m];
        float k;

        std::cout << "МНОЖЕННЯ МАТРИЦІ НА ЧИСЛО" << std::endl;

        std::cout << "Введіть значення k: " << std::endl;
        std::cin >> k;

        // створення матриці matrix_1
        std::cout << "Введіть елементи matrix_k: " << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> matrix_k[i][j];
            }
        }

        // множення на k
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                matrix_k[i][j] *= k;
            }
        }

        // вивід матриці matrix_k помноженої на k
        std::cout << "matrix_k * k\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_k[i][j] << " ";
            }
        }
        std::cout << std::endl;

        return matrix_k[n][m];
    }





    // функція створення матриць A, B і їх добуток C
    float matrix_multiplication(int n, int m, int k) {
        float matrix_A[n][m];
        float matrix_B[m][k];
        float matrix_C[n][k];

        std::cout << "ДОБУТОК МАТРИЦЬ" << std::endl;

        // створення матриці matrix_A
        std::cout << "Введіть елементи matrix_A: " << std::endl;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cin >> matrix_A[i][j];
            }
        }

        // створення матриці matrix_B
        std::cout << "Введіть елементи matrix_B: " << std::endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < k; ++j) {
                std::cin >> matrix_B[i][j];
            }
        }

        // розрахунок добутка матриць А * В = С
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < k; ++j) {
                matrix_C[i][j] = 0;
                for (int l = 0; l < m; ++l) {
                    matrix_C[i][j] += matrix_A[i][l] * matrix_B[l][j];
                }
            }
        }

        // вивід матриці matrix_А
        std::cout << "matrix_А\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_A[i][j] << " ";
            }
        }
        std::cout << std::endl;

        // вивід матриці matrix_B
        std::cout << "matrix_2\n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_B[i][j] << " ";
            }
        }
        std::cout << std::endl;

        // вивід добутка матриць matrix_A * matrix_B
        std::cout << "matrix_A * matrix_B = \n";
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << matrix_C[i][j] << " ";
            }
        }
        std::cout << std::endl;

        return matrix_C[n][m];
    }
};

int main(){
    My_matrix sum;
    int q = sum.matrix(2, 3);
    // std::cout << q << std::endl;

    My_matrix multiplication_k;
    int m_k = multiplication_k.matrix_multiplication_k(4,2);
    // std::cout << m_k << std::endl;

    My_matrix multiplication;
    int m = multiplication.matrix_multiplication(3, 4, 2);
    // std::cout << m << std::endl;

    return 0;
    }