/*************************************************************************
    > File Name: pinyinClass.h
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年10月09日 星期日 20时45分38秒
 ************************************************************************/

#ifndef PINYIN_PINYINCLASS_H
#define PINYIN_PINYINCLASS_H
#include <iostream>
#include <string>
#include <map>
using namespace std;
class Pinyin{
	public:
		map<string,string> punctuations;
		Pinyin(){
			punctuations.insert(pair<string, string>("，",","));
			punctuations.insert(pair<string, string>("。","."));
			punctuations.insert(pair<string, string>("！","!"));
			punctuations.insert(pair<string, string>("？","?"));
			punctuations.insert(pair<string, string>("：",":"));
			punctuations.insert(pair<string, string>("“","\""));
			punctuations.insert(pair<string, string>("”","\""));
			punctuations.insert(pair<string, string>("‘","'"));
			punctuations.insert(pair<string, string>("’","'"));
			/*for(auto it = punctuations.begin(); it != punctuations.end(); ++it)
{
    std::cout << it->first << " " << it->second << " " << it->second << "\n";
}
		}*/
		char* prepare(const char* str);
		char* romanize(const char* str,bool isName);
		char* convertSurname(const char* str);
	protected:
	private:
};
#endif
