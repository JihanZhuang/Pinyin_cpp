/*************************************************************************
    > File Name: pinyinClass.h
    > Author: Han Zhuang
    > Mail: zhuanghan1103@163.com 
    > Created Time: 2016年10月09日 星期日 20时45分38秒
 ************************************************************************/

#ifndef PINYIN_PINYINCLASS_H
#define PINYIN_PINYINCLASS_H
class Pinyin{
	public:
	protected:
		char* prepare(const char* str);
		char* romanize(const char* str,bool isName);
		char* convertSurname(const char* str);
	private:
};
#endif
