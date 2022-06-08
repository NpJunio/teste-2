#include<iostream>
using namespace std;
#include<cmath>
main()
{
	setlocale(LC_ALL,"");
	int ano;//variavel do ano
	cout<<"\n\nEntre com o ano desejado ";//entre com o ano
		cin>>ano;//receba o ano
	if (( ano >= 1752)&&(((ano%4==0)&&(ano%100>0)) || (ano%400==0 )))//utilize a regra para saber se o ano é bissesto
		cout<<"\n\nO ano "<<ano<<" é bissexto\n\n";
	else
		cout<<"\n\nO ano "<<ano<<" não é bissexto\n\n";
}
