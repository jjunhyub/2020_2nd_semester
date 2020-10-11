#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;
string f();
string s = "3 [a] 2 [bc]           ";
int i = 0;
int size;

int main(){
    s.erase(remove_if(s.begin(),s.end(),::isspace),s.end());
    size = s.size();
    string answer="";
    for(i = 0;i<size;i++){
        if(s[i]>='0'&&s[i]<='9')answer+=f();
        else answer+=s[i];
    }
    cout<<answer<<"\n";
    system("PAUSE");
    return 0;
}
string f()
{
    int num = s[i]-'0';
    i+=2;
    string answer = "";
    for(;i<size;i++){
        if(s[i]>='0'&&s[i]<='9')answer+=f();
        else if(s[i]==']')break;
        else answer+=s[i];
    }
    string temp = answer;
    for(int i = 1;i<num;i++){
        answer+=temp;
    }
    return answer;
}