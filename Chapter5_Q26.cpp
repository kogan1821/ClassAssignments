
#include <iostream>
#include <fstream>//I use this to open and use files within the program
#include <string>//I use this to access getline

using namespace std;

void webpageInfo(string, string, ofstream&);//I use this function for the HTML info

int main()
{

    string name, description;//I state some of my variables
    ofstream outputFile;//I use ofstream, since I am creating a new file
    outputFile.open("webpage.html");//I create a new html file

    if(outputFile.fail()){//if the file fails to open, the contents below are displayed
        cout << "Error displaying file" << endl;
        exit(1);
    }

    cout << "Enter your name:" << endl;//I ask the user for their name
    getline(cin,name);//Use getline
    cout << "Describe yourself:" << endl;//I ask the user to describe themselves
    getline(cin,description);//I use getline to access all the info entered by user


    webpageInfo(name,description, outputFile);//I call this function

    outputFile.close();//This program closes

    cout << "The program has been created" << endl;//I state that the program has been created


    return 0;
}
void webpageInfo(string name, string description, ofstream& outputFile){//This program stores all info for HTML

    outputFile << "<html>" << endl;
    outputFile << "<head>" << endl;
    outputFile << "</head>" << endl;
    outputFile << "<body>" << endl;
    outputFile << "<center>" << endl;
    outputFile << "<h1>" << name << "</h1>" << endl;//I state my name in the header
    outputFile << "</center>" << endl;
    outputFile << "<hr/>" << endl;
    outputFile << description << endl;//I state my description
    outputFile << "<hr/>" << endl;
    outputFile << "</body>" << endl;
    outputFile << "</html>" << endl;
}
