
#include <iostream>
#include <cstdlib>
 
using namespace std;
 
class Movie
{
	public:
             Movie();
             Movie(int a, string m, double p, int n, string r,string re);
             double getPrice();
             void ticketInfo();
      private:
              int row; 
	          string movieName;
		      double price;
			  int numTickets;
			  string ratings;
			  string refreshment;    
};
 
 
Movie::Movie(int a, string m, double p, int n, string r,string re)
{
	  row = a;
      movieName = m;
      price = p;
      numTickets = n;
      ratings = r; 
      refreshment =re;
}
Movie::Movie()
{
  row = 0;
  movieName = "";
  price = 0;
  numTickets = 0;
  ratings = "";
  refreshment="";  
}
 
double Movie::getPrice()
{
	return price * numTickets;
}
 
void Movie::ticketInfo()
{
	cout<<"Movie Name: "<<movieName<<"\nRating: "<<ratings<<"\nPrice: "<<price<<"\nrefreshment:"<<refreshment;	
}
 
 
int main()
{
	int a,b;
	float c;
	string t,d,e,f;
	double p;
	
	int choice;
	cout<<"\n***  Wellcome to Ciniplex  ***\n";
	cout<<"\n 1. Notebook";
	cout<<"\n 2. Loveyatri";
	cout<<"\n 3. Bodyguard";
	
	cout<<"\n Enter your choice:\n";
	cin>>choice;
	switch(choice)
	{
	    case 1:
			{
				d="Notebook";
				cout<<"\nEnter The row you want:";
				cin>>a;
				cout<<"\n Enter the num of tickets you want: ";
				cin>>b;
				
				cout<<"\n What stuff youb want as refreshment :";
				cin>>e;
				cout<<"\n Give Ratings:";
				cin>>t;
			    
				Movie m1(a,d,100.0,b,t,e);
			
				/*cout<<"\nRow "<<a;
				cout<<"Tickets"<<b;
				cout<<"refreshment"<<e;
				cout<<"ratings"<<t;*/
            	cout<<"\n\nPrice: "<<m1.getPrice()<<"\n";
            	m1.getPrice();
 	            m1.ticketInfo();
	            system("pause");
	            break;
			} 
		case 2:
			{
				d="Loveyatri";
		     	cout<<"\nEnter The row you want:";
				cin>>a;
				cout<<"\n Enter the num of tickets you want: ";
				cin>>b;
				
				cout<<"\n What stuff youb want as refreshment :";
				cin>>e;
				cout<<"\n Give Ratings:";
				cin>>t;  
			/*	cout<<"Row "<<a;
				cout<<"Tickets"<<b;
				cout<<"refreshment"<<e;
				cout<<"ratings"<<t;
				Movie m1(10,"The Notebook", 12.5, 1, "5","6\n");*/
				Movie m1(a,d,100.0,b,t,e);
 	            cout<<"Price: "<<m1.getPrice()<<"\n";
 	            m1.ticketInfo();
	            system("pause");
	            break;
			}
		case 3:
			{
				d="Bodyguard";
				cout<<"\nEnter The row you want:";
				cin>>a;
				cout<<"\n Enter the num of tickets you want: ";
				cin>>b;
				
				cout<<"\n What stuff youb want as refreshment :";
				cin>>e;
				cout<<"\n Give Ratings:";
				cin>>t;
				Movie m1(a,d,100.0,b,t,e);
			//	Movie m1(10,"The Notebook", 12.5, 1, "5");
 	            cout<<"Price: "<<m1.getPrice()<<"\n";
            	m1.ticketInfo();
	            system("pause");
	            break;
	
			}
	} 
	return 0;
}
	
 	

 		
 


  

 

 

 


