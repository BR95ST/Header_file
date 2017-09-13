#include <math.h>

float area_quadrado(float l){
	return l * l;
}

float area_retangulo(float b, float h){
	return b * h;
}

float area_losango(float d1, float d2){
	return (d1 * d2) / 2;
}

float area_trapezio(float b1, float b2, float h){
	return ((b1 + b2) * h) / 2;
}

float area_triangulo(float b, float h){
	return (b * h) / 2;
}

float area_trianguloEqui(float l){
	return l * l * sqrt(3 / 4);
}

float area_circulo(float r){
	return (r * r) * M_PI;
}

float area_coroaCir(float r1, float r2){//r1 = R, r2 = r
	return M_PI * (r1 * r2);
}

float area_cilindro(float r, float h){
	return (2 * area_circulo(r)) + (2 * M_PI * r * h);
}
