#include "PhoneticFinder.hpp"
#include <iostream>
using namespace std;
namespace phonetic{
    
    string find(string text, string word){
         
        if (word == "" || word == " " || word.find(" ") != string::npos) __throw_invalid_argument ("excption caught : the word does not exist.");
    
        bool flag = false;
        int slen = text.length(); 

        for (int i = 0; i < slen; i++)
            {
                string temp = "";
                while (i < slen && text.at(i) != ' ')
                    {
                        temp += text.at(i);
                        i++;
                    }
            
                if (word.length() == temp.length()){
                    
                        flag = false;
                        for (int j = 0; j < word.length(); j++){
                            if (equalchar(word.at(j),temp.at(j))){
                                flag = true;
                            }
                            else{
                                flag = false;
                                break;
                            } 
                        }

                        if (flag) return temp;
                        
                }
                

            }
        __throw_invalid_argument ("excption caught : the word does not exist.");
        return 0;

        
    }

    bool equalchar (char user, char text){
        
        if (tolower(user) == tolower(text) || user == text){
            return true;
        } 

        else if (user == 'w' || user == 'W' || user == 'v' || user == 'V'){
            if (text == 'w' || text == 'W' || text == 'v' || text == 'V'){
                return true;
            }
        }

        else if (user == 'b' || user == 'B' || user == 'f' || user == 'F' || user == 'p' || user == 'P'){
            if (text == 'b' || text == 'B' || text == 'f' || text == 'F' || text == 'p' || text == 'P'){
                return true;
            }
        }

        else if (user == 'g' || user == 'G' || user == 'j' || user == 'J'){
            if (text == 'g' || text == 'G' || text == 'j' || text == 'J'){
                return true;
            }
        }

        else if (user == 'c' || user == 'C' || user == 'k' || user == 'K' || user == 'q' || user == 'Q'){
            if (text == 'c' || text == 'C' || text == 'k' || text == 'K' || text == 'q' || text == 'Q'){
                return true;
            }
        }

        else if (user == 's' || user == 'S' || user == 'z' || user == 'Z'){
            if (text == 's' || text == 'S' || text == 'z' || text == 'Z'){
                return true;
            }
        }

        else if (user == 'd' || user == 'D' || user == 't' || user == 'T'){
            if (text == 'd' || text == 'D' || text == 't' || text == 'T'){
                return true;
            }
        }

        else if (user == 'o' || user == 'O' || user == 'u' || user == 'U'){
            if (text == 'o' || text == 'O' || text == 'u' || text == 'U'){
                return true;
            }
        }

        else if (user == 'i' || user == 'I' || user == 'y' || user == 'Y'){
            if (text == 'i' || text == 'I' || text == 'y' || text == 'Y'){
                return true;
            }
        }
        
        return false;

    }
     


}
