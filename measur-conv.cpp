#include <iostream> //Biblioteca padrão.
#include <windows.h> //Mudar a cor das strings no cmd objetivando a "beleza" da interface do excutavel.

HANDLE  hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //Objetivo de manipulação global de cores de outros atributos de saída do console.


//Protótipos.

//Função responsável pelas instruções de escolha das conversões de medidas de tempo (Minutos, horas, dias e anos).
void medidas_de_tempo();
	void segundo_para_minutos();
	int converterSegundosParaMinutos(int);

	void minutos_para_horas();
	int converterMinutosParaHoras(int);

	void horas_para_dias();
	int converterHorasParaDias(int);

	void dias_para_anos();
	double converterDiasParaAnos(double);

//Função abaixo responsável pelas instruções de escolha das conversões de medidas de massas comuns (kg, g, mg).
void medidas_de_massa();
	void gramas_para_kilogramas();
	double converterGramasParaKilos(double);

	void gramas_para_miligramas();
	double converterGramasParaMiligramas(double);

//Função responsável pelas instruções de escolha de medidas de temperaturas comuns (C°, K, F°).
void medidas_de_temperatura();
	void celcius_para_kelvin();
	double converterCelciusParaKelvin(double);

	void kelvin_para_celcius();
	double converterKelvinsParaCelcius(double);

	void celcius_para_fehrenheit();
	double converterCelciusParaFehrenheit(double);

	void fehrenheit_para_celcius();
	double converterFehrenheitParaCelcius(double);


//Inicio do programa.
int main() {
	system("chcp 1252 > nul"); //Evitar erros de compatibilidade de caracteres especiais no cmd no windows.
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); //"Caracteres verdes e fundo preto no cmd".

	std::cout<< "\n*****Conversor de medidas universal******\n";
	std::cout << "Developed by Rodrigo Liberato. v.1.0 alpha\n\n";
	std::cout << "Quais medidas você deseja coverter?\n";
	std::cout << " 1.Tempo \n 2.Massa \n 3.Temperatura\n\n";
	int comandoParaEscolhaInicial{ 0 };

	std::cout << "prompt: ";
	std::cin >> comandoParaEscolhaInicial;

	switch (comandoParaEscolhaInicial) {
	case 1:
		medidas_de_tempo();
		break;
	case 2:
		medidas_de_massa();
		break;
	case 3:
		medidas_de_temperatura();
		break;
	default:
		std::cout << "Comando inválido.\n";
		break;
	}
}

void medidas_de_tempo() {
	std::cout << "\n** Conversor de tempo **\n";
	std::cout << "Quais medidas de tempo desejas converter?\n";
	std::cout << " 1. Segundo para Minutos \n 2. Minutos para Hora \n 3. Horas para dia \n 4. Dias para ano \n\n";
	int comando_para_escolha{ 0 };

	std::cout << "prompt: ";
	std::cin >> comando_para_escolha;

	switch (comando_para_escolha) {
	case 1:
		segundo_para_minutos();
		break;
	case 2:
		minutos_para_horas();
		break;
	case 3:
		horas_para_dias();
		break;
	case 4:
		dias_para_anos();
		break;
	default:
		std::cout << "Comando inválido.\n";
		break;
	}

}

void segundo_para_minutos() { 
	
	int valor_em_segundos{ 0 };
	std::cout << "\nDigite os segundos: ";
	std::cin >> valor_em_segundos;
	
	std::cout << valor_em_segundos << " segundos para minutos equivale a: " << converterSegundosParaMinutos(valor_em_segundos) << " Minutos\n ";

}

int converterSegundosParaMinutos(int valor_de_segundos) { //Função responsável pelo calculo da conversão de segundos para minutos.

	int resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_segundos / 60;

}

void minutos_para_horas() {

	int valor_em_minutos{ 0 };
	std::cout << "\nDigite os minutos: ";
	std::cin >> valor_em_minutos;

	std::cout << valor_em_minutos << " minutos para horas equivale a: " << converterMinutosParaHoras(valor_em_minutos) << " Horas\n";

}

int converterMinutosParaHoras(int valor_de_minutos) { //Função responsável por calcular a conversão de minutos para horas.

	int resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_minutos / 60;

}

void horas_para_dias() {

	int valor_em_horas{ 0 };
	std::cout << "\nDigite a hora: ";
	std::cin >> valor_em_horas;

	std::cout << valor_em_horas << " horas para dias equivale a: " << converterHorasParaDias(valor_em_horas) << " dias.\n";

}

int converterHorasParaDias(int valor_de_horas) {

	int resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_horas / 24; //Retorno o resultado do calculo correspondente.
}

void dias_para_anos() {

	double valor_em_dias{ 0 };
	std::cout << "\nDigite o valor de dia: ";
	std::cin >> valor_em_dias;

	std::cout << valor_em_dias << " dias para anos equivale aproximadamente a: " << converterDiasParaAnos(valor_em_dias) << " anos.\n";

}

