//Header file for envp list parser
#pragma once

//System Libraries
#define     word_length 100     //Max length of a word
#define     max_words   100    //Max Length of a list

//Functions
int main(int, char **, char **);     //main

int total_chars(char [][word_lenth], int);  //sum the charecter number
int insert(char [][word_lenth], char [], int &, int); //insert new word into the list at specified position
int position(char [][word_length], char[], int); //find insertion position at the new string
