#include <string>

/* the method/function so that it converts dash/underscore delimited words into camel casing. 
   The first word within the output should be capitalized only if the original word was capitalized.

   Examples:

  // returns "theStealthWarrior"
  to_camel_case("the-stealth-warrior") 

  // returns "TheStealthWarrior"
  to_camel_case("The_Stealth_Warrior")

   */


std::string to_camel_case(std::string text) {
  // TODO: Your code goes here!
  
  std::vector<char> ch;
  char c, cap;
  std::string Str;

   for(int i = 0; i < text.length(); i++)
    { 
       c = text[i];
      if(std::isalpha(c))
        ch.push_back(c);
        
      else
      {
        cap = text[i+1];
        cap = toupper(cap);
        ch.push_back(cap);
        i = i +1;
      }
       
     
     }
     
     for(int j= 0; j < ch.size(); j++)
        Str += ch[j];
        
        
     return Str;
      
      
}