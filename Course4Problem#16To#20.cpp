
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #16
void ReadRectangleSideAndDiagonal(float& Side, float& Diagonal)
{
    cout << "Enter Rectangle side \n";
    cin >> Side;

    cout << "Enter Rectangle Diagonal \n";
    cin >> Diagonal;
}

float CalculateRectangleAreaBySideAndDiagonal(float side, float diagonal)
{
    return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

void PrintRectangleArea(float Area)
{
    cout << "\n Rectangle area by side and diagonal = " << Area << "\n";
}

// #17
void ReadTriangleBaseAndHieght(float& A , float& B)
{
    cout << "Enter triangle base\n";
    cin >> A;

    cout << "Enter triangle hieght\n";
    cin >> B;

}

float CalculateTriangleAreaByBaseAndHieght(float& A, float& B)
{
    return (A / 2) * B;
}

void PrintTriangleAreaByBaseAndHieght(float Area)
{
    cout << "Triangle area by base and hiegth = " << Area << "\n";
}

// #18
float ReadRadious()
{
    float Radious;

    cout << "Enter circle radious\n";
    
    cin >> Radious;

    return Radious;

}

float CalculateCircleArea(float Radious)
{
    const float Pi = 3.14;

    float Area;

    Area = Pi * pow(Radious, 2);

    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "Circle area = " << Area << "\n";
}

// #19
float ReadCircleDiameter()
{
    float Diameter;

    cout << "Enter Diameter ?\n";
    cin >> Diameter;

    return Diameter;
}

float CalculateCircleAreaByDiameter(float Diameter)
{
    const float Pi = 3.14;

    float Area;

    Area = ((Pi * pow(Diameter, 2)) / 4);

    return Area;
}

void PrintCircleAreaByDiameter(float Area)
{
    cout << "Circle Area By Diameter = " << Area << "\n";
}

// #20
float ReadSquareSide()
{
    float SquareSide;

    cout << "Enter square side \n";
    cin >> SquareSide;

    return SquareSide;
}

float CalculateCircleAreaInscribedBySquare(float SquareSide)
{
    const float Pi = 3.14;

    float Area;

    Area = (Pi * pow(SquareSide, 2)) / 4;

    return Area;

}

void PrintCircleAreaInscribedBySquare(float Area)
{
    cout << "Circle Area Inscribed By Square = " << Area << "\n";
}

int main()
{
    // #16
   /* float Side, Diagonal;

    ReadRectangleSideAndDiagonal(Side , Diagonal);

    PrintRectangleArea(CalculateRectangleAreaBySideAndDiagonal(Side , Diagonal));*/

    // #17
  /*  float Base, Hieght;
    ReadTriangleBaseAndHieght(Base , Hieght);

    PrintTriangleAreaByBaseAndHieght(CalculateTriangleAreaByBaseAndHieght(Base , Hieght));*/

    // #18
    //PrintCircleArea(CalculateCircleArea(ReadRadious()));

    // #19
    //PrintCircleAreaByDiameter(CalculateCircleAreaByDiameter(ReadCircleDiameter()));

    // #20
    //PrintCircleAreaInscribedBySquare(CalculateCircleAreaInscribedBySquare(ReadSquareSide()));


    return 0;
}


