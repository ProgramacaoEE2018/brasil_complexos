#include "Complexo.h"
#include <stdio.h>

//Neste código, juntei o métodos da minha classe Complexo com o programa de teste do aluno Gentil

Complexo::Complexo(float r, float i){
    real = r;
    im = i;
}

float Complexo::Modulo(){
    return sqrt((real*real+im*im));
}

Complexo Complexo::Conjugado(){
    return Complexo(real, -im);
}

Complexo Complexo::operator+(Complexo z2){
    return Complexo(real+z2.real, im+z2.im);
}

Complexo Complexo::operator-(Complexo z2){
    return Complexo(real-z2.real, im-z2.im);
}

Complexo Complexo::operator*(Complexo z2){
    return Complexo(real*z2.real-im*z2.im, real*z2.im+im*z2.real);
}

Complexo Complexo::operator/(Complexo z2){
    return Complexo((real*z2.real+im*z2.im)/pow(z2.Modulo(), 2), (im*z2.real-real*z2.im)/pow(z2.Modulo(), 2));
}

int main() {
	Complexo z1(3, 4);
	Complexo z2(3, 4);
	Complexo conjugado(3, -4);
	Complexo divisao(1, 0);
	Complexo produto(-7, 24);
	Complexo soma(6, 8);
	float modulo;

	//Teste Modulo
	modulo = z1.Modulo();
	if (modulo == 5) {
		printf("Modulo OK\n");

		//Teste Diferenca
		modulo = (z1 - z2).Modulo();
			if (modulo == 0) {
				printf("Diferenca OK\n");
			}
			else {
				printf("Falha Difernca\n");
			}

		//Teste Divisao
		modulo = ((z1 / z2) - divisao).Modulo();
		if (modulo == 0) {
			printf("Divisao OK\n");
		}
		else {
			printf("Falha Divisao\n");
		}

		//Teste Conjugado
		modulo = (z1.Conjugado() - conjugado).Modulo();
		if (modulo == 0) {
			printf("Conjugado OK\n");
		}
		else {
			printf("Falha Conjugado\n");
		}

		//Teste Produto
		modulo = ((z1 * z2) - produto).Modulo();
		if (modulo == 0) {
			printf("produto OK\n");
		}
		else {
			printf("Falha produto\n");
		}

		//Teste Soma
		modulo = ((z1 + z2) - soma).Modulo();
		if (modulo == 0) {
			printf("Soma OK\n");
		}
		else {
			printf("Falha Soma\n");
		}
	}
	else {
		printf("Falha Modulo\n");
	}
	return 0;
}
