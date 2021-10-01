#include <iostream>

#include <fstream>

#include <string>

using namespace std;



int main () {

    string s;

    cin>>s;

    int n=s.size();

  string line;

  ifstream myfile ("english3.txt");

  if (myfile.is_open())

  {

      int chek=false;

      string maxi="";

    while ( getline (myfile,line) )

    {

        if(line.size()==n){

            chek=false;

            for(int i=0; i<n; i++){

                if(s[i]!='.'){

                    if(s[i]!=line[i]) chek=true;;

                }

            }

            if(chek==0)cout<<line<<endl;

        }

    }

    myfile.close();

  }



  else cout << "Unable to open file";



  return 0;

}
