#include "common_headers.h"

vector<string> letterCombinations(string digits) {

    vector<string> solution;
    string table[10];
    table[2] = "abc";
    table[3] = "def";
    table[4] = "ghi";
    table[5] = "jkl";
    table[6] = "mno";
    table[7] = "pqrs";
    table[8] = "tuv";
    table[9] = "wxyz";
      
    for (char input : digits) 
    {
        vector<string> temp_solution;
        for (char temp : table[input-'0'])
        {
            if (solution.empty())
            {
                string temp_str;
                temp_str.push_back(temp);
                temp_solution.push_back(temp_str);
            }
            else
            {
                for (auto str : solution) {
                    str.push_back(temp);
                    temp_solution.push_back(str);
                }
            }
        }
        solution = temp_solution;
    }
    return solution;
}