/*Let's begin with a problem which covers our knowledge of 'String' syntax.

You are given a string 
�
S consisting of only lowercase english characters.
You need to generate 2 separate strings 
�
A and 
�
B

String 
�
A needs to be an exact replica of string 
�
S - it has to be created by starting with an empty string
String 
�
B is reverse of string 
�
S.

// Update the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string S,A,B;
   cin>>S;
// Write the code below this line to generate String A
   for(int i=0; i<S.length();i++)
      {
        // Adds the character to the end of A
        A+=S[i];
      }

// Write the code below this line to generate String A
    for(int i=S.length()-1; i>=0;i--)
       {
         // Adds the character to the start of B
         B+=S[i];
       }

   for(int i=0; i<S.length();i++)
       {
         cout<<A[i];
       }
   cout<<endl;
   for(int i=0; i<S.length();i++)
       {
         cout<<B[i];
       }
   cout<<endl;
  }
 return 0;
}
   


   Let us solve a problem on binary strings
You are given 2 separate binary strings - 
�
A and 
�
B - both of equal length.
You need to output the following

Count of '1's in each string
Count of indices (
�
i) where 
�
[
�
]
=
�
[
�
]
A[i]=B[i]

// Update the '_' in the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string A,B;
   cin>>A>>B;
   // variable to store the count of '1's in A
   int a_count = 0;
   // variable to store the count of '1's in B
   int b_count = 0;
   // variable to store the count of indices where A[i] = B[i]
   int common = 0;

  // Count '1s' in A
   for(int i=0; i<A.length();i++)
      {
        if(A[i]== '1')
          {
            a_count++;
          }
          
      }

  // Count '1s' in B
   for(int i=0; i<B.length();i++)
      {
        if(B[i]=='1')
          {
            b_count++;
          }
          
      }
  // Count indices where A[j] = B[j] 
   for(int i=0; i<A.length();i++)
      {
        if(A[i]==B[i])
          {
            common++;
          }
          
      }
  cout<<a_count<<" "<<b_count<<"  "<<common<<endl;
  }
 return 0;
}
   
   For some programming problems, it is beneficial to treat numbers as strings.

You are given an integer 
�
A.
Can the digits of 
�
A be rearranged such that the resulting number is divisible by 
5
5?

// Update the '_' in the code below to solve this problem

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int t;
  cin>>t; 
  while(t--)
  {
   string A;
   cin>>A;
   int flag=0;

  // If any '0' or '5' is found in the string A - then set flag as 1 and exit the loop
   for(int i=0; i<A.length();i++)
      {
        if(A[i]=='0' || A[i]=='5')
          {
            flag = 1;
            break;
          } 
      }
    if(flag == 1)
      {
        cout<<"Yes"<<endl;
      }
    else
      {
        cout<<"No"<<endl;
      }

  }
 return 0;
}
   

   Chef invented a modified wordle.
There is a hidden word 
�
S and a guess word 
�
T, both of length 
5
5.
Chef defines a string 
�
M to determine the correctness of the guess word. For the 
�
�
ℎ
i 
th
  index:

If the guess at the 
�
�
ℎ
i 
th
  index is correct, the 
�
�
ℎ
i 
th
  character of 
�
M is 
G
G.
If the guess at the 
�
�
ℎ
i 
th
  index is wrong, the 
�
�
ℎ
i 
th
  character of 
�
M is 
B
B.


// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    string S,T,M;
	    cin >> S >> T;
    	for(int k = 0; k < 5; k++)
    	{
    	   // If the i element in S and T are the same, then the i element in M is G
	       if (S[k] == T[k])
	       {
	           M=M+'G';
	       } 
	       // If the i element in S and T are not the same, then the i element in M is B
	       else
	       {
	         M=M+'B';
	        }
	     }
	 cout << M << endl;
	}
	
}
 

 Chef has a string 
�
S with him consisting of only lowercase alphabets.
Chef is happy if the string contains a contiguous substring of length strictly greater than 
2
2 in which all its characters are vowels.
Determine whether Chef is happy or not.
Note: in english alphabet, vowels are a, e, i, o, and u.

// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    string S;
	    cin >> S;
	    int string_Length=S.length();
	    int i=0;
	    int flag=0;
	    while(i < (string_Length-2))
	    {
	        //if any element is a vowel, and its next 2 elements are vowels, then our condition is met
	        if ( S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
	        {
	            if ( S[i+1] == 'a' || S[i+1] == 'e' || S[i+1] == 'i' || S[i+1] == 'o' || S[i+1] == 'u')
	            {
	                if ( S[i+2] == 'a' || S[i+2] == 'e' || S[i+2] == 'i' || S[i+2] == 'o' || S[i+2] == 'u')
	                {
	                    flag = 1;
	                    break;
	                }
	            }
	        }
	        i++;
	     }     
	        
	        if ( flag == 1 )
	        {
	            cout << "Happy" << endl;
	        }
	        else
	        {
	            cout << "Sad" << endl;
	        }
	    
	}
}
	    


        Chef has a binary string 
�
S of length 
�
N.
Chef can perform the following operation on 
�
S any number of times

Insert any character (
0
0 or 
1
1) at any position in 
�
S.
Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in 
�
S.


// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    string S;
	    cin >>S;
	    int i = 0;
	    int count = 0;
	    while( i < (N-1))
	    {
	        // Count the indices where adjacent elemnts are the same
            if (S[i] == S[i+1])
            {
                count++;   
            }
            i++;
	    }
	    cout << count << endl;
	    
	}
	
}	    


The World Chess Championship 
2022
2022 is about to start.
14
14 Classical games will be played between Chef and Carlsen in the championship,

Each game has one of three outcomes - it can be won by Carlsen, won by Chef, or it can be a draw.
The winner of a game gets 
2
2 points, and the loser gets 
0
0 points.
If it’s a draw, both players get 
1
1 point each.
The total prize pool of the championship is 
100
⋅
�
100⋅X. At end of the 
14
14 Classical games,

If one player has strictly more points than the other, he is declared the champion and gets 
60
⋅
�
60⋅X as his prize money, and the loser gets 
40
⋅
�
40⋅X.
If the total points are tied, then the defending champion Carlsen is declared the winner.
However, if this happens, the winner gets only 
55
⋅
�
55⋅X, and the loser gets 
45
⋅
�
45⋅X.
Given the results of all the 
14
14 games, output the prize money that Carlsen receives.

The results are given as a string of length 
14
14 consisting of the characters C, N, and D.

C denotes a victory by Carlsen.
N denotes a victory by Chef.
D denotes a draw.


// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string S;
	    int X;
	    cin >> X;
	    cin >> S;
	    
	    //variables to store Carlsen's and Chef's score
        int carlsen = 0;
        int chef = 0;
	    
	    for (int i = 0; i < 14; i++) 
	    {   
	        // loop through the string to identify the winner of each match
	        if(S[i] == 'C')
	        {
	            carlsen++;
	        }
	        else if(S[i] == 'N')
	        {
	            chef++;
	        }
	        else 
	        {
	            carlsen++;
	            chef++;
	        }
	    }
	    
	    //conditions to check amount won by Carlsen
        int carlsen_amount = 0; 
	    if(carlsen > chef)
	    {
	        carlsen_amount = 60*X;
	    }
	    else if(chef > carlsen)
	    {
	        carlsen_amount = 40*X;
	    }
	    else
	    {
	        carlsen_amount = 55*X;
	    }
	    
	    cout << carlsen_amount << endl;
	}
	
}


Mario was going to gift Princess Peach a string 
�
S of even length 
�
N.
Mario broke the string in the middle.
He now has two strings 
�
A and 
�
B such that

�
=
�
[
1
,
�
2
]
A=S[1, 
2
N
​
 ] and
�
=
�
[
�
2
+
1
,
�
]
B=S[ 
2
N
​
 +1,N].
Mario is not sure about the order in which he should join the strings 
�
A and 
�
B to get the string 
�
S.
Thus, he joins the strings in any random order.
Find whether it is guaranteed that Mario will get the same string 
�
S if he joins the strings 
�
A and 
�
B in any order.

Note that 
�
[
�
,
�
]
S[L,R] denotes a substring of string 
�
S starting at index 
�
L and having a length 
(
�
−
�
+
1
)
(R−L+1).


// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    string S;
	    cin >> S;
	    int i = 0;
        int flag = 0;
        // Note that N is even
        // We need to loop and check if S can be split into 2 substrings which have the same character at each index
        while (i < (N/2))
        {
            if (S[i] == S[(N/2) + i])
            {
                i++;
            }
            
            else
            {
                flag = 1;
                break;
            }
            
            
        }
        
        if (flag == 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
	}
}
        

        max occuring character

        // C++ program for the above approach

#include <bits/stdc++.h>

using namespace std;

// function that return maximum occuring character
char getMaxOccurringChar(string str)
{
	// create unordered_map to store frequency of every character
	unordered_map<char,int>mp;
	
	// to store length of string
	int n = str.length();
	
	// to store answer
	char ans;
	
	// to check count of answer character is less or greater
	// then another elements count
	int cnt=0;
	
	// traverse the string
	for(int i=0 ;i<n ; i++){
		// push element into map and increase its frequency
		mp[str[i]]++;
		
		// update answer and count
		if(cnt < mp[str[i]]){
			ans = str[i];
			cnt = mp[str[i]];
		}
	}
	
	return ans;
	
}

// Driver Code
int main()
{
	string str = "sample string";
	cout << "Max occurring character is: "
		<< getMaxOccurringChar(str);
}

// this code is contributed by bhardwajji




Let us start with a simple problem.
You are given an integer 
�
N.
You need to create and output to the console all the divisors of this integer in an ascending order.


// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int t;
  cin >> t; 
  while(t--)
  {
       int n;
       cin >> n;
       // declare an array to hold all divisors
       int divisors[n];
       int i = 1;
       int j = 0;
       while (i <= n)
        {  
            // check if n is divisible by each i
            if (n%i == 0)
            {
                //append each i to the array which meets this condition 
                divisors[j] = i;
                // increment j to add element to (j+1)th position 
                j++;
            }
            
            i++;
        }
        // run a loop to traverse through the array whose length is j 
        for(int i = 0; i < j; i++)
        {
          cout << divisors[i] << " ";   
        }
            cout << endl;
  }

}


You are given an integer 
�
N.
You need to create and output to the console all the digits of this integer, each separated by a space.


// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    // array to hold all integers of the number
	    int final_ans[7];
	    int j = 0;
	    
	    while(N>0)
	    {
	        // insert the last digit of N the start of the array
	        final_ans[j] = N % 10;
	        // update n as N/10 - removes the last digit of n
	        N = N / 10;
	        j++;
	    }
	    // We need to traverse from the right to left of the array as we inserted the last digit to the start of the array
	    for(int i = j-1; i >= 0; i--)
	    {
	        cout << final_ans[i] << " ";
	    }
	    
	    cout << endl;
	}
}





*/
