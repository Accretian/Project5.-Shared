#include <iostream>
#include <string>

int main() {

    int classcount = 0;
    std::string str;
    std::cin >> str;

    if (str.size() > 8 && str.size() < 15) {
        for (char ch : str) {
            if ((ch > 33 && ch < 48) || (ch > 57 && ch < 65) ||
                (ch > 90 && ch < 97) || (ch > 122 && ch < 127))
                classcount++;
            if (ch > 47 && ch < 58)
                classcount++;
            if (ch > 64 && ch < 91)
                classcount++;
            if (ch > 96 && ch < 123)
                classcount++;
        }


    }

    std::string out = "Undefined.";

    out = (classcount > 2) ? "YES" : "NO";

    std::cout << out;

}