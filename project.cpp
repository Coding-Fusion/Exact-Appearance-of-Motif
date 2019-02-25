/*AUTHOR 		: DEBRATH BANERJEE
  PROJECT 		: Study and Implement the EXACT-APPEARANCE of Motif
*/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;
/* Structure Define */
struct string_ref 
{
    const char* start;
    const char* end;
int main()
};
/* End Structure Property */
/* Vector Declaration */
vector<string_ref> f(string&&, const int) = delete; // disallow calls with temporaries
*AUTHOR 		: DEBRATH BANERJEE

PROJECT 		: Study and Implement the exact pattern matching algorithm

*/

{

 int i,j,k,temp;

 char str[6][100]=

 {"ertybmnhyuioptyhdfgwertyghEXACTAPPEARANCEghhhhuery",

 "EXACTAPPEARANCEyuhtyhdfgcbhrtyuhjdfgbnwedfgtyuploi",

 "tyuipoughtyjnkmhdgrtyhshswerrdjskEXACTAPPEARANCEyu",

 "gctgagaattggatgAAAAAAAAGGGGGGGtccacgcaatcgcgaaccaa",

 "tcccttttgcggtaatgtgccgggaggctEXACTAPPEARANCEggttac",

 "gtcaatcatgttcttgtgaatggatttAAAAAAAAGGGGGGGgaccgcttg"

 };

    

 char Motif[20]={"EXACTAPPEARANCE"};

 j=0;

 cout<<"Test Case 1\n";

 for(k=0;k<6;k++)

	{

		for(i=0;str[k][i]!='\0';i++)

		{  

           if(str[k][i]==Motif[j])

			{

					j++;

			}

			else if(str[k][i]!=Motif[j]&& Motif[j]!='\0')

			{

					j=0;

					temp=0;

			}			

			else if(Motif[j]=='\0')

			{

					temp=1;

					cout<<"The EXACT APPEARANCE of Motif is present in given string "<<k+1<<" at position "<<(i+1)-j<<"\n";

					str[k][i+1]='\0';

					j=0;

			}

			else

			{

			}

        }

		if(temp!=1)

		{

			cout<<"No exact appearance of a common motif "<<"in string "<<k+1<<"\n";

		}

	}

	

 return 0;

}
