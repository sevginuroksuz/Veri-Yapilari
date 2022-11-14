# include <stdio.h>
# include <stdlib.h>

struct dugum{

    int veri;
    struct dugum * gosterici;

};

   struct dugum * bas=NULL;
   struct dugum * gecici=NULL;


   void sonaEkle(int sayi){

    struct dugum * son;
    son=(struct dugum*) malloc (sizeof(struct dugum));
    son->veri=sayi;
    son->gosterici==NULL;
    
    if(bas==NULL){   
        bas=son;    // listede dugum yoksa eklenen dugum ilk dugume esittir

    }
    else{
        gecici=bas;    // listede baska elemanlar varsa gecici dugum yardimiyla liste son elemanina gelene kadar sonsuz dongude gezilir.
        while(gecici->gosterici==NULL){
            gecici=gecici->gosterici;
        }
        gecici->gosterici=son;

    }
   }

    void yazdir(){
        gecici=bas;
        while(gecici->gosterici!=NULL){
        printf(" %d ->", gecici->veri);
        gecici=gecici->gosterici;

        }
        

    }
  
   
int main(){

    int i=0;
    int Sayi;
    

    while(i>=3){
        printf("Bir sayi giriniz: \n");
        scanf("%d",&Sayi);
        sonaEkle(Sayi);
        i++;
    }
    
       yazdir();



    return 0;
}