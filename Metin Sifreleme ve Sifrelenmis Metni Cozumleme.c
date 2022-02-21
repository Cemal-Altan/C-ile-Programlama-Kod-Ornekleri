#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your o wn getch, system("pause") or input loop */
void sifreleme(void);
void cozumleme(void);
int main(void) {
	
	printf("metin sifreleme");
	printf("\n\n");
	int secim;
	printf("\n yapilacak islemi seçiniz (sifreleme için 1 cozumleme için 2 girirniz  ) ");scanf("%d",&secim);
	
	if(secim==1)
	{
	sifreleme();
	}
	else
	cozumleme();
	return 0;
}
void sifreleme(void){
	char ifade[30];int uzunluk;
	int i,j=0,k=0,t;
	char harfler[30]=  {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','y','z','_'};
	char lokasyon1[30]=       {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','/'};
	char lokasyon2[30]=       {'9','z','8','y','7','x','6','w','5','v','4','u','3','t','2','s','1','r','o','q','p','0','a','b','/'};
//	printf("\n sifrelenecek metnin uzunlugunu giriniz ");scanf("%d",&uzunluk);altenatif
	printf("\nsifrelenecek metni giriniz bosluklar icin _ kullanin \n ");scanf("%s",ifade);
    uzunluk=strlen(ifade);
	
//	for(t=0;t<uzunluk;t++){ //alternatif yol
//		printf("\nsifrelenecek metnin %d. elemanini giriniz ",t);scanf("%s",&ifade[t]);
//	}
	
	for(i=0;i<uzunluk;i++)
	{
		for(j=0;j<30;j++){
			if(ifade[i]==harfler[j])
			{
				if((i+1)%2==0)
				printf("%c",lokasyon2[j]);
				else
				printf("%c",lokasyon1[j]);
			}
		}
	
	}
	return 0;
}

void cozumleme(void){
	char ifade[30];int uzunluk;
	int i,j=0,k=0,t;
	char harfler[30]=  {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','y','z','_'};
	char lokasyon1[30]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','/'};
	char lokasyon2[30]={'9','z','8','y','7','x','6','w','5','v','4','u','3','t','2','s','1','r','o','q','p','0','a','b','/'};
	
	printf("\ncozumlenecek  metni giriniz bosluklar icin _ kullanin \n ");scanf("%s",ifade);
    uzunluk=strlen(ifade);
    
    for(i=0;i<uzunluk;i++){
    	
    	if((i+1)%2==0){
    		for(j=0;j<30;j++){
    			if(ifade[i]==lokasyon2[j])
    			printf("%c",harfler[j]);
			}
		}
		else
		for(j=0;j<30;j++){
			if(ifade[i]==lokasyon1[j])
			printf("%c",harfler[j]);
		}
	}
	return 0;
}
