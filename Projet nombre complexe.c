#include<stdlib.h>
#include<stdio.h>
#include<complex.h>
#include<math.h>
#include<stdbool.h>
int main(){
		double _Complex z1,z2,resultat;double a,b;
		int n;bool j=false;
		while(!j){
		printf("Pour la somme (1)\nPour la difference (2)\nPour le multiple (3)\nPour la division (4)\nPour le conjugue (5)\nPour calculer le module (6)");
		printf("\nPour quitter le programme (7)\n");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("\nDonner le 1er nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z1=a+b*I;
				printf("Donner le 2eme nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z2=a+b*I;
				resultat=z1+z2;
				printf("La somme est \nZ1 + Z2 = (%.1f) + (%.1fi) ",creal(resultat),cimag(resultat));break;
			case 2:
				printf("\nDonner le 1er nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z1=a+b*I;
				printf("Donner le 2eme nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z2=a+b*I;
				resultat=z1-z2;
				printf("La difference est \nZ1 - Z2 = (%.2f) + (%.2fi)",creal(resultat),cimag(resultat));break;
			case 3:
				printf("\nDonner le 1er nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z1=a+b*I;
				printf("Donner le 2eme nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z2=a+b*I;
				resultat=z1*z2;
				printf("La multiplication est \nZ1 x Z2 = (%.2f) + (%.2fi) ",creal(resultat),cimag(resultat));break;
			case 4:
				printf("\nDonner le 1er nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z1=a+b*I;
				printf("Donner le 2eme nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z2=a+b*I;
				resultat=z1/z2;
				printf("La division de \nZ1 / Z2 = (%.2f) + (%.2fi) ",creal(resultat),cimag(resultat));break;
			case 5:
				printf("\nDonner le nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z1=a+b*I;
				resultat=conj(z1);
				printf("Le conjugue de Z1 est\n(%.2f) + (%.2fi)",creal(resultat),cimag(resultat));break;
			case 6:
				printf("\nDonner le nombre complexe(reel imaginaire)\n");
				scanf("%lf %lf",&a,&b);z1=a+b*I;
				resultat=sqrt((creal(z1)*creal(z1))+(cimag(z1)*cimag(z1)));
				printf("Le  module de Z1Z2 est\n(%.2f) ",creal(resultat));break;	
			case 7:j=true;break;
			default:break;		
		}
		printf("\n-----------------------------------------\n");
	}	
	return 0;
}
	


