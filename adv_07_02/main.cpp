#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <list>
#include<map>
#include <stdexcept>
#include <exception>

#include "template_print.h"

int main()
{
    std::set<std::string> data1 {"one", "two", "three", "four"};
    std::vector<int> data2 {1, 2, 3, 4};
    std::list<double> data3;
    for (int i = 1; i <= 5; i++)
    {
        data3.push_back(static_cast<double>(i) / 10.0);
    }

    template_print(data1);
    template_print(data2);
    template_print(data3);

    return 0;
}
