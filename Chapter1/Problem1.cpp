#include <string>
#include <iostream>
bool values[128];

bool isUnique(std::string word){
  if(word.length() > 128)
    return false;
  for(int i = 0; i < word.length();i++){
    int index = (int) word[i];
    if(values[index] == true)
      return false;
    values[index] = true;
  }

  return true;
}

int main(){
  std::string word;
  std::cout<<"Enter unique word: ";
  std::cin>>word;
  if(isUnique(word))
    std::cout<<"This word is unique!\n";
  else
    std::cout<<"This word is not unique :/\n";
  
}
