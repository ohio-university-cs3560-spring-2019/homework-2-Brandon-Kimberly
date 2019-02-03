////////////////////////////////////////////////
//  Name: Brandon Kimberly  Date: 01/27/2019  //
//  This is the main program for homework 1.  //
//  The purpose of this program is to take    //
//  command line arguments to replace all oc- //
//  currences of one word in a file to anot-  //
//  her word.                                 //
////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <string>
#include <assert.h>
#include "replace.h"

int main(int argc, char *argv[]) {
    assert(argc == 3);
    std::string target = argv[1];//Word that needs replaced
    std::string re_place = argv[2];//Word to replace with
    std::string tmp;//Temp variable to hold input.
    std::vector<std::string> text;//Contains all chars in input file.
    std::vector<std::string> new_text;//Contains all strings with necessarry replacements.

    while (std::cin >> tmp)//Gets all words in the file
        text.push_back(tmp);

    new_text = replace(text, target, re_place);//Makes new vector with all necessarry words replaced.

    for (int i = 0; i < new_text.size(); ++i)//Prints out all words with necessarry changes.
        std::cout << new_text[i] << " ";

    return 0;
}
