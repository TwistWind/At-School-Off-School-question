//���e:�O�������W�w�P�ǥ����b 7:30 �H�e��զ��۲ߡA�̫�@��ҫh�b 17:00 �U�ҡC���A�{�b���ɶ��A�ЧP�_�{�b�O�W�Ǯɶ��Ω�Ǯɶ��C
//��J�u���@��A�䤤�t����ӥѪŮ�j�}����� hh �� mm�Ahh:mm �h�N��{�b���ɶ� (24�p�ɨ�)�C 
//�p�G�{�b�O�W�Ǯɶ��A�п�X�uAt School�v�A�_�h�п�X�uOff School�v

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
