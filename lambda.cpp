#include <iostream>
#include <vector>
#include <functional>
#include<algorithm>

void forEach(std::vector<int> val, const std::function<void(int)> &func)
{
    for (int v : val)
        func(v);
}

int main(int argc, char const *argv[])
{

    /* syntax of lambda function
        [capture](parameter){
            logic
         }
    */
    std::vector<int> value = {1, 2, 3, 45, 6, 7};

    auto it = std::find_if(value.begin(), value.end(), [](int x)
                           { return x > 3; });
    std::cout <<"GREATER VALUE: " << *it << std::endl;

    auto lambda = [](int val) mutable
    {
        std::cout << val << std::endl;
    };

    forEach(value, lambda);
    return 0;
}