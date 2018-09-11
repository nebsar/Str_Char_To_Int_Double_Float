/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Eagleye
 *
 * Created on September 10, 2018, 12:28 AM
 */

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main() {

    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 with words";
    string str4 = "words and 2";

    int myint1 = stoi(str1);
    int myint2 = stoi(str2);
    int myint3 = stoi(str3);
    // error: 'invalid_argument'
    // int myint4 = stoi(str4);

    cout << "stoi(\"" << str1 << "\") is " << myint1 << '\n';
    cout << "stoi(\"" << str2 << "\") is " << myint2 << '\n';
    cout << "stoi(\"" << str3 << "\") is " << myint3 << '\n';
    //cout << "stoi(\"" << str4 << "\") is " << myint4 << '\n';

    //  C std Library begins from here!!!!!!!

    char* str = "my number is 567";

    int int1 = atoi(&str[13]);

    long long1 = atol(&str[13]);
    long long llong1 = atoll(&str[13]);

    char* fstr = "5.68";
    float float1 = atof(fstr);

    cout << "atoi(\"" << str << "\") is " << int1 << '\n';

    cout << "atof(\"" << fstr << "\") is " << float1 << '\n';

    int personCount;
    float cost;
    char* str7 = "For 6 persons $5.68 we have here";
    sscanf(str7, "For %i persons $%f we have here", &personCount, &cost);

    cout << personCount << " " << cost << endl;



    //////NUMBER TO STRING CONVERSION
    double d = 34.556765;

    cout<<to_string(d)<<endl;
    
    cout<<to_wstring(d)<<endl;




}

