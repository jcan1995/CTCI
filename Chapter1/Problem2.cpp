#include <iostream>
#include <string>


void reverse(char *str){

  char *end = str;
  char tmp;
  /*If there is a char...*/
  if(str){
    /*move end pointer to mem. address before null space*/
    while(*end)
      ++end;
    --end;
    /*while str pointer is still before end pointer*/
    while(str < end){
      tmp = *str;/*Hold char value*/
      *str++ = *end;/*Swap*/
      *end-- = tmp;/*Assign temp variabl*/
    }
  }
}

int main(){

  std::cout<<"Enter a string! ";

  std::string word;
  std::cin>>word;

  /*Assign char pointer to memory address of first char in the string array*/
  char* str = &word[0];
  reverse(str);
  std::cout<<"Reversed String: "<<word<<"\n";


}
