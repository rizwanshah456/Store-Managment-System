#include<iostream>
 using namespace std;
 int main()
 {
 	int n=100,y,w=0,u[100];
 	int tot;
 	int n1=4;
 	int qua[n],priz[n];
 	string s[n] = {"chocolets","biscuits","colddrink","soaps"};
 	string sn[n];
  	for(y=0;y<n1;y++)
  	{
	cout<<"enter the quantity of  "+s[y]<<"\n";
	cin>>qua[y];
	cout<<"enter prize of 1"+s[y]<<"\n";
	cin>>priz[y];
}
 cout<<"enter 1 to get full data about items"<<endl;
   cout<<"enter 2 to delete items"<<endl;
   cout<<"enter 3 to add items"<<endl;
   cout<<"enter 4 to replace item"<<endl;
   cout<<"enter 5 to change quantity or prize or both of items"<<endl;
   cout<<"enter 6 to bill for customer"<<endl;
   cout<<"enter 7 to end program"<<endl;
cout<<"====================================================================================================================="<<endl;


 	int x;
 	int z;
 	for(x=1;x>0;x++)
 	{
 		int g,h;
 		for(h=0;h<n1;h++)
 		{
 			g=s[h].size();
 			u[h]=g;
 			if(g>w)
 			{
 				w=g;
			 }
		 }
 		cin>>z;
 	switch(z)
 	{
 		case 1:
 			{
 			
	int i;
	cout<<"ITEM NAME";//              quantity\n";
	if(w>9)
	{ int e;
		cout<<"       ";
		for(e=0;e<(w-9);e++)
		{
			cout<<" ";
		}
		cout<<"quantity   PRIZE\n";
	}
	else
	{
		cout<<"      quantity   PRIZE\n";
	}
	for(i=0;i<n1;i++)
	{
		if(qua[i]!=0)
		{ int h,o;
			cout<<s[i]<<"          ";//<<"           "<<qua[i]<<endl;
		     h=w-u[i];
		     for(o=0;o<h;o++)
		     {
		     	cout<<" ";
			 }
			 cout<<qua[i]<<"    "<<priz[i]<<endl;		 
	}

			 }break;
	 }
	 case 2:
	 	{
	 		 int i;
	cout<<"enter item to be deleted"<<endl;
	string del;
	cin>>del;
	for(i=0;i<n1;i++)
	{ 
	if(s[i]==del)
	{ 
	  int j;
	  for(j=i;j<n-1;j++)
	  { qua[j]=qua[j+1];
	  priz[j]=priz[j+1];
	  s[j]=s[j+1];
	  }
	  (s[n-1]).clear();
	  n--;
	  n1--;
	  break;
	}
	else
	{ 
	continue;
	}
	}
	break;
		 }
		 case 3:
		 	{
		 		

  cout<<"enter item name to add"<<endl;
  n1=n1+1;//add malloc and calloc
  cin>>s[n1-1];
  cout<<"enter quantity of item"<<endl;
  cin>>qua[n1-1];
  cout<<"enter PRIZE of item"<<endl;
  cin>>priz[n1-1];
  break;
			 }
	case 4:
	{
		int i;
	
	string repl,repl2;
	cout<<"enter the item you want to replace"<<endl;
	cin>>repl;
	cout<<"enter name of item which you want to store"<<endl;
	cin>>repl2;
	for(i=0;i<n1;i++)
	{ 
	if(s[i]==repl)
	{ 
	s[i]=repl2;
	break;
	}
	else
	{
		continue;
	}
	}break;
			 }
			 case 5:
		{
			 
		
	int i;
	string item,ch;
	cout<<"enter name of item for which you want to change quantity or prize"<<endl;
	cin>>item;
	cout<<"enter your choice to change quantity =enter qua or for prize= enter priz  or for both enter both"<<endl;
      cin>>ch;
	for(i=0;i<n1;i++)
	{
		if(s[i]==item)
		{
			if(ch=="qua"||ch=="both")
			{
			cout<<"enter quantity of"+s[i]<<endl;
			cin>>qua[i];
	}
	if(ch=="priz"||ch=="both")
	{
		
			cout<<"enter PRIZE of"+s[i]<<endl;
			cin>>priz[i];
	}
		break;
		}
	
		else
		{
			continue;
		}
	}
	break;
}
case 6:
      {
		int in;
		for(in=1;in>0;in++)
		{int ba,cost[100],qt[100],numb;
		
		string bill;
		if(in==1)
		{
			cout<<"enter 1 to buy above item"<<endl;
		}
		else
		cout<<"enter 1 if customer want to buy one more item /n enter 2 to make total bill"<<endl;
		int z1;
		cin>>z1;
		if(z1==1)
		{
			// calculation of quantity
			
			cout<<"enter name of item coustemer want to purchase"<<endl;
			cin>>bill;
			sn[in-1]=bill;
			for(ba=0;ba<n1;ba++)
			{
				if(bill==s[ba])
				{
					numb=numb+1;
					cout<<"enter number of "+s[ba]<<" taken by costemer"<<endl;
					cin>>qt[in-1]; 
					cost[in-1]=qt[in-1]*priz[ba];
					qua[ba]=qua[ba]-qt[in-1];
					tot=tot+cost[in-1];
				
				}
				else
				{
				continue;
				}
					
				
			}
		
		}
		else
		if(z1==2)
		{
			
			cout<<"ITEM NAME  QUANTITY  PRIZE"<<endl;//total bill
			for(ba=0;ba<numb;ba++)
			{
				
			cout<<sn[ba]<<"  "<<qt[ba]<<" "<<cost[ba]<<endl;		
			}
			cout<<"total bill is"<<(tot+1);
			break;
		}
		else
		{
			cout<<"enter only 1 or 2"<<endl;
			continue;
		}
			
		}
	break;
	}
}
 
 if(z==7)
 { cout<<"#################**************THANK YOU*************##########";
 	break;
 }
 else
 {
 	
 	cout<<"========================================================================================================================"<<endl;
 	 cout<<"enter 1 to get full data about items"<<endl;
   cout<<"enter 2 to delete items"<<endl;
   cout<<"enter 3 to add items"<<endl;
   cout<<"enter 4 to replace item"<<endl;
   cout<<"enter 5 to change quantity or prize or both of items"<<endl;
   cout<<"enter 6 to bill for customer"<<endl;
   cout<<"enter 7 to end program"<<endl;
   cout<<"========================================================================================================================"<<endl;
continue;
 }


}
}
