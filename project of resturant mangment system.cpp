#include<iostream>
using namespace std;

int  disc(int total2,int persdisc=5){
	
	int discount=(total2*persdisc)/100;
	int total_after_discount=total2-discount;
	
	cout<<"\n\t\t DISCOUNT YOU GOT\t=\t["<<discount<<"]\t\t\n";
	cout<<"\t\t YOUR PAYMENT AFTER DISCOUNT\t=\t["<<total_after_discount<<"]\t\t\n";
	cout<<"***********************************************************************\n";
}
int main(){

   int quantity[13];
   
   int total;
   
   int referanceno;
   
   char decesion;
 
   char decesion2;
   
   char cat;
   
   int priceoffastfood[5]{180,599,250,20,30};
   
   string purch[10];
   
   char lms;
   
  
  
   int rsofpiz[2]{1200,1500,};
 
   string piz[2]{"Medium Size Pizza","Large size Pizza"};
  
   string fod[6]{"Pizza","Sandwich","Noodles","French Fries","Somosa","Showarma"};
    string sweets[3]{"Ice Cream","Fruit Cake","Chococlate"};
    int priceofsweets[3]{130,210,230};
   int priceofdrinks[3]{50,130,180};
    string drinks[3]{"Cofee","Tea","Juice"};
//catogory
cout<<"\n****************************WELCOME HERE*******************************************\n";
	cout<<"\n****** WE CAN SERVE YOU THREE CATEGORIES OF FOODS ******  \n";
	
	cout<<"\n\t\t CATEGORIES \t"<<"REFRANCE ALPHABITS\n";
	cout<<"\n\t\t FAST FOOD \t\t"<<"(A) \t\n";
	cout<<"\n\t\t DRINKS \t\t"<<"(B) \t\n";
	cout<<"\n\t\t SWEETS \t\t"<<"(C) \t\n";
	cout<<"\n************************************************************************\n";
salectcat:;
	cout<<"\n CHOOSE ANY CATEGORY WITH THEIR REFERANCE ALPHABITS:-\t";
	cin>>cat;
	cin.ignore();
	        if (cat=='a'||cat=='A'){
			fastfood:;	
		cout<<" \n *********IN FAST FOOD WE HAVE AVAILABE ITEMS********\n ";
			// menu card of fast foods
	 	cout<<'\n'<<'\t'<<"Foods"<<'\t'<<'\t'<<" Unit Price\t"<<"\tReferance No";
	 	cout<<'\n'<<'\t'<<"-------"<<'\t'<<'\t'<<"------------\t"<<"\t------------\n";
	 	cout<<'\n'<<'\t'<<fod[0]<<"\t\t\t\t"<<"\t\t(1)";
	// items after pizza
		cout<<'\n'<<'\t'<<fod[1]<<"\t\t"<<priceoffastfood[0]<<"\t\t\t(2)";
	 	cout<<'\n'<<'\t'<<fod[2]<<"\t\t\t"<<priceoffastfood[1]<<"\t\t\t(3)";
		cout<<'\n'<<'\t'<<fod[3]<<"\t\t"<<priceoffastfood[2]<<"\t\t\t(4)";
		cout<<'\n'<<'\t'<<fod[4]<<"\t\t\t"<<priceoffastfood[3]<<"\t\t\t(5)";
		cout<<'\n'<<'\t'<<fod[5]<<"\t\t"<<priceoffastfood[4]<<"\t\t\t(6)\n";
		 
		 cout<<"\n************************************************************************\n";
		// start ordering with ref no
		order:;
		 cout<<"\n\n\t********* PLEASE MAKE CHOICE ACCORDING TO THEIR REFERANCE  No *********::-";
		 cin>>referanceno;
		 
		 	cin.ignore(); 
		 	// pizza menu
		 if(referanceno==1){
		 cout<<"\n\n\t********* We have these type of pizza*********\n\t\n";
		 
		 cout<<'\t'<<'\t'<<piz[0]<<'\t'<<'\t'<<rsofpiz[0]<<"\t\t(M)\n"<<endl;
		 cout<<'\t'<<'\t'<<piz[1]<<'\t'<<'\t'<<rsofpiz[1]<<"\t\t(L)\n"<<endl;
		 cout<<"\n*************************************************************************\n";
		 
		 pizzasalection:;
		 cin>>lms;
		  cin.ignore();
		  
		 
		   if(lms=='m'||lms=='M'){
		   	cout<<"\tQuantity please \t:-";
		 
		 cin>>quantity[0];
		 cin.ignore();
		  total=(rsofpiz[0]*quantity[0])+total;
		  purch[0]="Medium Pizza";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide2:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"\nWould you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection Salect Again";
		 goto decide2;	}
	
		   }
		   else if(lms=='l'||lms=='L'){
		   	cout<<"\tQuantity please :-";
		 
		 cin>>quantity[1];
		 cin.ignore();
		  total=(rsofpiz[1]*quantity[1])+total;
		  
		  purch[1]="Large Pizza";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide3:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"Would you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection Salect Again";
		 goto decide3;	}
	
		   }
		 else{cout<<"\n Wrong salection choose again from the given Pizza\n";
		 goto pizzasalection; }
		   
		   }
		 
		 
		 
		 
		 
		 
		 else if(referanceno==2){
		
		 cout<<"\tQuantity please :-";
		 // to store the amount o items in a slot quantity arrow
		 cin>>quantity[2];
		 cin.ignore();
		 //simple caculation 
		  total=(priceoffastfood[0]*quantity[2])+total;
		  //store the name of food which will help in cout
		  purch[2]="Sandwich";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide4:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"Would you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection salect again"; goto decide4;	}
	}
		 else if(referanceno==3){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[3];
		 cin.ignore();
		  total=(priceoffastfood[1]*quantity[3])+total;
		  purch[3]="Noodles";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide5:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"Would you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection salect again"; goto decide5;	}
	}	 
	
	else if(referanceno==4){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[7];
		 cin.ignore();
		  total=(priceoffastfood[2]*quantity[7])+total;
		  purch[4]="French Fries";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide6:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"Would you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection salect again"; goto decide6;	}
	}	 
	else if(referanceno==5){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[5];
		 cin.ignore();
		  total=(priceoffastfood[3]*quantity[5])+total;
		  purch[5]="Somosa";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide7:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"Would you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection salect again"; goto decide7;	}
	}	
	 else if(referanceno==6){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[6];
		 cin.ignore();
		  total=(priceoffastfood[4]*quantity[6])+total;
		  purch[6]="Showarma";
		  cout<<"Anything else in [Fast Food ]Sir \n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide8:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		 
		 
		cout<<"Would you like somthing in [DRINKS]or[SWEETS] \n\t\tFor Drinks---\t\t\t(D)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='d'||decesion2=='D'){goto drinks; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto order;	}
		else{cout<<"invaild salection salect again"; goto decide8;	}
	}
	else {cout<<"\n\n Sorry We dont have this Type Referance no \n\n"; goto fastfood;
	}
		 
	//drinks	 
}
else if(cat=='b'||cat=='B'){
           	drinks:;
			cout<<"\n **********IN THE DRINKS CATEGORY WE HAVE THESE DRINKS********** \n";
			cout<<'\n'<<'\t'<<"Drinks"<<'\t'<<'\t'<<"Unit Price\t"<<"Referance No\n"; 
				cout<<'\t'<<"-------"<<'\t'<<'\t'<<"----------\t"<<"--------------\n"; 
			for(int i=0;i<3;i++){
				cout<<'\n'<<'\t'<<drinks[i]<<'\t'<<'\t'<<priceofdrinks[i]<<"\t\t("<<i+1<<")\n";
			}
		cout<<"\n************************************************************************\n";
		decesion_of_another_drink:;
			 cout<<"\n\n\t****** PLEASE MAKE CHOICE ACCORDING TO THEIR REFERANCE  No ******:-";
		 cin>>referanceno;
		 if(referanceno==1){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[7];
		 cin.ignore();
		  total=(priceofdrinks[0]*quantity[7])+total;
		  cout<<"Anything else in [DRINKS]\n\t\t(Yes)\t\t(Y)\n\t\t(No)\t\t(N)";
		 decidea:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		cout<<"Would you like somthing in [FAST FOOD]or[SWEETS] \n\t\tFor FAST FOOD---\t\t(F)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='F'||decesion2=='f'){goto fastfood; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto decesion_of_another_drink;	}
		else{cout<<"invaild salection salect again"; goto decidea;	}
	}	 
	
	else if(referanceno==2){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[8];
		 cin.ignore();
		  total=(priceofdrinks[1]*quantity[8])+total;
		  cout<<"Anything else in [DRINKS]\n\t\t(Yes)\t\t(Y)\n\t\t(No)\t\t(N)";
		 decideb:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		cout<<"Would you like somthing in [FAST FOOD]or[SWEETS] \n\t\tFor FAST FOOD---\t\t(F)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='F'||decesion2=='f'){goto fastfood; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto decesion_of_another_drink;	}
		else{cout<<"invaild salection salect again"; goto decideb;	}
	}	 
		else if(referanceno==3){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[9];
		 cin.ignore();
		  total=(priceofdrinks[2]*quantity[9])+total;
		  cout<<"Anything else in [DRINKS]\n\t\t(Yes)\t\t(Y)\n\t\t(No)\t\t(N)";
		 decidec:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		cout<<"Would you like somthing in [FAST FOOD]or[SWEETS] \n\t\tFor FAST FOOD---\t\t(F)\n\t\tSweets---\t\t\t(S)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='s'||decesion2=='S'){goto sweets;
			 }
			 else if(decesion2=='F'||decesion2=='f'){goto fastfood; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto decesion_of_another_drink;	}
		else{cout<<"invaild salection salect again"; goto decidec;	}
	}	 
	else {cout<<"\n\n Sorry We dont have this Type Referance no \n\n"; goto drinks;
	}
	
		}
		//sweets
