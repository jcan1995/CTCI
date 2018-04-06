#include<iostream>
#include <string>
using namespace std;

/*Original implementation of Problem 5 in Chapter 1*/
string compress(string word){
  char currentLetter = word[0];
  int count = 0;
  string compressedWord;

  for(int i = 0; i <word.length();i++){
    if(word[i] == currentLetter)
      count++;
    else{
      compressedWord.push_back(currentLetter);
      compressedWord+=to_string(count);
      count = 1;
      currentLetter = word[i];
    }
  }
  compressedWord.push_back(currentLetter);
  compressedWord+=to_string(count);
  if(compressedWord.length() < word.length())
    return compressedWord;
  else
    return word;

}

int main(){

  cout<<compress("aabcccccaaa")<<endl; 


}
