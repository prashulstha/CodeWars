
/*
Implement a method that accepts 3 integer values a, b, c. The method should return true if a triangle can be built with the sides of given length and false in any other case.

(In this case, all triangles must have surface greater than 0 to be accepted).
*/
#include <cmath>
namespace Triangle
{
  bool isTriangle(long a, long b, long c)
  { 
    if( a < 1 || b < 1 || c < 1)
      return 0;
  else
  return a + b > c && b + c > a && c+ a > b;
     

    /*  int s;

      long Area;

      s =(a+b+c)/2;
  
    	Area= std::sqrt(s*(s-a)*(s-b)*(s-c));
    
      
   // check whether a, b, c can form a triangle
  if(Area < 0 || a <= 0|| b <= 0 || c <= 0)
     return false;
     
  else
  {
      if( (a + b) <= c || (b + c) <= a || (a + c) <= b)
        {
           return false;
         }
     
      else
         return true;
    }*/
  }
};