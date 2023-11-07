#ifndef COUNT_H_INCLUDED
#define COUNT_H_INCLUDED

int count(char word[], char letter) {
    int letterCtr = 0, wordLen = 0;

    while (word[wordLen] != '\0') {
        wordLen++;
    }

    for(int i = 0; i < wordLen; i++) {
        if(word[i] == letter) {
            letterCtr++;
        }
    }

    return letterCtr;
}


#endif // COUNT_H_INCLUDED
