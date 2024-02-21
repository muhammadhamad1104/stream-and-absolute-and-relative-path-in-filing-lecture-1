#include<iostream>
#include<fstream>
#include<string>
int main()
{
    /*std::string str;
    std::ofstream of;
    of.open("hello.txt");
    of << "Hello world" << std::endl;
    of << "continue..." << std::endl;
    of << "data" << std::endl;
    std::cin >> str;
    of.close();*/
    std::string name[3];
    int age[3];
    std::string data;
    std::ifstream iff;
    //iff.open("./data.txt");
    //iff.open("../data.txt");
    iff.open("D:/DSA PROGRAM/FILING/stream and absolute and relative path in filing lecture 1/data.txt");
    if (iff.is_open()) {
        for (int i = 0; i < 3; i++) {
            iff >> name[i] >> age[i];
        }
        iff.close();
        for (int i = 0; i < 3; i++) {
            std::cout << name[i] << "\t" << age[i] << std::endl;
        }
    }
    else {
        std::cout << "not able to to open the file" << std::endl;
    }
    return 0;
}