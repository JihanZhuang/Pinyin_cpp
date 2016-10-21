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
  std::string str = "带着希望去旅行，比到达终点更美好,it is very beautiful,也错!Quick brown FOX";
  std::string newtext = "\t$&";
  boost::regex re("[a-z0-9_-]+",boost::regex::perl|boost::regex::icase);
  boost::regex a_re("\\p{InCJK_Unified_Ideographs}",boost::regex::perl|boost::regex::icase);

  std::cout << str << std::endl;

  std::string result = boost::regex_replace(str, re, newtext);
  std::cout << result << std::endl;
  result = boost::regex_replace(str, a_re, newtext);
  std::cout << result << std::endl;
}

