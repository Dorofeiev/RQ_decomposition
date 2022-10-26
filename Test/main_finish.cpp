#include<iostream>
#include <vector>

//  1 2 3 
//  4 5 6
// 
//  1 2 3 4 5 6
// 

class Matrix{
public:
    Matrix(int rows, int cols) : cols_(cols), rows_(rows) {   // rows - рядки, cols - стовпці
    data_.resize(rows_*cols_);

    }
    void fromInput(){
        data_.resize(rows_*cols_);
        for (size_t row = 0; row < rows_; row++) {
            for (size_t col = 0; col < cols_; col++) {
                std::cin >> data_[row * rows_ + col];
            }
        }
    }

    int getElement(int row, int col){
        float element = row * rows_ + col;
        return data_[element];
    }

    int setElement(int row, int col, float value) {
        float element = row * rows_ + col;
        data_[element] = value;
    }

    void print() {
        for (size_t row = 0; row < rows_; row++){
            for (size_t col = 0; col < cols_; col++){
                std::cout << data_[row * rows_ + col] << std::endl;   
            }
        }
    }

    Matrix() = delete;
    
    private: 
        float cols_ = 0;
        float rows_ = 0;
        std::vector<float> data_;

};

int main() {

    Matrix m(2, 2);
    // m.fromInput();
    m.setElement(0, 0, 10);
    m.setElement(0, 1, 8);
    m.setElement(1, 0, 87);
    m.setElement(1, 1, 32);
    m.print();

    return 0;
}
