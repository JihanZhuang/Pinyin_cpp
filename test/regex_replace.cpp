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
using namespace std; 
int main()
{
   std::string text = "带着希望去旅行，比到达终点更美好,it is very beautiful,也不错!Quick brown FOX";
   std::regex a_re("[a-z0-9_-]+",regex::icase);
   //std::regex b_re("[\\p{Han}\\p{P}\\p{Z}\\p{M}\\p{N}\\p{L}\t]");
 
   // write the results to an output iterator
   std::regex_replace(std::ostreambuf_iterator<char>(std::cout),
                      text.begin(), text.end(), a_re, "*");
 
   // construct a string holding the results
   string result = std::regex_replace(text, a_re, "\t$&");
   cout<<result<<endl;
   //result = std::regex_replace(result, b_re, "");
	//cout<<result<<endl;
}
