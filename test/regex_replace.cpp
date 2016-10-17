/*************************************************************************
    > File Name: regex_replace.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年10月17日 星期一 19时49分55秒
 ************************************************************************/

#include <iostream>
#include <iterator>
#include <regex>
#include <string>
 
int main()
{
   std::string text = "带着希望去旅行，比到达终点更美好,it is very beautiful,也不错!Quick brown fox";
   std::regex vowel_re("[a-z0-9_-]+",std::regex::icase);
 
   // write the results to an output iterator
   std::regex_replace(std::ostreambuf_iterator<char>(std::cout),
                      text.begin(), text.end(), vowel_re, "*");
 
   // construct a string holding the results
   std::cout << '\n' << std::regex_replace(text, vowel_re, "\t$&") << '\n';
}
