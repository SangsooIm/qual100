#include <iostream>
#include <string>
using namespace std;

bool detectCapitalUse(string word) {
    bool firstchar = 0; 
    int num = 0; // # of capital characters
    for(int i = 0; i < word.size(); i++){
        int chk  = 0;
        if (i == 0){
            chk = word[i];
            if (chk < 97)
                firstchar = 1;
        }
        chk = word[i];
        if (chk < 97){
            num++;
        }
    }
    if (num == word.size())
        return true;
    else if (firstchar == 1 && num == 1)
        return true;
    else if (num == 0)
        return true;
    else 
        return false;
}


int main()
{
    bool t1, t2, t3, t4;
    t1 = detectCapitalUse("Abc");
    t2 = detectCapitalUse("ABC");
    t3 = detectCapitalUse("abc");
    t4 = detectCapitalUse("aBc");
    cout << "t1 : " << t1 << " t2 : " << t2 << " t3 : " << t3 << " t4 : " << t4 << endl;
}