#include <iostream>
using namespace std;

class Shape {
public:
    virtual void Draw() {
        cout << "Shape to draw is: Shape" << endl;
    }

    virtual ~Shape() = default;
};

class Circle : public Shape {
public:
    void Draw() override {
        cout << "Shape to draw is: Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void Draw() override {
        cout << "Shape to draw is: Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    void Draw() override {
        cout << "Shape to draw is: Triangle" << endl;
    }
};

int main() {
    Shape* ToDraw = nullptr;

    Circle c;
    Rectangle r;
    Triangle t;

    int choice;

    cout << "Choose a shape to draw:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            ToDraw = &c;
            break;

        case 2:
            ToDraw = &r;
            break;

        case 3:
            ToDraw = &t;
            break;

        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    ToDraw->Draw();

    return 0;
}

