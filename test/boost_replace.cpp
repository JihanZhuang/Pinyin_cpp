/*************************************************************************
    > File Name: boost_replace.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年10月20日 星期四 20时13分43秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<boost/regex.hpp>
#include<iterator>
using namespace std;

int main(){
  std::string str = "hellooooooooo";
  std::string newtext = "o Bob";
  boost::regex re("ooooooooo");
  std::cout << str << std::endl;

  std::string result = boost::regex_replace(str, re, newtext);
  std::cout << result << std::endl;
}

