
/*Common denominators

You will have a list of rationals in the form

 { {numer_1, denom_1} , ... {numer_n, denom_n} }
or

 [ [numer_1, denom_1] , ... [numer_n, denom_n] ]
or

 [ (numer_1, denom_1) , ... (numer_n, denom_n) ]
where all numbers are positive ints.

You have to produce a result in the form

 (N_1, D) ... (N_n, D)
or

 [ [N_1, D] ... [N_n, D] ]
or

 [ (N_1', D) , ... (N_n, D) ]
or

{{N_1, D} ... {N_n, D}}
depending on the language (See Example tests)

in which D is as small as possible and

 N_1/D == numer_1/denom_1 ... N_n/D == numer_n,/denom_n.
Example:

convertFracs [(1, 2), (1, 3), (1, 4)] `shouldBe` [(6, 12), (4, 12), (3, 12)]

*/

#include <vector>
#include <sstream>
#include <valarray>


class Fracts
{

public:
    typedef unsigned long long ull;
  
    static std::string convertFrac(std::vector<std::vector<unsigned long long>> &lst);
    static unsigned long long int LCM(ull arr[], int n);
};


std::string Fracts::convertFrac(std::vector<std::vector<unsigned long long>> &lst)
{
    std::stringstream fract ;
  
    ull denom[lst.size()];
    
  
    int index = 0;
    for(int i = 0; i < lst.size(); i++)
    {
           std::cout<< lst[i][0]<<" ";  
           
           
     }
        std::cout<<std::endl;
        for(int i = 0; i < lst.size(); i++)
    {
           std::cout<< lst[i][1]<<" ";  
           
           
     }
     
 
  for(int i = 0; i < lst.size(); i++)
    {
           denom[index++] = lst[i][1];  
           
           
     }
    
       
  
  
  unsigned long long int Lcm = LCM(denom, index);
  index =0;
  for(int i = 0; i < lst.size(); ++i)
  {
       ull div;
       div = Lcm/lst[i][1];
       div *= lst[i][0];
      
      
       fract << "(" << div  << ","<< Lcm <<")";
  
  }
  
           
      
  return fract.str();

}



  unsigned long long int Fracts::LCM(ull arr[], int n)
{
    // Find the maximum value in arr[]
    std::valarray<ull> myvalarray(arr,n);
   int max_num = myvalarray.max();
    
    // Initialize result
    unsigned long long int res = 1;
 
    // Find all factors that are present in
    // two or more array elements.
    int x = 2;  // Current factor.
    while (x <= max_num)
    {
        // To store indexes of all array
        // elements that are divisible by x.
        std::vector<int> indexes;
        for (int j=0; j<n; j++)
            if (arr[j]%x == 0)
                indexes.push_back(j);
 
        // If there are 2 or more array elements
        // that are divisible by x.
        if (indexes.size() >= 2)
        {
            // Reduce all array elements divisible
            // by x.
            for (int j=0; j<indexes.size(); j++)
                arr[indexes[j]] = arr[indexes[j]]/x;
 
            res = res * x;
        }
        else
            x++;
    }
 
    // Then multiply all reduced array elements
    for (int i=0; i<n; i++)
        res = res*arr[i];
 
    return res;
}