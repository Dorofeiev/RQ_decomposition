#include <iostream>
#include <vector>

int sum(int n) {
    int a = 0;
    for (int i = 0; i < n; ++i) {
        a += i;
    }
    return a;
}

float scalar_product(std::vector<float> v, std::vector<float> v2) {
    float sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i]*v2[i];
    }
    return sum;
}

std::vector<float> scalar_sum(std::vector<float> s1, std::vector<float> s2){
    std::vector<float> s;
    for (int i = 0; i < s1.size(); ++i) {
        s.push_back(s1[i] + s2[i]);
    }
    return s;
}

int main() {
    int q = sum(78);
    std::cout << q << std::endl;

    std::vector<float> v = {2, 5, 3, 1, 3};
    std::vector<float> v2 = {5, 1, 4, 4, 7};
    float k = scalar_product(v, v2);
    std::cout << k << std::endl;

    std::vector<float> s1 = {4, 6, 3, 1, 1};
    std::vector<float> s2 = {6, 1, 3, 2, 3};
    std::vector<float> s = scalar_sum(s1, s2);
    for (int i = 0; i < s.size(); ++i) {
        std::cout << s[i] << " ";
    }

    return 0;
}

//#include <iostream>
//#include <Eigen/Core>
//#include <Eigen/Dense>
//
//int main() {
//    Eigen::MatrixXd A(6, 6);
//    for (int i = 0; i < 6; ++i) {
//        if (i % 2 == 0) {
//            for (int j = 0; j < 6; ++j) {
//                if (j % 2 == 0) {
//                    std::cout << A.col(j).transpose() << std::endl;
//                    std::cout << A.col(j).sum() << std::endl;
//                    A(i, j) = 5;
//                }
//                // std::cout << A.row(i) << std::endl;
//            }
//        }
//    }
//    std::cout << A << std::endl;
//    std::cout << std::endl;
//
//    Eigen::MatrixXd B(6, 6);
//    B.setIdentity();
//
//    std::cout << B << std::endl;
//    std::cout << std::endl;
//
//    std::cout << "A*B: \n" << A * B << std::endl;
//    std::cout << std::endl;
//    std::cout << "A+B: \n" << A + B << std::endl;
//
//    std::cout << B.inverse() << std::endl;
//
//    std::cout << A.determinant() << std::endl;
//    std::cout << std::endl;
//    std::cout << B.determinant() << std::endl;
//
//   // std::vectorXd<Eigen::x>
//    return 0;
//}
