#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <string>
#include <sstream>
using namespace std;

string version = "v0.5.1"; 
int findcommand(string com)
{
	//cut_string
	string str1,str2,str3;
	istringstream is(com);
	is >>str1>>str2>>str3;
	//end:cut_string

	if (str1=="set"){
		cout<<"ִ�У���"<<str2<<" "<<str3<<endl; 
		cout<<"�����"; 
		string set_com="set /a"+str2+str3;
		system(set_com.c_str());
		cout << endl;
	}
	else if (str1 == "print"){
		string print_com="echo "+str2+str3;
		system(print_com.c_str());
	}
	else if (com=="help" || com=="?"){
		cout <<"help            �鿴������\n";
		cout <<"info            �鿴MathsBox��Ȩ���汾��Ϣ��\n" ;
		cout <<"system          ִ��ϵͳָ�\n";
		cout <<"clear           ��տ���̨��\n"; 
		cout <<"update          ��ȡ���°档\n" ; 
		cout <<"<maths_formula> ��������\n" ;
		cout <<"restart         ������������̨��\n";
		cout <<"set <value>=<namber/text> ������ֵ�� \n";
		cout <<"print <text>    ������֡�\n";
		cout <<"print %<value>% �������\n"; 
	}
	else if (com=="info" || com=="!"){
		cout <<"��ǰ�汾��MathsBox����̨���İ�"<<version;
		cout <<"����CC BY-NC3.0Э�鿪Դ��\n";
		cout <<"�ļ��ṹ��\n";
		cout <<"\\MathsBox\n";
		cout <<"|\n";
		cout <<"|_ main.cpp \n";
		cout <<"|_ cppbridge.h \n";
		cout <<"|_ reader.cpp \n"; 
		cout <<"|_ \\info\n" ; 
		cout <<"   |\n";
		cout <<"   |_ info.txt\n\n" ;
		cout <<"���θ��£�\n" ;
		cout <<"1.���±�����ֵ��\n";
		cout <<"2.�������ģ�顣"<<endl; 
	}
	else if (com=="system"){
		string syscom;
		cout << "Enter system command: ";
		getline(cin, syscom);
		system(syscom.c_str());
	}
	else if(com=="clear"){
		system("cls") ;
	} 
	else if(com=="update")
	{
		system("start http://gvkhdx3365.us06.horainwebs.top/cdn/box.zip");
		cout <<"����ҳ�ɹ���\n"; 
		cout <<"���ֶ��滻�汾�����θ��£�" ;
		cout <<"1.���±�����ֵ��\n";
		cout <<"2.�������ģ�顣"<<endl; 
	} 
	else if
	(
		com.substr(0,1)=="1" ||
		com.substr(0,1)=="2" ||
		com.substr(0,1)=="3" ||
		com.substr(0,1)=="4" ||
		com.substr(0,1)=="5" ||
		com.substr(0,1)=="6" ||
		com.substr(0,1)=="7" ||
		com.substr(0,1)=="8" ||
		com.substr(0,1)=="9" ||
		com.substr(0,1)=="0" 
	) 
	{
		string c_maths = "SET /A"+com ;
		system(c_maths.c_str());
	}
	else if(com=="restart"){
		system("start BoxConsole.exe");
		return 1;
	}
	else{
		cout << "Command \""<<com<<"\" not find! Do you want to enter system commands? Please enter \"system\" first." <<endl; 
	}
	return 0;
} 
int into_gettime( void ) 
{ 
	SYSTEMTIME sys; 
	GetLocalTime( &sys ); 
	printf( "Login at %4d/%02d/%02d %02d:%02d:%02d.%03d Day:%1d\n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds,sys.wDayOfWeek); 
	return 0;
}

int main(int argc, char** argv) {
	cout<<"��������MathsBox����̨����"; 
	system("color f0");
	system("mode con cols=90 lines=30"); 
	system("title MathsBox����̨");
	system("chcp 936"); 
	system("cls");
	into_gettime();
	cout <<"MathsBox "<<version<<"(Console) All right received \n"; 
	cout <<"Enter \"help\" or \"info\" for more information.\n";
	string command; 
	cout << endl;
	while(1){
		cout <<">>> ";
		getline(cin, command);
		int status = 
			findcommand(command);
		cout << endl;
		if (status==1){
			return 0;
		}
	}
		system("pause");
}
