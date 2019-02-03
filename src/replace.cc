////////////////////////////////////////////////
//  Name: Brandon Kimberly  Date: 01/27/2019  //
//  This is the source file for homework 1    //
//  which contains the definition for the     //
//  replace function.                         //
////////////////////////////////////////////////
#include <vector>
#include <string>
#include "replace.h"

std::vector<std::string> replace(std::vector<std::string>& text, std::string target, std::string replace) {
    std::vector<std::string> new_text;//Vector of words with necessarry replacements.
    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == target)//Words needs replaced.
            new_text.push_back(replace);
        else//Word does not need replaced.
            new_text.push_back(text[i]);
    }
    return new_text;
}