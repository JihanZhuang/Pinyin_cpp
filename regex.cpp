/*************************************************************************
    > File Name: regex.cpp
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年10月16日 星期日 18时39分26秒
 ************************************************************************/

#include<iostream>
#include<regex>
#include<string>
using namespace std;
int main(){
	 std::string tmp,html;
    while(getline(std::cin,tmp))
    {
        tmp += '\n';
        html += tmp;
    }
    std::string pattern("http(s)?://([\\w-]+\\.)+[\\w-]+(/[\\w- ./?%&=]*)?");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    std::regex r(pattern);
    for (std::sregex_iterator it(html.begin(), html.end(), r), end;     //end是尾后迭代器，sregex_iterator是regex_iterator的string类型的版本
        it != end;
        ++it)
    {
        std::cout << it->str() << std::endl;
    }
	return 1;
}
