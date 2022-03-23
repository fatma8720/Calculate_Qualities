#include <iostream>
#include <fstream>
#include <string>
#include<cstdlib>
#include <cmath>
using namespace std;

int main()
{
    //open file will read and write on
    ifstream fastaq;
    fastaq.open("fastaq.fastq");
    ofstream qualities;
    qualities.open("qualities.txt");

    ofstream qu;
    qu.open("qu.txt");
    //specify line size
    //char line[256];
    string line;

    // extract only qualitites lines
    int i = 0;
    while (getline(fastaq, line))
    {
        i++;
        if (i % 4 == 0)
        {

            //write it on qualitites.txt
            //write it on qu.txt converted with Q law = -10log10(P)
            qualities << line << endl;
            qu << (-1*(10*log10(int(line[0])))) << " " << (-1*(10 * log10(int(line[line.length() - 1])))) << endl;
            
        }
    }
    fastaq.close();
    qualities.close();
    qu.close();
 
      return 0;
}
