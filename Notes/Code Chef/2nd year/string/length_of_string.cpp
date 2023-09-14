#include <iostream>
using namespace std;

int main() {
    std::string str = "Hello!";
    int i;
    for(i = 0; str[i] != '\0'; i++); // notice this semicolon and '\0' is null char which terminates any C++ string!
    std::cout << "Length=" << i;
    
    return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    string str = "C++ Programming";

    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}
*/