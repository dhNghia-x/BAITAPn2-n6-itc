#include <iostream.h>
#include <conio.h>
#include <windows.h>
#include <iomanip.h>

struct cautruc{
	char ht[30];
	int t;
	char bc[15];
	char cn[20];
	float bl;
	char a[1];
}

cautruc gv[100];
int n=0;
void menu(){
	cout<<"\t\tMenu\n";
	cout<<"\t<1> Them Giao Vien \n";
	cout<<"\t<2> Thong tin Giao Vien \n";
	cout<<"\t<3> Tien luong co ban \n";
	cout<<"\t<4> Giao vien co tien luong co ban duoi 2000";
	cout<<"\t<5> Sap xep Giao vien chuyen nganh";
	cout<<"\t(!) Lua chon -> ";
}

void them(){
	cout<<"\t(-) Giao vien "<<n;fflush(stdin);
	cout<<"\n (+)Ho Ten : ";cin.getline(gv[n].ht,30);
	cout<<" (+)Tuoi : ";cin>>gv[n].t;fflush(stdin);
	cout<<" (+)Bang cap cao nhat : ";cin>>getline(gv[n].bc,15);fflush(stdin);
	cout<<" (+)Chuyen Nganh : ";cin>>getline(gv[n].cn,20);fflush(stdin);
	cout<<" (+)Bac luong : ";cin>>gv[n].bl; fflush(stdin);
	int k=strlen(gv[n].ht);
	for(int i=k-1;i>0;i--)
		 if(gv[n].ht[i]==' ')
		 	gv[n].a[0]=gv[n].ht[i+1];
	n++;
}

void gach(){
	for(int i=0;i<108;i++)
		cout<<"-";
	cout<<"\n";
}

void in(int i){
	cout<<left<<"|"<<setw(30)<<gv[i].ht;
	cout<<left<<"|"<<setw(2)<<gv[i].t;
	cout<<left<<"|"<<setw(15)<<gv[i].bc;
	cout<<left<<"|"<<setw(20)<<gv[i].cn;
	cout<<left<<"|"<<setw(9)<<gv[i].bl; 
} 

void hienthi(){
	gach();
	cout<<left<<"|"<<setw(30)<<"    Ho Ten";
	cout<<left<<"|"<<setw(2)<<"Tuoi";
	cout<<left<<"|"<<setw(15)<<"Bang Cap";
	cout<<left<<"|"<<setw(20)<<"Chuyen Nganh";
	cout<<left<<"|"<<setw(9)<<"Luong co ban";
} 

void sapxepcn(){
	cautruc tam;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp[i].a)
			
			
main(){
	int lc;
	for(;;){
		system("cls");
		menu();	
		cin>>lc;
		switch(lc){
			case 1:them();break;
			case 2:hienthi();break;
			case 3:sapxep();break;
		}
		system("pause");