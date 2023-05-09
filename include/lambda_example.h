#ifndef LAMBDA_EXAMPLE_H
#define LAMBDA_EXAMPLE_H

#include <algorithm>
#include <iostream>
#include <string>

class SortByLength {
public:
    bool operator()(const std::string& str1, const std::string& str2) const {
        return str1.length() < str2.length();
    }
};

void LambdaExample1();
void LambdaExample2();
void LambdaExample3();
void LambdaExample4();
void LambdaExample5();

#endif