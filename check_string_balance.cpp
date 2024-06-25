// balance_string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool check_balanced_string(string string_o)
{
    string s = string_o.c_str(); //backup the string as it may be changed
    if (s.length() == 0)
        return true; // an empty string is always balance
    else
    {


        vector<int> fre_list; // frequencies list
       
        while (true)
        {
           
            vector <int>index_of_repeat_element;
            index_of_repeat_element.push_back(0);
            /*this loop is to get the frequency of the first element*/
            for (int index = 1; index < s.length(); index++)
            {
                if (s[0] == s[index])   
                    index_of_repeat_element.push_back(index);
            }

            fre_list.push_back(index_of_repeat_element.size()); //update it to the frequencies list
            /*this loop is to delete the first element and its identical element from the string*/
            for (int index = 0; index < index_of_repeat_element.size(); index++)
            {
                int calculated_index = index_of_repeat_element[index] - index; //calculate the index in the deleted string
              
                
                s.erase(s.begin() + calculated_index);
               
            }
            if (s.size() == 0) /// if the string is completely deleted, we finished
                break;

   ///// in the next loop, the first elment will be the first element that is different from the element we just checked
            
        }
       // printf("string size:%d, fre size %d, first fre value %d \n", string_o.length(), fre_list.size(), fre_list[0]);
        if (fre_list[0] != string_o.length() / fre_list.size())
        {
            printf("return false \n");
            return false;
        }
        else
        {
            printf("return true \n");
            true;
        }
    }

}

    int main() {
        bool iiii = check_balanced_string("a");
        std::cout <<"ssdfdf:"<< iiii;
        while (true);

    }
