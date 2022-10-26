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

    }
    void fromInput(){
        data_.resize(rows_*cols_);
        for (size_t r = 0; r < rows_; r++) {
            for (size_t c = 0; c < cols_; c++) {
                float q;
                std::cin >> data_[q];

            }
            
            /* code */
        }
        
    }
    int getElement(int row, int col){   // читання/отримання
        return data_[row * rows_ + col];
    }

    int setElement(int row, int col, float value) {      // запис
        rows_ = row;
        cols_ = col;
        value = data_[row * rows_ + col];
    }

    void print() {
        for (size_t r = 0; r < rows_; r++){
            for (size_t c = 0; c < cols_; c++){
                std::cout << getElement(rows_, cols_) << std::endl;
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
    // m.print();
    std::cout << m.getElement(1, 1) << std::endl;

    return 0;
}
