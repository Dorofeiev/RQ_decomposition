#include <iostream>

class Point {

private:
    int x;
    int y;

public:

    Point(int valueX, int valueY){
        x = valueX;
        y = valueY;
    }

    int getX(){
        return x;
    }

    void setX(int valueX){
        x = valueX; 
    }

    void Print() {
         std::cout << "\nКоорд Х:" << x << "\nКоорд Y:" << y << std::endl;
    }

};

int main() {

    Point a(3, 6);
    // a.setX(5);
    a.Print();

    int result = a.getX();
    std::cout << result << std::endl;

    return 0;
}