# ponteiros
#include <stdio.h>

void main() {
    int numero = 100;
    int *p = &numero;
    
    printf("endereco de numero = %p\n", (void*)&numero);
    printf("endereco de p = %p\n", (void*)p);
    printf("valor de numero = %d\n", numero);
    printf("valor apontado por p = %d\n", *p);
}

2 codigo
#include <stdio.h>

void main() 
{
	int x;
	int *p1, *p2;
	
	p1= &x;
	p2 = p1;
	
	printf("endereço de x = %p\n", p2);
	printf("endereço de x = %p\n", p1);
	printf("endereço de x = %p\n", &x);
}

3 codigo

#include <stdio.h>

void main() 
{
	int x;
	int *p;
	
	p= &x;
	p++;
	printf("Int ocupa %d bytes \n", sizeof(int));
	printf("endereço de x: %d\n", &x);
	printf("endereco que p aponta agora: %d\n", p);
	
}

4 codigo 
comparação de ponteiros
#include <stdio.h>

void main() 
{
	int x;
	int*p1, *p2;
	
	p1=&x;
	p2=p1;
	printf("%p %p %d", p1, p2, p1=p2);
		
}

5 codigo 
chamada por valor
#include <stdio.h>

void troca (int x, int y); 

int main()
{
	int t = 10;
	int h = 23;
	
	troca(t, h);
	
	printf("t = %d | h = %d", t, h);
	
	return 0;
		
}
void troca(int x, int y)
{
	int aux = x; 
	x = y;
	y = aux;
	
}

6 codigo 
chamada por referencia

#include <stdio.h>

void troca (int *x, int *y); 

int main()
{
	int t = 10;
	int h = 23;
	
	troca(&t, &h);
	
	printf("t = %d | h = %d", t, h);
	
	return 0;
		
}
void troca(int *x, int *y)
{
	int aux = *x; 
	*x = *y;
	*y = aux;
	
}  

7 codigo 
aritimetrica de ponteiros 
#include<stdio.h>

//aritmetica de ponteira
void main()
{
	int t;
	for(t=0; *(p+t); t++)
		putchar(*(p+t));
		
}
void main()
{
	char nome[] = "arthur";
	
}

8 codigo #include<stdio.h>

void main()
{
	char *P, arr[] = "exemplo";
	p = &arr;
	
	printf("%c %c\n", arr[3], *(p +3));
	
}








