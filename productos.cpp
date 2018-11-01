#include<stdio.h>

struct producto {
	int codigo;
	char descripcion[41];
	float precio;
};

struct producto cargar()
{
	struct producto pro;
	printf("Ingrese el codigo de producto:");
	scanf("%i",&pro.codigo);
	fflush(stdin);
	printf("Ingrese la descripcion:");
	gets(pro.descripcion);
	printf("Ingrese el precio:");
	scanf("%f",&pro.precio);
	return pro;
}

void imprimir(struct producto pro)
{
	printf("Datos del producto.\n");
	printf("Codigo del producto:%i\n",pro.codigo);
	printf("Descripcion:%s\n",pro.descripcion);
	printf("precio:%0.2f\n",pro.precio);
}

int main()
{
	struct producto pro1,pro2,pro3;
	pro1=cargar();
	pro2=cargar();
	pro3=cargar();	
	imprimir(pro1);
	imprimir(pro2);
	imprimir(pro3);
}
