#include <iostream>
#include <Eigen/Dense>
#include <Eigen/Core>

int main() {
    int n;
    double a;
    std::cout << "Введіть розмір матриці n: " << std::endl;
    std::cin >> n;
    Eigen::MatrixXd my_matrix;
    my_matrix.resize(n, n);

    for (int i = 0; i < n; i++) {
        std::cout << "Введіть дані по горизонталі: " << std::endl;
        for (int j = 0; j < n; j++) {
            std::cin >> a;
            my_matrix(i, j) = a;
        }
    }
    Eigen::VectorXd q1 = my_matrix(Eigen::all, 0);
    std::cout << std::endl;
    std::cout << my_matrix << std::endl;
    std::cout << std::endl;
    std::cout << q1 << std::endl;
}


//    HouseholderQR<MatrixXd> qr;
//    qr.compute(my_matrix);
//    MatrixXd R = qr.matrixQR().triangularView<Upper>();
//    MatrixXd Q = qr.householderQ();
//    cout << "my_matrix" << endl << my_matrix << endl << endl;
//    cout << "qr.matrixQR()" << endl << qr.matrixQR() << endl << endl;
//    cout << "R" << endl << R << endl << endl;
//    cout << "Q " << endl << Q << endl << endl;
//    cout << "Перевіримо: Q*R = my_matrix" << endl << "Q*R" << endl << R * Q << endl << "=" << endl << "my_matrix" << endl << my_matrix << endl;
//}

//int main() {
//    Eigen::Matrix2d a;
//    a << 1, 2,
//            3, 4;
    // a.col(1);
    // float data[] = {1,2,3,4};
    // Eigen::Map<Eigen::ArrayXf>  v2(data,5);
    // std::cout << a << std::endl;
