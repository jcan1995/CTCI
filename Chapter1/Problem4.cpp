#include <iostream>
#include <string>

/*
  Difference between solutions is that the solution from the book performs the string manipulation in place. My original solution uses a new string variable.
*/

/*Original function I've created*/
void replace(std::string word, int trueLength){
  std::string percent = "%20";
  std::string newWord = "";
  for(int i = 0; i < word.length();i++){
    if(word[i] == ' ' && i < trueLength ){
      newWord.push_back(percent[0]);
      newWord.push_back(percent[1]);
      newWord.push_back(percent[2]);
    }

    else
      newWord.push_back(word[i]);
  }
  std::cout<<newWord<<std::endl;
}


/*From book.*/
void replaceSpaces(std::string str, int length){
  int spaceCount = 0;
  int newLength;
  int i;

  std::cout<<"string before: "<<str<<std::endl;

  /*Count how many spaces there are in the string*/
  for(i = 0; i < length;i++){
    if(str[i] == ' ')
      spaceCount++;
  }

  newLength = length + spaceCount * 2;
  str[newLength] = '\0';
  /*
    Length starts from last char of string
    newLength starts from the last blank space in the string array.
   */
  for(i = length - 1; i >= 0; i--){
    if(str[i] == ' '){
      str[newLength - 1] = '0';
      str[newLength - 2] = '2';
      str[newLength - 3] = '%';
      newLength = newLength - 3;

    }else{
      str[newLength - 1] = str[i];
      newLength = newLength - 1;
    }
  }
  std::cout<<"string after: "<<str<<std::endl;

}


int main(){
  std::string word = "Mr John Smith    ";

  //replace(word, 13);
  replaceSpaces(word,13);

}
