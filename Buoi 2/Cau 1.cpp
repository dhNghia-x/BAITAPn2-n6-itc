#include <iostream.h>
#include <conio.h>
#include <windows.h>
#include <iomanip.h>

struct ngaysinh{
    int ng;
	int th;
	int na; 
};
struct cautruc{
    char ht[30];
    char t[1];
    ngaysinh ns;
    char cmt[10];
    char hk[50];
};
cautruc kh[99];
int n=0;
void menu(){
	cout<<"\t\tMenu\n";
	cout<<"\t<1> Them Khach Hang \n";
	cout<<"\t<2> Thong tin khach hang\n";
	cout<<"\t<3> Sap xep  A -> Z \n";
	cout<<"\t<4> Khach hang sinh vao thang 12\n\n";
	cout<<"\t(!) Lua chon -> ";
}
void them(){
	cout<<"\t(-) Khach hang "<<n;fflush(stdin);
	cout<<"\n (+)Ho Ten : ";cin.getline(kh[n].ht,30);
	cout<<" (+)Ngay sinh : ";cin>>kh[n].ns.ng;
	cout<<" (+)Thang sinh : ";cin>>kh[n].ns.th;
	cout<<" (+)Nam sinh : ";cin>>kh[n].ns.na;fflush(stdin);
	cout<<" (+)So cmt : ";cin.getline(kh[n].cmt,10);fflush(stdin);
	cout<<" (+)Ho khau : ";cin.getline(kh[n].hk,50);
	int k=strlen(kh[n].ht);
	for(int i=k-1;i>0;i--)
		if(kh[n].ht[i]==' ')
			kh[n].t[0]=kh[n].ht[i+1];
	n++;
}
void gach(){
	for(int i=0;i<108;i++)
		cout<<"-";
	cout<<"\n";
}
void in(int i){
	cout<<left<<"|"<<setw(30)<<kh[i].ht;
	cout<<left<<"|"<<setw(2)<<kh[i].ns.ng<<"/"<<setw(2)<<kh[i].ns.th<<"/"<<setw(5)<<kh[i].ns.na;
	cout<<left<<"|"<<setw(12)<<kh[i].cmt;
	cout<<left<<"|"<<setw(50)<<kh[i].hk<<"|\n";
}
void hienthi(){
	gach();
		cout<<left<<"|"<<setw(30)<<"    Ho Ten";
		cout<<left<<"|"<<setw(11)<<" Ngay sinh";
		cout<<left<<"|"<<setw(12)<<"   So cmt";
		cout<<left<<"|"<<setw(50)<<"               Ho khau"<<"|\n";
	gach();
	for(int i=0;i<n;i++)
		in(i);
	gach();	
}
void sapxep(){
	cautruc tam;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(strcmp(kh[i].t,kh[j].t)>0){
				tam=kh[i];
				kh[i]=kh[j];
				kh[j]=tam;
			}
	hienthi();		
}
void thang12(){
	for(int i=0;i<n;i++)
		if(kh[i].ns.th==12)
			in(i);
}
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
			case 4:thang12();break;
		}
		system("pause");
	}
}