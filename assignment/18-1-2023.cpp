#include <iostream>
using namespace std;




/*   1.	Write a program to print the area and perimeter of a triangle 
           having sides of 3, 4 and 5 units by creating 
           a class named 'Triangle' with the constructor having the three sides as its parameters.
           
           
           */
          
          
    class triangle{
    
    	public:	
    	int x,y,z;
    
		int perimeter(int l,int b, int h)	{
			x=l;
			y=b;
			z=h;
			
			cout<<(x+y+z)<<endl;
		}
		int area(int b, int h)	{
			
			y=b;
			z=h;
			
			cout<<(y*z)/2<<endl;
		}
			
	
    	
	};       
	
		int main(){
			
			
			triangle r;
			
			r.perimeter(3,4,5);
			r.area(4,5);
			return 0;
			
		}
		
		
		
		/*     2.	Write a program to print the area of two rectangles
		 having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function 
		named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
		
		*/
		
		/*
		
    class rectangle{
    
    	public:	
    	int x,y;
    
		int perimeter(int l,int b)	{
			x=l;
			y=b;
			
			cout<<(x+y)<<endl;
		}
		int area(int l, int b){
			x=l;
			y=b;
			cout<<(x*y)<<endl;
			
		}
	
    	
	};       
	
		int main(){
			
			
			rectangle r1,r2;
			
		
			r1.area(4,5);
			r2.area(5,8);
		}		
		
		*/
		
		/*
		3.	Write a program to print the area of a rectangle by creating a
		 class named 'Area' taking the values of its length and breadth as
		  parameters of its constructor and having a function named 'returnArea'
		   which returns the area of the rectangle.
		 Length and breadth of the rectangle are entered through keyboard.
		 */
		 
		 /*
		 class area{
		 	
		 	private:
		 		int length;
		 		int breadth;
		 		
		 		public:
		 			
		 	void set_data(int l,int b){
		 		length=l;
		 		breadth=b;
		 		
			 }	
			 void get_data(){
			 	
			 	cout<<"length ="<<length<<" "<<"breadth ="<<breadth<<endl;
			 	
			 }	
			 
			 void return_area(int l,int b){
			 	
			 	cout<<"Area of rect. is: "<<(l*b)<<endl;
			 }
			 
		 	
		 	
		 };
		 
		 int main(){
		 	
		 	int x,y;
		 	cout<<"Enter length and Breadth"<<endl;
		 	cin>>x,y
		 	area a;
		 	a.set_data(x,y);
			 a.get_data(); 
			 a.return_area(x,y);
		 	
		 }
		 
		 */
		 
		 /*   4.	Print the average of three numbers entered by the user by creating
		  a class named 'Average' having a function to
		  calculate and print the average without creating any object of the Average class.
		 
		 */
	/*	 
		 class average{
		 	public:
		 		
		 	int x,y,z;
		 		
		 		int res(int x,int y,int z){
		 			
		 			cout<<(x+y+z)/3;
		 			
				 }
				 
		 };
		 
		 int main(){
		 	
		 	average n;
		 	n.res(4,5,6);
		 	
		 }
		 
		 */
		 
/*
5.	Print the sum, difference and product of two complex numbers
 by creating a class named 'Complex' with separate
 functions for each operation whose real and imaginary parts are entered by the user.

*/

/*
class complex{
	private:
		int a,b;
		
		public:
			
		void set_value(int x,int y){
			
			a=x;
			b=y;
		}	
		
		void get_value(){
			
			cout<<a<<"+i"<<b<<endl;
		}
		
		void sum(complex c1, complex c2){
			cout<<(c1.a+c2.a)<<"+i"<<(c1.b+c2.b);
		}
		
			void diff(complex c1, complex c2){
			cout<<(c1.a-c2.a)<<"+i"<<(c1.b-c2.b);
		}
		
			void pro(complex c1, complex c2){
			cout<<(c1.a*c2.a)<<"+i"<<(c1.b*c2.b);
		}
	
};
int main(){
	
	int x,y;
	cout<<"Enter value of 1st complex no."<<endl;
	cin>>x>>y;
	int m,n;
	cout<<"Enter value of 2nd complex no."<<endl;
	cin>>m>>n;
	complex c1,c2,s;
	
	c1.set_value(x,y);
     c1.get_value();
	c2.set_value(m,n);
	c2.get_value();
	cout<<endl;
	cout<<"Sum is"<<endl;
     s.sum(c1,c2);
     cout<<endl;
     cout<<"Diff is "<<endl;
     s.diff(c1,c2);
     cout<<endl;
     cout<<"Product is"<<endl;
     s.pro(c1,c2);
     return 0;
}

*/
