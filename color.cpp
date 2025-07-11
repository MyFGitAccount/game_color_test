#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
std::string dec_to_bin(uint32_t dec){
     std::vector<int> binary_digits;
     
     while(dec>0){
       binary_digits.push_back(dec%2);
       dec/=2;
     }
     int len=binary_digits.size();
     std::string answer="";
     std::reverse(binary_digits.begin(), binary_digits.end());
     for(int i=0;i<len;i++){
         answer+=std::to_string(binary_digits[i]);
     }
     return answer;
}

std::string dec_to_bin(uint8_t dec){
     std::vector<int> binary_digits;
     
     while(dec>0){
       binary_digits.push_back(dec%2);
       dec/=2;
     }
     int len=binary_digits.size();
     std::string answer="";
     std::reverse(binary_digits.begin(), binary_digits.end());
     for(int i=0;i<len;i++){
         answer+=std::to_string(binary_digits[i]);
     }
     return answer;
}

int main() {

    uint32_t color;
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t a;
    color=37029067;
    red=(color>>0)& 255;
    green=(color>>8)&255;
    blue=(color>>16)&255;
    a=(color>>24)&255;
    std::string cv=dec_to_bin(color);
    std::string rv=dec_to_bin(red);
    std::string gv=dec_to_bin(green);
    std::string bv=dec_to_bin(blue);
    std::string av=dec_to_bin(a);
    std::cout<<"THe value of red is:"<<(int)red<<"\n";
    std::cout<<"The value of green is:"<<(int)green<<"\n";
    std::cout<<"The value of blue is:"<<(int)blue<<"\n";
    std::cout<<"The value of a is:"<<(int)a<<"\n";
    std::cout<<"The value of  color value in bin is:"<<cv<<"\n";
    std::cout<<"The value of red color value in bin is:"<<rv<<"\n";
    std::cout<<"The value of green color value in bin is:"<<gv<<"\n";
    std::cout<<"The value of blue color value in bin is:"<<bv<<"\n";
    std::cout<<"The value of alpha value in bin is:"<<av<<"\n";
    return 0;
}
