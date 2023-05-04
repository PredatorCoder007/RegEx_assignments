#include<iostream>
using namespace std;

class Complex{
  private:
      double x; //real
      double y; //imaginary
  public:
      // Default Constructor
      Complex()
      {
          x = 0;
          y = 0;
      }

      //Constructor
      Complex(double r, double i)
      {
          x = r;
          y = i;
      }

      //Add
      Complex add(const Complex& other) const
      {
          double r = x + other.x;
          double i = y + other.y;
          return(r, i);
       }

      //Product
      Complex product(const Complex& other) const
      {
          double r = x*(other.x) - y*(other.y);
          double i = x*(other.y) + y*(other.x);
          return(r,i);
      }

      //scalar multiple
      Complex scalarMultiple(double _slr) const
      {
          double r = x*_slr;
          double y = y*_slr;
          return(r,i);

      }

};

