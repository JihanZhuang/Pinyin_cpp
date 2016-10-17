/*************************************************************************
    > File Name: regex_replace.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年10月17日 星期一 19时49分55秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <boost/regex.hpp> 
using namespace std;
using namespace boost;
int main()
{
	string pattern="[a-z0-9_-]+";
	pattern="[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	boost::regex re(pattern, regex::icase);
	string text = "带着希望去旅行，比到达终点更美好,it is very beautiful,也不错!";
	string result = boost::regex_replace(text, re,"\t$0");
	cout << result << std::endl;
		
}