else if(cat=='C'||cat=='c'){
sweets:;
		 
	 		
	 		cout<<"\n********** IN SWEETS WE HAVE ********* \n";
	cout<<'\n'<<'\t'<<"Sweets"<<'\t'<<'\t'<<"Unit Price\t"<<"Referance No\n"; 
		cout<<'\t'<<"---------"<<'\t'<<"-----------\t"<<"---------------\n"; 
	
			for(int i=0;i<3;i++){
				cout<<'\n'<<'\t'<<sweets[i]<<'\t'<<'\t'<<priceofsweets[i]<<"\t\t("<<i+1<<")\n";
			}
		cout<<"\n************************************************************************\n";
		decetion_of_another_sweet:;
		cout<<"\n\n\t******* PLEASE MAKE CHOICE ACCORDING TO THEIR REFERANCE  No *********::-";
  	cin>>referanceno;
  	if(referanceno==1){
  	
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[10];
		 cin.ignore();
		  total=(priceofsweets[0]*quantity[10])+total;
		  cout<<"Anything else in [SWEETS]\n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide11:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		cout<<"Would you like somthing in [FAST FOOD]or[drinks] \n\t\tFor FAST FOOD---\t\t(F)\n\t\tDrinks---\t\t\t(D)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='d'||decesion2=='D'){goto drinks;
			 }
			 else if(decesion2=='F'||decesion2=='f'){goto fastfood; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto 	decetion_of_another_sweet;	}
		else{cout<<"invaild salection salect again"; goto decide11;	}
  
    }
  else if(referanceno==2){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[11];
		 cin.ignore();
		  total=(priceofsweets[1]*quantity[11])+total;
		  cout<<"Anything else in [SWEETS]\n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide22:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		cout<<"Would you like somthing in [FAST FOOD]or[drinks] \n\t\tFor FAST FOOD---\t\t(F)\n\t\tDrinks---\t\t\t(D)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='d'||decesion2=='D'){goto drinks;
			 }
			 else if(decesion2=='F'||decesion2=='f'){goto fastfood; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto 	decetion_of_another_sweet;	}
		else{cout<<"invaild salection salect again"; goto decide22;	}
  
    }
  else if(referanceno==3){
		 cout<<"\tQuantity please :-";
		 
		 cin>>quantity[12];
		 cin.ignore();
		  total=(priceofsweets[2]*quantity[12])+total;
		  cout<<"\tAnything else in [SWEETS]\n\t(Yes)\t\t(Y)\n\t(No)\t\t(N)";
		 decide33:;
		 cin>>decesion;
		 cin.ignore();
		 if(decesion=='N'||decesion=='n'){
		cout<<"Would you like somthing in [FAST FOOD]or[drinks] \n\t\tFor FAST FOOD---\t\t(F)\n\t\t\Drinks---\t\t\t(D)\n\t\tWant to EXITE---\t\t(0)\n";	 
			 cin>>decesion2;
			 cin.ignore();
			 if(decesion2=='d'||decesion2=='D'){goto drinks;
			 }
			 else if(decesion2=='F'||decesion2=='f'){goto fastfood; }
			 else{goto bill; }}
		else if(decesion=='Y'||decesion=='y'){goto decetion_of_another_sweet;	}
		else{cout<<"invaild salection salect again"; goto decide33;	}
  } 
	else {cout<<"\n\n Sorry We dont have this Type Referance no \n\n"; goto sweets;
	}
}
else {
		 cout<<"\n <<<<<<<<<< PLEASE MAKE SALECTION ACCORDING TO GIVEN REFERANCE NO>>>>>>>>> \n";
		 goto salectcat;
	}
	

