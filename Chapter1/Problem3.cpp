#include <string>
#include <iostream>

bool isPermutation(std::string& s1, std::string& s2){
  int letters[128] = {0};

  if(s1.length() != s2.length()){
    return false;
  }

  for(int i = 0; i < s1.length();i++){
    int c =(int)(s1[i]);
    letters[c]++;
  }
  for(int j = 0; j < s2.length();j++){
    int val = (int)(s2[j]);
    if(--letters[val] < 0){
      return false;
    }
  }
  return true;
}

int main(){
  std::string a = "puppy";
  std::string b = "upppp";

  if(isPermutation(a,b))
    std::cout<<"Yes!!";
  else
    std::cout<<"Nope :/";
  std::cout<<std::endl;  
}
