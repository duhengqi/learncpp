#include <algorithm>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <lambda_example.h>

using namespace std;

void abssort(float* x, unsigned n)
{
    sort(x, x + n, [](float a, float b) { return abs(a) < abs(b); });
}

// Lambda捕获列表
// 值传递
void LambdaExample1()
{
    int num = 10;
    auto function = ([num] { cout << "num: " << num << endl; });
    function();
}

void LambdaExample2()
{
    int index = 100;
    int num = 10;
    auto function = ([=] { cout << "num: " << num << "index: " << index << endl; });
    function();
}

// 引用传递
void LambdaExample3()
{
    int num = 10;
    auto function = ([&num] {
        num = 20;
        cout << "num: " << num << endl;
    });
    function();
}

void LambdaExample4()
{
    int index = 100;
    int num = 10;
    auto function = ([&] {
        num = 15;
        index = 105;
        cout << "num: " << num << "index: " << index << endl;
    });
    function();
}

void LambdaExample5()
{
    vector<string> vec = {"Hello", "World", "C++", "Programming"};
    sort(vec.begin(), vec.end(), SortByLength());
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}