//billarea

bill:;
cout<<"\n____________________________________________________________________________________\n";
cout<<"\n========================================BILL========================================\n";
cout <<"\n________Item Name-----------------Unit Price--------Quantity----SubTotal____________\n";
     if(quantity[0]>0&&quantity[0]<10000&&purch[0]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[0]<<'\t'<<'\t'<<'\t'<<rsofpiz[0]<<'\t'<<'\t'<<quantity[0]<<'\t'<<rsofpiz[0]*quantity[0]<<'\n';
}
     if(quantity[1]>0&&quantity[1]<10000&&purch[1]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[1]<<'\t'<<'\t'<<'\t'<<rsofpiz[1]<<'\t'<<'\t'<<quantity[1]<<'\t'<<rsofpiz[1]*quantity[1]<<'\n';
 }    if(quantity[2]>0&&quantity[2]<100&&purch[2]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[2]<<'\t'<<'\t'<<'\t'<<priceoffastfood[0]<<'\t'<<'\t'<<quantity[2]<<'\t'<<priceoffastfood[0]*quantity[2]<<'\n';
 }
      if(quantity[3]>0&&quantity[3]<10000&&purch[3]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[3]<<'\t'<<'\t'<<'\t'<<'\t'<<priceoffastfood[1]<<'\t'<<'\t'<<quantity[3]<<'\t'<<priceoffastfood[1]*quantity[3]<<'\n';
}
if(quantity[7]>0&&quantity[7]<1000&&purch[4]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[4]<<'\t'<<'\t'<<'\t'<<priceoffastfood[2]<<'\t'<<'\t'<<quantity[7]<<'\t'<<priceoffastfood[2]*quantity[7]<<'\n';
 }
