//
//  main.cpp
//  q8_Point2d
//
//  Created by Gavin Gavington on 10/19/18.
//

#include <iostream>
class Point2d
{
private:
    double m_x;
    double m_y;
public:
    Point2d() : m_x { 0.0 }, m_y { 0.0 }
    {
        
    }
    Point2d(double x, double y) : m_x { x }, m_y { y }
    {
        
    }
    void print()
    {
        std::cout << "Point2d(" << m_x << ", " << m_y << ");" << std::endl;
    }
};
int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    
    return 0;
}
