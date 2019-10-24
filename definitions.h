#ifndef DEFINITIONS_HEADER_
#define DEFINITIONS_HEADER_

#include<vector>
#include <utility>

typedef std::vector< std::vector<int> > Matrix;
typedef std::pair<int, int> pii;


struct Score : private pii
{
    Score(int whiteScore, int blackScore) : pii(whiteScore, blackScore){
    }

    int getWhite() { return this->first;}
    int getBlack() { return this->second;}
    
};

#endif