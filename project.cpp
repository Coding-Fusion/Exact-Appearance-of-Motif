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
};
/* End Structure Property */
/* Vector Declaration */
vector<string_ref> f(string&&, const int) = delete; // disallow calls with temporaries
vector<string_ref> f(const string& str, const int n) 
{
    int lim = str.length() - n + 1;
    vector<string_ref> result(lim);
    for (int j = 0; j < lim; j++) 
    {
        result[j] = { &str[j], &str[j + n] };
    }
    return result;
}
/* End Property */
 int main()
{
/*Property*/
 int i,k,temp;
 int carry=0;
 int j=0;
 int motifLength=15;
 int count=0;
 int row=9;
 string firstString{"atgaccgggatactgatAAAAAAAAGGGGGGGggcgtacacattagataaacgtatgaagtacgttagactcggcgccgccg"};
 char str[row][100] = 
 {"acccctattttttgagcagatttagtgacctggaaaaaaaatttgagtacaaaacttttccgaataAAAAAAAAGGGGGGGa",
 "tgagtatccctgggatgacttAAAAAAAAGGGGGGGtgctctcccgatttttgaatatgtaggatcattcgccagggtccga",
 "gctgagaattggatgAAAAAAAAGGGGGGGtccacgcaatcgcgaaccaacgcggacccaaaggcaagaccgataaaggaga",
 "tcccttttgcggtaatgtgccgggaggctggttacgtagggaagccctaacggacttaatAAAAAAAAGGGGGGGcttatag",
 "gtcaatcatgttcttgtgaatggatttAAAAAAAAGGGGGGGgaccgcttggcgcacccaaattcagtgtgggcgagcgcaa",
 "cggttttggcccttgttagaggcccccgtAAAAAAAAGGGGGGGcaattatgagagagctaatctatcgcgtgcgtgttcat",
 "aacttgagttAAAAAAAAGGGGGGGctggggcacatacaagaggagtcttccttatcagttaatgctgtatgacactatgta",
 "ttggcccattggctaaaagcccaacttgacaaatggaagatagaatccttgcatAAAAAAAAGGGGGGGaccgaaagggaag",
 "ctggtgagcaacgacagattcttacgtgcattagctcgcttccggggatctaatagcacgaagcttAAAAAAAAGGGGGGGa"
 };
 int lim = firstString.length() - motifLength + 1;
 int flag=lim;
 int pos[row];
 	
/*End Property*/ 
/* Prepare Property Motif */
	cout<<"Test Case 1\n";
   cout<<" List of possible Motifs in first string are"<<"\n";
    auto result = f(firstString, motifLength);
    int cnt=0,m=0;
    for(int i=0;i<lim/6;i++)
    {
    	for(m=cnt;m<(cnt+7)&&m<lim;m++)
    	{
     		cout<<string(result[m].start,result[m].end)<<"\t";
        }
      cnt=m;
      cout<<"\n";
	}
	cout<<"\n-----------------------------------------------\n";
/* End Property */

/* Algorithm Implementation Start */
for(carry=0;carry<lim;carry++)  					//Iteration of Motif
{
string Motif = string(result[carry].start, result[carry].end);
for(k=0;k<row;k++)									//Match the pattern from second string to last string	
   {
	  	for(i=0;str[k][i]!='\0';i++)				//Match the motif with each substring of single string 
		{  
           if(str[k][i]==Motif[j])
			{
					j++;
					
			}
			else if(str[k][i]!=Motif[j] && Motif[j]!='\0')
			{
					j=0;
					temp=0;
			}			
			else if(Motif[j]=='\0')
			{
					temp=1;
					count++;
					pos[count-1]=(i+1)-j;
					j=0;
					continue;
			}
			else
			{
			}
        }
        if(j==motifLength)						//Validation if motif at the last position of the string
        {
        	count++;
        	pos[count-1]=(i+1)-j;
        	j=0;
        	temp=1;
        }
    }	
	if(count==row)								//Validation if Motif is matched in all string
	{
		cout<<"The Exact Appearance of Common Motif is "<<string(result[carry].start, result[carry].end)<<" with length "<<motifLength<<"\n";
		cout<<"The Motif Position"<<"\n";
		cout<<"String  1"<<"\t"<<"="<<"\t"<<(carry+1)<<"\n";
		for(int i=0;i<count;i++)
		{
			cout<<"String"<<"\t"<<i+2<<"\t"<<"="<<"\t"<<pos[i]<<"\n";
		}
		flag--;
	}
	else
	{
	}
	count=0;
}
if(flag==lim)													//Validation if Motif is not present in all string
{
cout<<"No Common Motif Found in list of given strings";
}
/*End Algorithm */	
return 0;
}
