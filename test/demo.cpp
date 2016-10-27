#include "cppjieba/Jieba.hpp"
#include "boost/algorithm/string.hpp"
#include <fstream> 
using namespace std;
using namespace boost;

const char* const DICT_PATH = "./dict/jieba.dict.utf8";
const char* const HMM_PATH = "./dict/hmm_model.utf8";
const char* const USER_DICT_PATH = "./dict/user.dict.utf8";
const char* const IDF_PATH = "./dict/idf.utf8";
const char* const STOP_WORD_PATH = "./dict/stop_words.utf8";
 
int main(int argc, char** argv) {
  cppjieba::Jieba jieba(DICT_PATH,
        HMM_PATH,
        USER_DICT_PATH,
        IDF_PATH,
        STOP_WORD_PATH);
  vector<string> words;
  vector<cppjieba::Word> jiebawords;
  if(argv[1]==NULL){
	  cout<<"file can not be NULL"<<endl;
	  return 0;
  }
  string file(argv[1]);
  string line;
  ifstream out;
  ofstream ofresult("sitePageData.data",ios::app);
  const size_t topk = 5;
  vector<cppjieba::KeywordExtractor::Word> keywordres;
  vector <string> fields;
  
  out.open(file.c_str(),ios::in);
  while(!out.eof()){
	  std::getline(out,line);
	  split(fields,line,is_any_of(","));
	int count = fields.size();
	string newLine;
    for (int i = 3; i < count;i++)
    {
		newLine+=fields.at(i);
        //cout << fields.at(i) << endl;
    }
	  jieba.CutForSearch(newLine,words);
	  if(words.size()>0){
	  string tmpS=limonp::Join(words.begin(), words.end()," ");
	  ofresult <<fields.at(0)<<","<<fields.at(1)<<","<<fields.at(2)<<","<<tmpS << endl;
	  }
	  //jieba.extractor.Extract(line, keywordres, topk);
	  //cout << line << endl;
	  //int count=keywordres.size();
	  //for(int i=0;i<count;i++){
	//	cout << keywordres[i].word<<" ";
	 // }
	 // cout<<endl;
	 // cout<<keywordres<<endl;

  }
  out.close();
  ofresult.close();
return 1;
  string s;
  string result;
/*
  s = "他来到了网易杭研大厦";
  cout << s << endl;
  cout << "[demo] Cut With HMM" << endl;
  jieba.Cut(s, words, true);
  cout << limonp::Join(words.begin(), words.end(), " ") << endl;

  cout << "[demo] Cut Without HMM " << endl;
  jieba.Cut(s, words, false);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  s = "我来到北京清华大学";
  cout << s << endl;
  cout << "[demo] CutAll" << endl;
  jieba.CutAll(s, words);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  s = "小明硕士毕业于中国科学院计算所，后在日本京都大学深造";
  cout << s << endl;
  cout << "[demo] CutForSearch" << endl;
  jieba.CutForSearch(s, words);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  cout << "[demo] Insert User Word" << endl;
  jieba.Cut("男默女泪", words);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;
  jieba.InsertUserWord("男默女泪");
  jieba.Cut("男默女泪", words);
  cout << limonp::Join(words.begin(), words.end(), "/") << endl;

  cout << "[demo] CutForSearch Word With Offset" << endl;
  jieba.CutForSearch(s, jiebawords, true);
  cout << jiebawords << endl;

  cout << "[demo] Lookup Tag for Single Token" << endl;
  const int DemoTokenMaxLen = 32;
  char DemoTokens[][DemoTokenMaxLen] = {"拖拉机", "CEO", "123", "。"};
  vector<pair<string, string> > LookupTagres(sizeof(DemoTokens) / DemoTokenMaxLen);
  vector<pair<string, string> >::iterator it;
  for (it = LookupTagres.begin(); it != LookupTagres.end(); it++) {
	it->first = DemoTokens[it - LookupTagres.begin()];
	it->second = jieba.LookupTag(it->first);
  }
  cout << LookupTagres << endl;

  cout << "[demo] Tagging" << endl;
  vector<pair<string, string> > tagres;
  s = "我是拖拉机学院手扶拖拉机专业的。不用多久，我就会升职加薪，当上CEO，走上人生巅峰。DOTA";
  jieba.Tag(s, tagres);
  cout << s << endl;
  cout << tagres << endl;;

  cout << "[demo] Keyword Extraction" << endl;
  const size_t topk = 5;
  vector<cppjieba::KeywordExtractor::Word> keywordres;
  jieba.extractor.Extract(s, keywordres, topk);
  cout << s << endl;
  cout << keywordres << endl;
  return EXIT_SUCCESS;*/
}
