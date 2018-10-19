//
//  main.cpp
//  q8_Point2d
//
//  Created by Gavin Gavington on 10/19/18.
//

#include <iostream>
#include <cmath>
class Point2d
{
private:
    double m_x;
    double m_y;
public:
    Point2d(double x=0.0, double y=0.0) : m_x { x }, m_y { y }
    {
        
    }
    void print() const
    {
        std::cout << "Point2d(" << m_x << ", " << m_y << ");" << std::endl;
    }
    double distanceTo(Point2d secondPoint) const
    {
        const double &x1 = m_x;
        const double &y1 = m_y;
        const double &x2 = secondPoint.m_x;
        const double &y2 = secondPoint.m_y;
        return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    }
    friend double distanceFrom(const Point2d &firstPoint, const Point2d &secondPoint);
};
double distanceFrom(const Point2d &firstPoint, const Point2d &secondPoint)
{
    const double &x1 = firstPoint.m_x;
    const double &y1 = firstPoint.m_y;
    const double &x2 = secondPoint.m_x;
    const double &y2 = secondPoint.m_y;
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    return 0;
}
