/* 
6. Considerando que para um consórcio, sabe-se o número total de prestações, a quantidade
de prestações pagas e o valor atual da prestação, escreva um algoritmo que determine o
total pago pelo consorciado e o saldo devedor.
*/
#include <iostream>

using namespace std;

int main()
{
	//v
	int parcelasPagas, parcelasTotal, parcelasRest;
	float valorParcela, saldoDeve, valorPg;
	
	//e
	cout << "Informe o numero total de parcelas: ";
	cin >> parcelasTotal;
	cout << "Quantas foram pagas? ";
	cin >> parcelasPagas;
	cout << "Informe o valor da parcela: ";
	cin >> valorParcela;
	
	//p
	parcelasRest = parcelasTotal - parcelasPagas;
		
	saldoDeve = parcelasRest * valorParcela;
	
	valorPg = parcelasPagas * valorParcela;
	
	
	
	//s
	cout << "Valor total pago: R$" << valorPg << "\nSaldo devedor: R$" << saldoDeve << ".";
}
