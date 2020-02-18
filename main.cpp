#include <iostream>
#include <stdio.h>
#include "rapidjson/document.h"
#include <fstream>
#include <string>

#define RAPIDJSON_SSE42

using namespace std;


using namespace rapidjson;





std::ifstream::pos_type filesize(const char* filename)
{
    std::ifstream in(filename, std::ifstream::ate | std::ifstream::binary);
    return in.tellg();
}


int main()
{
  string buffer;

  ifstream myfile;
//    myfile.open ("Items-en_US.json");

    Document document;
FILE *file = fopen ( "Items-en_US.json", "r" );
//FILE *file = fopen ( "Example_2.json", "r" );
char line[2000];
char *ex_raw = (char*) malloc(sizeof(char)*filesize("Items-en_US.json"));
string *ex = new(ex_raw) string;



while (fgets(line, 2000, file) != NULL ) {
    ex->append(line);
}
fclose ( file );
        document.Parse(ex->c_str());
//cout<< *ex;
}
