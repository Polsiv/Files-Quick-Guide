#include <fstream>

int main(){


std::fstream newitem;

newitem.open("filename.txt", std::ios::app);

    return 0;
}