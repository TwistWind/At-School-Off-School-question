//內容:板橋高中規定同學必須在 7:30 以前到校早自習，最後一堂課則在 17:00 下課。給你現在的時間，請判斷現在是上學時間或放學時間。
//輸入只有一行，其中含有兩個由空格隔開的整數 hh 及 mm，hh:mm 則代表現在的時間 (24小時制)。 
//如果現在是上學時間，請輸出「At School」，否則請輸出「Off School」

#include <cstdlib>
#include <iostream>

using namespace std ;

int main(){
	int hr ;
	int min ;
	cout<<"Please enter the time:" ;
    cin>>hr ;
    cin>>min ;
	if(hr <7 && min <30){
		cout<<"Off School"<<endl  ;
	}
	if(hr >17){
		cout<<"Off School"<<endl  ;
	}		
	else{
		cout<<"At School"<<endl ;
	}
	
} 
