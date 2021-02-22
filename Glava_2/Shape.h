//
// Created by stalk on 22.02.2021.
//

#ifndef GLAVA_2_SHAPE_H
#define GLAVA_2_SHAPE_H


class Point {

};

class Color {

};

class Shape {
    Point center;
    Color col;

public:
    Point where(){return  center;}
    void move (Point to) {
        center = to;
        draw();
    }
    virtual void draw() = 0;
    virtual void rotate(int angle) = 0;
};

class Circle : public Shape {
    int radius;

public:
    Circle(int radius);
    ~Circle();
    void draw();
    void rotate(int in);
};


#endif //GLAVA_2_SHAPE_H
