# include "17.h"
#include "common_headers.h"

void output(vector<string> output)
{
   cout<<"[";
   for (auto str : output)
   {
       cout<<str<<" ";
   }
   cout<<"]\n";
}
void common_cases()
{
   output(letterCombinations("23"));
   output(letterCombinations("234"));
}
void edge_cases()
{

}

int main() {
    common_cases();
    edge_cases();
    return 0;
}
