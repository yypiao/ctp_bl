#ifndef LIB_H
#define LIB_H

#include <string>
#include <fstream>
#include <sys/time.h>
#include <cstring>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Lib
{
public:

    static string getDate(string format, bool needUsec = false);

    static char * stoc(string str); 
    static int stoi(string s);
    static double stod(string s);
	
	static string cati(const char* s, int num);
    static string dtos(double dbl);
    static string itos(int num);

    static vector<string> split(const string& s, const string& delim);
	
	/*ȥ��str�����c�ַ�*/
    static void trimleft(string &str, char c = ' ');
    /*ȥ��strǰ���c�ַ�*/
    static void trimright(string &str, char c = ' ');
    /*ȥ��strǰ��ͺ���Ŀո��,Tab���ȿհ׷�*/
    static void trim(string &str);
    /*���ַ���str���ָ��delim�ָ�ɶ���Ӵ�*/
	
	static void strrpl(char* pDstOut, const char* pSrcIn, const char* pSrcRpl, const char* pDstRpl);
	static void replace(string& rs, const string s1, const string s2);
	Lib();
    ~Lib();

};

#endif