double converterDiasParaAnos(double valor_de_dias) {

	double resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_dias / 365.25; //Retorno o resultado do calculo correspondente 

}

void medidas_de_massa() {
	std::cout << "\n** Conversor de medida de massas **\n";
	std::cout << "Quais medidas mais comuns de massa desejas converter?\n";
	std::cout << "1. Gramas para Kilogramas \n2. Gramas para miligramas \n";
	int comando_para_escolhas{ 0 };

	std::cout << "prompt: ";
	std::cin >> comando_para_escolhas;

	switch (comando_para_escolhas) {
	case 1:
		gramas_para_kilogramas();
		break;
	case 2:
		gramas_para_miligramas();
		break;
	default:
		std::cout << "Comando inválido.\n";
		break;
	}
}

void gramas_para_kilogramas() {

	double valor_em_gramas{ 0 };
	std::cout << "\nDigite o valor em gramas: ";
	std::cin >> valor_em_gramas; 

	std::cout << valor_em_gramas << " gramas para kilogramas equivale aproximadamente a: " << converterGramasParaKilos(valor_em_gramas) << " kilogramas.\n";

}

double converterGramasParaKilos(double valor_de_gramas) {
	double resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_gramas / 1000; 
}

void gramas_para_miligramas() {

	double valor_em_gramas{ 0 };
	std::cout << "\nDigite o valor em gramas novamente: ";
	std::cin >> valor_em_gramas;

	std::cout << valor_em_gramas << "g para miligramas equivale aproximadamente a: " << converterGramasParaMiligramas(valor_em_gramas) << " miligramas.\n";

}

double converterGramasParaMiligramas(double valor_de_gramas) {
	
	double resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_gramas * 1000;
}

void medidas_de_temperatura() {

	std::cout << "\n** Conversor de medidas de temperatura **\n";
	std::cout << "Quais as medidas de temperatura mais comuns você deseja converter?\n";
	std::cout << " 1. Celcius para Kelvin.\n 2. Kelvin para Celcius.\n 3. Celcius para Farhrenheit.\n 4. Farhrenheit para Celcius.\n";
	int comando_para_escolhas{ 0 };

	std::cin >> comando_para_escolhas;

	switch (comando_para_escolhas) {
	case 1:
		celcius_para_kelvin();
		break;
	case 2:
		kelvin_para_celcius();
		break;
	case 3:
		celcius_para_fehrenheit();
		break;
	case 4:
		fehrenheit_para_celcius();
		break;
	default:
		std::cout << "Comando inválido\n";
		break;
	}
}

void celcius_para_kelvin() {

	double valor_em_celcius{ 0 };
	std::cout << "Digite o valor em celcius: ";
	std::cin >> valor_em_celcius;

	std::cout << valor_em_celcius << " celcius para kelvin equivale aproximadamente a: " << converterCelciusParaKelvin(valor_em_celcius) << " Kelvin\n";
}

double converterCelciusParaKelvin(double valor_de_celcius) {
	double resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_celcius + 273.15;
}

void kelvin_para_celcius() {

	double valor_em_kelvins{ 0 };
	std::cout << "Digite o valor em celcius: ";
	std::cin >> valor_em_kelvins;

	std::cout << valor_em_kelvins << " celcius para kelvin equivale aproximadamente a: " << converterKelvinsParaCelcius(valor_em_kelvins)<< " Kelvin\n";

}

double converterKelvinsParaCelcius(double valor_de_kelvins) {

	double resultado_da_conversão{ 0 };
	return resultado_da_conversão = valor_de_kelvins - 273.15; //Para realizar o calculo de conversão de C° para K é totalmente o oposto de K para C°, pois nesse caso apenas é necessário subtrair o valor já existente.
}

void celcius_para_fehrenheit() {
	double valor_em_celcius{ 0 };
	std::cout << "Digite o valor em celcius: ";
	std::cin >> valor_em_celcius;

	std::cout << valor_em_celcius << " celcius para kelvin equivale aproximadamente a: " << converterCelciusParaFehrenheit(valor_em_celcius) << " Kelvin\n";

}

double converterCelciusParaFehrenheit(double valor_de_celcius) {

	double resultado_da_conversão{ 0 };
	return 	resultado_da_conversão = (valor_de_celcius * 9 / 5) + 32;
}

void fehrenheit_para_celcius() {
	
	double valor_em_fehrenheit{ 0 };
	std::cout << "Digite o valor em fehrenheit: ";
	std::cin >> valor_em_fehrenheit;

	std::cout << valor_em_fehrenheit << " celcius para kelvin equivale aproximadamente a: " << converterFehrenheitParaCelcius(valor_em_fehrenheit) << " Kelvin\n";

}
double converterFehrenheitParaCelcius(double valor_de_fehrenheit) {

	double resultado_da_conversão{ 0 };
	return resultado_da_conversão = (valor_de_fehrenheit - 32) / 1.8;
}
