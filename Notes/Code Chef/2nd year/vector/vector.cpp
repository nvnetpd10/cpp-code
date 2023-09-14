

/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */

void add_to_vector(vector<int> &A,int x)
{
	//Your code here
	
	A.push_back(x);
}

/*sort the vector A in ascending order*/
void sort_vector_asc(vector<int> &A)
{
	//Your code here
	sort(A.begin(),A.end());
}

/*reverses the vector A*/
void reverse_vector(vector<int> &A)
{
	//Your code here
	 reverse(A.begin(),A.end());
}

/*returns the size of the vector  A */
int size_of_vector(vector<int> &A)
{
	//Your code here
	A.size();
}

/*sorts the vector A in descending order*/
void sort_vector_desc(vector<int> &A){
	//Your code here
	sort(A.begin(), A.end(), greater<int>());
}

/*prints space separated 
elements of vector A*/
void print_vector(vector<int> &A)
{
	//Your code here
	for (auto iter = A.begin(); iter < A.end(); iter++)
    {
		cout << *iter<< " ";
	}
}

// int main(){
//     int T;
//     cin>>T;
//     for(int i=0;i<T;i++){
//         int q,x;
//         vector<int> A;
//         cin>>q;
//         for(int j=0;j<q;j++){
            
//             char que;
//             cin>>que;
//             switch(que){
//                 case'a':
//                     add_to_vector(&A,x);
//                     break;
//                 case'b':
//                     sort_vector_asc(&A);
//                     break;
//                 case'c':
//                     reverse_vector(&A);
//                     break;
//                 case'd':
//                     size_of_vector(&A);
//                     break;
//                 case'e':
//                     print_vector(&A);
//                     break;
//                 case'f':
//                     sort_vector_desc(&A);
//                     break;
//                 default:
//                     break;
//             }
//         }
//     }
// }