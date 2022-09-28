#include <Eigen/QR>
#include <iostream>

using namespace Eigen;
using namespace std;

int main() {
    int n;
    double a;
    cout << "Введіть розмір матриці n: " << endl;
    cin >> n;
    MatrixXd my_matrix;
    my_matrix.resize(n, n);

    for (int i = 0; i < n; i++) {
        cout << "Введіть дані по горизонталі: " << endl;
        for (int j = 0; j < n; j++) {
            cin >> a;
            my_matrix(i, j) = a;
        }
    }
    HouseholderQR<MatrixXd> qr;
    qr.compute(my_matrix);
    MatrixXd R = qr.matrixQR().triangularView<Upper>();
    MatrixXd Q = qr.householderQ();
    cout << "my_matrix" << endl << my_matrix << endl << endl;
    cout << "qr.matrixQR()" << endl << qr.matrixQR() << endl << endl;
    cout << "R" << endl << R << endl << endl;
    cout << "Q " << endl << Q << endl << endl;
    cout << "Перевіримо: Q*R = my_matrix" << endl << "Q*R" << endl << R * Q << endl << "=" << endl << "my_matrix" << endl << my_matrix << endl;
}