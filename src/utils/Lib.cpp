#include "Lib.h"


Lib::Lib(){};
Lib::~Lib(){};

string Lib::getDate(string format, bool needUsec)
{
    struct timeval tv;
    gettimeofday(&tv, NULL);

    time_t t;
    t = tv.tv_sec;
    char tmp[20];
    strftime(tmp, sizeof(tmp), format.c_str(), localtime(&t));
    string s(tmp);
    if (needUsec) {
        s += "." + itos(tv.tv_usec);
    }
    return s;
};

char * Lib::stoc(string str)
{
    const char * s = str.c_str();
    char * ch = new char[strlen(s) + 1];
    strcpy(ch, s);
    return ch;
};

int Lib::stoi(string s)
{
    return atoi(s.c_str());
}

double Lib::stod(string s)
{
    return atof(s.c_str());
}

string Lib::dtos(double dbl)
{
    std::ostringstream strs;
    strs << dbl;
    std::string str = strs.str();
    return str;
};

string Lib::itos(int num)
{
    char s[10];
    sprintf(s, "%d", num);
    return string(s);
}
string Lib::cati(const char* s, int num)
{ 
	char temp[1024]={0};
	sprintf(temp, "%s%d", s, num);
    return string(temp);
}

vector<string> Lib::split(const string& s, const string& delim)
{
    vector<string> elems;
    size_t pos = 0;
    size_t len = s.length();
    size_t delim_len = delim.length();
    if (delim_len == 0) return elems;
    while (pos < len)
    {
        int find_pos = s.find(delim, pos);
        if (find_pos < 0)
        {
            elems.push_back(s.substr(pos, len - pos));
            break;
        }
        elems.push_back(s.substr(pos, find_pos - pos));
        pos = find_pos + delim_len;
    }
    return elems;
}

void Lib::trimleft(string &str, char c/*=' '*/)
{
    //trim head

    int len = str.length();

    int i = 0;

    while (str[i] == c && str[i] != '\0') {
        i++;
    }

    if (i != 0) {
        str = string(str, i, len - i);
    }
}

void Lib::trimright(string &str, char c/*=' '*/)
{
    //trim tail
    int i = 0;
    int len = str.length();


    for (i = len - 1; i >= 0; --i) {
        if (str[i] != c) {
            break;
        }
    }

    str = string(str, 0, i + 1);
}

void Lib::trim(string &str)
{
    //trim head

    int len = str.length();

    int i = 0;

    while (isspace(str[i]) && str[i] != '\0') {
        i++;
    }

    if (i != 0) {
        str = string(str, i, len - i);
    }

    //trim tail
    len = str.length();

    for (i = len - 1; i >= 0; --i) {
        if (!isspace(str[i])) {
            break;
        }
    }

    str = string(str, 0, i + 1);
}

//************************************
// Method: strrpl
// FullName: strrpl
// Access: public 
// Returns: void
// Qualifier: �ַ����滻����,���滻���е�Ҫ�滻���ַ���,���滻���ַ������滻���ַ�����һ��һ����.
// Parameter: char * pDstOut,����ַ���,Ҫ��֤�㹻�Ŀռ���Դ洢�滻����ַ���.
// Parameter: char * pSrcIn,�����ַ���.
// Parameter: char * pSrcRpl,���滻���ַ���.
// Parameter: char * pDstRpl,�滻����ַ���.
// ע��:���ϵ��ַ�����Ҫ�� '\0 '��β.
//************************************
void Lib::strrpl(char* pDstOut, const char* pSrcIn, const char* pSrcRpl, const char* pDstRpl)
{ 
	char sTemp[256];
	strncpy(sTemp,pSrcIn,sizeof(sTemp));

	char* pi = sTemp; 
	char* po = pDstOut; 	
	int nSrcRplLen = strlen(pSrcRpl); 
	int nDstRplLen = strlen(pDstRpl); 	
	char *p = NULL; 
	int nLen = 0; 	
	do 
	{
		// �ҵ���һ���滻��
		p = strstr(pi, pSrcRpl); 		
		if(p != NULL) 
		{ 
			// ������һ���滻�����һ���滻���м���ַ���
			nLen = p - pi; 
			memcpy(po, pi, nLen);
			
			// ������Ҫ�滻���ַ���
			memcpy(po + nLen, pDstRpl, nDstRplLen); 
		} 
		else 
		{ 
			strcpy(po, pi); 			
			//���û����Ҫ�������ַ���,˵��ѭ��Ӧ�ý���
			break;
		} 
		
		pi = p + nSrcRplLen; 
		po = po + nLen + nDstRplLen; 
		
	} while (p != NULL); 
}

void Lib::replace(string& str, const string searchString, const string replaceString)
{
	string::size_type pos = 0;
	while((pos = str.find(searchString, pos)) != string::npos) {
        str.replace(pos, searchString.size(), replaceString);
        pos++;
    }
}

