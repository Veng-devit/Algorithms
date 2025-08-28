#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    void setDimensions(double w, double h) {
        // TODO: assign w to width and h to height
        width=w;
        height=h;
    }

    double getArea() const {
        // TODO: return width * height
        return width*height;
    }

    double getPerimeter() const {
        // TODO: return 2 * (width + height)
        return 2 * (width + height);
    }
};

int main() {
    Rectangle r1, r2;
    r1.setDimensions(3.0, 4.0);
    r2.setDimensions(5.5, 2.5);
    cout << "Area of r1: " << r1.getArea() << "\n";
    cout << "Perimeter of r1: " << r1.getPerimeter() << "\n";
    cout << "Area of r2: " << r2.getArea() << "\n";
    cout << "Perimeter of r2: " << r2.getPerimeter() << "\n\n";

    return 0;
}