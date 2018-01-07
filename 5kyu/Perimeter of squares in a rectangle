/*The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see that the sum of the perimeters of these squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80

Could you give the sum of the perimeters of all the squares in a rectangle when there are n + 1 squares disposed in the same manner as in the drawing:

alternative text

#Hint: See Fibonacci sequence

#Ref: http://oeis.org/A000045

The function perimeter has for parameter n where n + 1 is the number of squares (they are numbered from 0 to n) and returns the total perimeter of all the squares.

perimeter(5)  should return 80
perimeter(7)  should return 216

*/


#include <numeric>

typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n);
};

ull SumFct::perimeter(int n)
{
  //Data Members
  ull fib = 1;
  ull fib_2 = 1;
  ull fib_3;
  ull perimeter = 0;
  
  //array decleration
   ull array[n];
   array[0] = fib;
    array[1] = fib_2;
    
    //creating fibonaci series
   for(int i = 2; i <= n; i++)
     {
       fib_3= fib + fib_2;
       array[i] = fib_3;
       fib = fib_2;
       fib_2 = fib_3;
       
    }
    
    //summing up the fibo numbers
  for(int j = 0; j <= n; j++)
     perimeter += array[j];
    
    
    //creating the permiter of the square = rectangle
    std::cout<<perimeter<<" ";
    perimeter *= 4;
    
   
   
   
   return perimeter;
  
  
}
