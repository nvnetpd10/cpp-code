



#include <iostream>
using namespace std;




class Shirt

{

    private:

	   int sleeveLength;

        int collarSize;

    

    public:

    Shirt( int sleeve, int collar)

    {

    	sleeveLength = sleeve;

    	collarSize = collar;

	}



    int GetSleeveLength() { return(sleeveLength);	}

    int GetCollarSize() { return(collarSize); 	}



     

	

};



class Pants

{



   private:

     int waistSize;

     int inSeam;

   

   public:

   	

   Pants ( int waist, int inseam)

   {

   	   waistSize = waist;

   	   inSeam = inseam;

   }



	int GetWaistSize() { return(waistSize); }	

	int GetInSeam() { return(inSeam); 	}	

};





void displayClothingFacts ( Pants &pants, char * debugMsg=NULL)

{

	 if (debugMsg!=NULL)

	 {

	 

	    cout << "*****************************" << endl;

        cout << debugMsg << endl;

     }

	 

	 cout << "**************************" << endl;

     cout << " Waist Size = " << pants.GetWaistSize() << endl;

     cout << " InSeam = " << pants.GetInSeam() << endl;     

     	

	

}



void displayClothingFacts ( Shirt &shirt, char * debugMsg=NULL)

{

	if (debugMsg!=NULL)

	 {

	 

	    cout << "*****************************" << endl;

        cout << debugMsg << endl;

     }

	 

	 cout << "**************************" << endl;

     cout << " collar size = " << shirt.GetCollarSize() << endl;

     cout << " sleeve length= " << shirt.GetSleeveLength()<< endl;     

     

	

}



int main()

{

	

    Shirt myShirt (36,18); //XXL

    

    Pants myPants ( 42,32 );

    

    

    displayClothingFacts(myShirt," My Shirt and Pants");

    displayClothingFacts(myPants);
return 0;
}





	

	