if(quantity[5]>0&&quantity[5]<10000&&purch[5]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[5]<<'\t'<<'\t'<<'\t'<<'\t'<<priceoffastfood[3]<<'\t'<<'\t'<<quantity[5]<<'\t'<<priceoffastfood[3]*quantity[5]<<'\n';
}
	  if(quantity[6]>0&&quantity[6]<10000&&purch[6]!="nill" ){
	  cout<<'\n'<<'\t'<<purch[6]<<'\t'<<'\t'<<'\t'<<priceoffastfood[4]<<'\t'<<'\t'<<quantity[6]<<'\t'<<priceoffastfood[4]*quantity[6]<<'\n';
}
 //drinks
 if(quantity[7]>0&&quantity[7]<10000){
 
 	  cout<<'\n'<<'\t'<<drinks[0]<<'\t'<<'\t'<<'\t'<<'\t'<<priceofdrinks[0]<<'\t'<<'\t'<<quantity[7]<<'\t'<<priceofdrinks[0]*quantity[7]<<'\n';
 
 }
if(quantity[8]>0&&quantity[8]<10000){
 
 	  cout<<'\n'<<'\t'<<drinks[1]<<'\t'<<'\t'<<'\t'<<'\t'<<priceofdrinks[1]<<'\t'<<'\t'<<quantity[8]<<'\t'<<priceofdrinks[1]*quantity[8]<<'\n';
 
 }
 if(quantity[9]>0&&quantity[9]<10000){
 
 	  cout<<'\n'<<'\t'<<drinks[2]<<'\t'<<'\t'<<'\t'<<'\t'<<priceofdrinks[2]<<'\t'<<'\t'<<quantity[9]<<'\t'<<priceofdrinks[2]*quantity[9]<<'\n';
 
 }
 //sweets
 if(quantity[10]>0&&quantity[10]<10000){
 
 	  cout<<'\n'<<'\t'<<sweets[0]<<'\t'<<'\t'<<'\t'<<priceofsweets[0]<<'\t'<<'\t'<<quantity[10]<<'\t'<<priceofsweets[0]*quantity[10]<<'\n';
 
 }
 
 if(quantity[11]>0&&quantity[11]<10000){
 
 	  cout<<'\n'<<'\t'<<sweets[1]<<'\t'<<'\t'<<'\t'<<priceofsweets[1]<<'\t'<<'\t'<<quantity[11]<<'\t'<<priceofsweets[1]*quantity[11]<<'\n';
 
 }
 if(quantity[12]>0&&quantity[12]<10000){
 
 	  cout<<'\n'<<'\t'<<sweets[2]<<'\t'<<'\t'<<'\t'<<priceofsweets[2]<<'\t'<<'\t'<<quantity[12]<<'\t'<<priceofsweets[2]*quantity[12]<<'\n';
 
 }
 
 
 
 
cout<<"\n-------------------------------------------------------------------------------------\n";	  
	  
	 cout<<"\n\t\t YOUR TOTAL PAYEMENT\t= \t["<<total<<"]\t\t\n";
	 if(total>=4000){
	 
	disc(total);
   }
cout<<"\n_________________________________________Thank you__________________________________________\n";	
}
