#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int mostFriquency(string s){
    int frq[26]={0};
    for(char c : s){
        char ch = tolower(c);
        if(isalpha(ch)){
            frq[c-'a']++;
        }
        
    }
    string vowel = "aeiou";
    int maxvowel = 0;
    int maxconst = 0;
    for(char v : vowel){
        maxvowel = max(maxvowel,frq[v-'a']);
    }
    for(int i = 0; i < 26; i++){
        char ch = 'a'+i;
        if(vowel.find(ch) == string::npos){
            maxconst = max(maxconst,frq[i]);
        }
    }
    return maxvowel+maxconst;

}

int main(){
    string s;
    cout<<"enter any string: ";
    cin>>s;

   cout<< mostFriquency(s);

}