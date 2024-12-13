

#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> dictionary;

    // Adding key-value pairs to the dictionary
    dictionary["apple"] = 5;
    dictionary["banana"] = 3;
    dictionary["orange"] = 7;

    // Accessing values using keys
    std::cout << "Number of apples: " << dictionary["apple"] << std::endl;
    std::cout << "Number of bananas: " << dictionary["banana"] << std::endl;
    std::cout << "Number of oranges: " << dictionary["orange"] << std::endl;

    return 0;
}
