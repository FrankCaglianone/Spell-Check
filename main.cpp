//
//  main.cpp
//  spellcheck
//
//  Created by Francesco Caglianone on 06/01/23.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>


using namespace std;

set<string> Dictionary;
vector<string> Output;
bool found = false;


void get_dictionary(string dict) {
    ifstream dicptr(dict);
    if(!dicptr) {
        cout << "Error 404" << endl;
        exit(1);
    }
    string word;
    while(dicptr >> word) {
        Dictionary.insert(word);
    }
}



void write_out(string outfile) {
    ofstream fp(outfile);
    for(auto x : Output) {
        fp << x << '\n';
    }
    fp.close();
}

void checker(string input) {
    ifstream inptr(input);
    if(!inptr) {
        cout << "Error 404" << endl;
        exit(1);
    }
    
    string word;
    
    while(inptr >> word) {
        for(auto x : Dictionary) {
            if (x.compare(word) == 0) {   // x == word
                found = true;
            }
        }
        if(!found) {
            Output.push_back(word);
        }
        found = false;
    }
}


void checker_cin() {
    string word;
    
    while(cin >> word) {
        for(auto x : Dictionary) {
            if (x.compare(word) == 0) {    // x == word
                found = true;
            }
        }
        if(!found) {
            Output.push_back(word);
        }
        found = false;
    }
}


int main(int argc, const char * argv[]) {
    
    string input, output, dictionary;
    
    for (int i=0; i<argc; i++) {
        string str = argv[i];
        
        if(str.find("in=") != string::npos) {
            input = str.substr(3);
        }
        
        if(str.find("out=") != string::npos) {
            output = str.substr(4);
        }
        
        if(str.find("dict=") != string::npos) {
            dictionary = str.substr(5);
        }
    }
        
    
    // Get dictionary
    if(dictionary.empty()) {
        dictionary = "/usr/share/dict/words";
    }
    get_dictionary(dictionary);

    
    // Get input and check
    if(input.empty()) {
        cout << "Input:" << endl;
        checker_cin();
    } else {
        checker(input);
    }
    

    // Write on output
    if (output.empty()) {
        for(auto x : Output) {
            cout << x << endl;
        }
    } else {
        write_out(output);
    }
    
    
    return 0;
}
