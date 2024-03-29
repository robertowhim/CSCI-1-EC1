/**

 *

 * Chapter 10 Programming Challenge #2

 * Name: Roberto M Martinez

 * Date: 12/5/2019

 * Program summary:
 Program intakes a word from the user and returns back an inverted
 version of the word. Ex. word -> drow

 **/



#include <iostream>

#include <cassert>

#include <string>



using namespace std;




/**

 Purpose: This program takes in a word from the user and displays back
 the inputted word reversed.

 I/O:
 
 Input: Program receives a word in the form of a string
 Output: Program displays a given word reversed in the form of a string

 **/

string word_reverse(string word);

void test_word_reverse();

void test();

void run();



int main() {

    char t;

    cout << "Enter [t] to test, or any other character to run." << endl;

    cin >> t;

    if (t == 't') {

        test();

    }
    else {

        run();

    }

}



void test() {

    test_word_reverse();
}

/**
Pseudocode:
#Reverse given string
##Count how many characters string has
###Keep track of number
##grab character according to the number tracked and insert into a new string
##count down tracker after inserting character
##Repeat counting down and inserting characters until finished with the string
**/

void run() {

    cout << "Please input a word." << endl;
    string input;
    cin >> input;
    cout << word_reverse(input) << endl;

}



string word_reverse(string word) {
    int count = word.length() - 1;
    string drow;
    while (count >= 0) {
        drow.append(1, word[count]);
        count = count - 1;
    }
    return drow;
}

void test_word_reverse()
{
    assert(word_reverse("word") == "drow");
    assert(word_reverse("77ewww") == "wwwe77");
    assert(word_reverse("im_hungry") == "yrgnuh_mi");
    assert(word_reverse("") == "");
}
