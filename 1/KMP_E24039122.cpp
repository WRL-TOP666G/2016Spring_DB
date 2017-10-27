#include <iostream>
#include <fstream> // std::ofstream
#include <cstring>
using namespace std;


int main(int argc, char* argv[]){

    /*
    cout<< "Executable file: " << argv[0] << endl;
    cout<< "Parameter 1: " << argv[1] << endl;
    cout<< "Parameter 2: " << argv[2] << endl;
    */

    cout<< "磅︽郎: " << argv[0] << endl;
    cout<< "把计1 : " << argv[1] << endl;
    cout<< "把计2 : " << argv[2] << endl;
    string s = argv[1] ;
    string p = argv[2];
    int count=0,j=0,i;
    /*
    cout<< "Please type string: " << endl;
    cin>> s ;
    cout<< "Please type patten: " << endl;
    cin>> p ;
    */
    int lengthS=s.length();
    int lengthP=p.length();

    for(i=0; i<lengthS ;i++){
            //cout<<i<<endl;
		 if(s[i]==p[j]){
		  	count++;
            //cout<<count<<endl;
		  	if(count==lengthP){
             cout<<(i-lengthP+1) ;
			 return i-lengthP+1 ;
		  	}
		  	j++;
		  	}
		 else{
		  count=0;
		  j=0;
		  }
		}
	cout<<-1;
    return -1;


}
