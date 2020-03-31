#include<stdio.h>
#include<math.h>

void cuadrado(int x, int b);
int Cuadrado(int x, int b);
void variable(int *p_x, int *p_b);
void invertir(int x, int b);
void ordenar(int x, int b);

int main(){
	int x=0, punto =0,r,b;
	printf("ingrese un numero: ");
	scanf("%d",&x);
	
	
	while(punto!=8){
		printf("Ingrese el punto a evaluar. Para salir precione 8: ");
		scanf("%d",&punto);
		
		switch(punto){
			case 1:
				r =Cuadrado(x,b);
				printf("el resultado es %d: \n",r);
				break;
			case 2:
				cuadrado(x,b);
				break;
			case 3:
				printf("ingrese otro numero: ");
				scanf("%d",&b);
				variable(&x,&b);
			case 4:
				printf("ingrese otro numero: ");
				scanf("%d",&b);
				printf("antes priero= %d y segundo= %d\n",x,b);
				invertir(x,b);
			case 5:
				printf("ingrese otro numero: ");
				scanf("%d",&b);
			 	ordenar(x,b);
			case 6:
				//no entendi el caso este ¿se supone que me pide lo mismo que en el anterior?			
			default:
				break;
		}
	}
	return 0;
}

int Cuadrado(int x, int b){
	x = pow(x,2);
	return x;
}

void cuadrado(int x, int b){
	x = pow(x,b);
	printf("el resultado es %d: \n",x);
}

void variable(int *p_x, int *p_b){
	printf("la direccion es %d: \n el contenido es: %d\n", p_x,*p_x);
	printf("la direccion es %d: \n el contenido es: %d\n", p_b,*p_b);

}

void invertir(int x, int b){
	int temp;
	temp = x;
	x = b;
	b = temp;
	printf("ahora priero= %d y segundo= %d\n",x,b);
}

void ordenar(int x, int b){
	if(x<b){
		printf("menor: %d \nmayor: %d\n",x,b);
	}
	else{
		printf("menor: %d \nmayor: %d\n",b,x);
	}
}



