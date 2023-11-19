//AICP_Internship_task-3
//Done By Afia Mushtaq

#include<iostream>
#include<cstring>
using namespace std;

class  electricity_units_calculator{
	public:
//function to display student_id
void student_id_display(string student_id){
	cout<<"My Student id is "<<student_id<<endl;
}
//function to display menu
void menu_display(){
	
	cout<<"Enter your choice\n"
	    <<"Press 1 to display the bill of slab 1 and slab 2.\n"
	    <<"Press 2 to display the bill of slab 3.\n"
	    <<"Press any other key to exit.\n";
	
}
// Function to calculate cost of first slab
 void costSlab1(int electricity_units_slab1_1,int electricity_units_slab1_2,int electricity_units_slab1_3){
 	
 	 int unit_cost_slab1=10;
 	 cout<<"Bill for Slab 1 is\n";
 	 int Total_bill_slab1_1=electricity_units_slab1_1*unit_cost_slab1;
 	 cout<<Total_bill_slab1_1<<"\t";
 	 int Total_bill_slab1_2=electricity_units_slab1_2*unit_cost_slab1;
 	 cout<<Total_bill_slab1_2<<"\t";
 	 int Total_bill_slab1_3=electricity_units_slab1_3*unit_cost_slab1;
 	 cout<<Total_bill_slab1_3<<"\t"<<endl;
 }
//function to calculate cost of 2nd slab
 void costSlab2(int electricity_units_slab2_1,int electricity_units_slab2_2,int electricity_units_slab2_3){
 	
 	 int unit_cost_slab2=15;
 	 cout<<"Bill for Slab 2 is\n";
 	 int Total_bill_slab2_1=electricity_units_slab2_1*unit_cost_slab2;
 	 cout<<Total_bill_slab2_1<<"\t";
 	 int Total_bill_slab2_2=electricity_units_slab2_2*unit_cost_slab2;
 	 cout<<Total_bill_slab2_2<<"\t";
 	 int Total_bill_slab2_3=electricity_units_slab2_3*unit_cost_slab2;
 	 cout<<Total_bill_slab2_3<<"\t"<<endl;
 }
 //function to calculate cost of 3rd slab
  void costSlab3(int electricity_units_slab3_1,int electricity_units_slab3_2,int electricity_units_slab3_3){
 	
 	 int unit_cost_slab3=20;
 	 cout<<"Bill for Slab 3 is\n";
 	 int Total_bill_slab3_1=electricity_units_slab3_1*unit_cost_slab3;
 	 cout<<Total_bill_slab3_1<<"\t";
 	 int Total_bill_slab3_2=electricity_units_slab3_2*unit_cost_slab3;
 	 cout<<Total_bill_slab3_2<<"\t";
 	 int Total_bill_slab3_3=electricity_units_slab3_3*unit_cost_slab3;
 	 cout<<Total_bill_slab3_3<<"\t"<<endl;
 }	
	
	
};

int  main(){
	//creating object of class
	electricity_units_calculator  calculator;
	int choice;
	//using 2D array for storing matrix data
	int electricity_consumption_units[3][3]{
	          {55,65,75},
			  {120,150,170},
			  {210,230,240}
			};
	//making repetitive menu
			
do{
	cout<<endl;
   calculator.student_id_display("XY12345678");
    calculator.menu_display();
	cin>>choice;
	
	switch(choice){
		case 1:
			calculator.costSlab1(electricity_consumption_units[0][0],electricity_consumption_units[0][1],electricity_consumption_units[0][2]);
			calculator.costSlab2(electricity_consumption_units[1][0],electricity_consumption_units[1][1],electricity_consumption_units[1][2]);
			break;
	    case 2:
	    	calculator.costSlab3(electricity_consumption_units[2][0],electricity_consumption_units[2][1],electricity_consumption_units[2][2]);
	    	break;
	    case 3:
		   	"Exit.";
		   	return 0;
	}
}while(choice<3);	
		
		


	
	return 0;
}
