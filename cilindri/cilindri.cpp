#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include"Cilindriii.h"
#include"Circular.h"
#include"Rectangle.h"
using namespace std;
int main()
{
    ifstream fin("Cylinders.txt");
    Cilindriii z;
    vector<Cilindriii> s;
    while (fin >> z.hight >> z.width >> z.radius) {
        s.push_back(z);
    }

    for (int i = 0; i < s.size(); i++) {
        cout << s[i].hight << " " << s[i].width << " " << s[i].radius << endl;
    }
    cout << endl << endl;

    for(int i=0; i<s.size(); i++){
        for (int j = 0; j < s.size() - 1; j++) {
            if (s[j].hight * 3.14 * s[j].radius > s[j + 1].hight * 3.14 * s[j + 1].radius)
                swap(s[j], s[j + 1]);
        }
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i].hight << " " << s[i].width << " " << s[i].radius << endl;
    }
}

