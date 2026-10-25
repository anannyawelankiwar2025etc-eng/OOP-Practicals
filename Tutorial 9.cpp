#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void Draw(){
            cout << "Shape To Draw is: " << endl;
        }
};

class Circle : public Shape{
    public:
        void Draw(){
            cout << "\nShape to draw is: Circle" << endl;
        }
};

class Rectangle : public Shape{
    public:
        void Draw(){
            cout << "\nShape to draw is: Rectangle" << endl;
        }
};

class Traingle : public Shape{
    public: 
        void Draw(){
            cout << "\nShape to draw is: Traingle" << endl;
        }
};


int main(){
    Shape* ToDraw;

    Shape ToDrawCircle;
    Shape ToDrawRectangle;

    ToDraw = &ToDrawCircle;
    ToDraw->Draw();

    ToDraw = &ToDrawRectangle;
    ToDraw->Draw();
}
