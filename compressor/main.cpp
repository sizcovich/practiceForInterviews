#include <iostream>
#include <string>
#include <vector>
using namespace std;


string compressor(string myString){
    string compressArray;
    char a = myString[0];
    int counter = 1;
    for(int i = 1; i<myString.size(); ++i){
        if(myString[i] == a){
            ++counter;
        }
        else{
            compressArray.append(string(1,a));
            char num = '0' + (char)counter;
            compressArray.append(string(1,num));
            counter = 1;
            a = myString[i];
            cout << "a: " << a << endl;
        }
        if(i == myString.size()-1){
            compressArray.append(string(1,a));
            char num = '0' + (char)counter;
            compressArray.append(string(1,num));
        }
    }
    if (myString.size() <= compressArray.size()){
        return myString;
    } else{
        return compressArray;
    }
}

char* compressorAntique(char myString[]){
    int size = 0;
    int counter[256] = {0};
    for(int i = 0; myString[i] != 0; ++i){
        ++counter[myString[i]];
        ++size;
    }

    char* compressArray = new char[size];
    int j = 0;
    for(int i = 0; i<256;++i){
        if(counter[i] != 0){
            compressArray[j] = (char)i;
            char c = '0' + (char)counter[i];
            compressArray[j+1] = c;
            j+=2;
        }
    }
    cout << j-2 << endl;
    cout << size << endl;
    if (size <= j-2){
        strcpy(compressArray, myString);
    }
    return &compressArray[0];
}


// char* compressor(char* string){
//     char *compressArray;
//     int counter[255];
//     for(int i = 0; i<256; ++i){
//         ++counter[(int) *(string+i)];
//     }
//     for(int i = 0; i<256;++i){
//         if(counter[i] != 0){
//             compressArray = compressArray + counter[i] + (char)i;
//         }
//     }
//     if (sizeof(string) <= sizeof(compressArray)){
//         return string;
//     } else{
//         return compressArray;
//     }
// }

int main()
{
    string mystring = "aabcccccaaa";
    // std::cout << compressor(mystring) << std::endl;
    char stringAntique[] = "hhaassdddddss";
    string newArray = compressor(mystring);
    std::cout << newArray << std::endl;
    // delete[] newArray;
    return 0;
}
