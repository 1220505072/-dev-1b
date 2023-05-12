#include <stdio.h>
#include <stdlib.h>


//      b)Dizide aranacak olan elemaný kullanýcýdan isteyiniz



int linear_search(int bllk[], int boyutt, int favoriEleman);


int main() {
    int h, boyutt, favoriEleman;

    printf("Olusturmak istediginiz dizinin boyutunu giriniz: ");    
    scanf("%d", &boyutt);                //kullanicidan diznin kac boyutlu oldugunu al

    int *bllk = (int*) malloc(boyutt * sizeof(int)); //bellekte dizi olustur

    for (h=0; h<boyutt; h++) {
        printf("%d. elemani giriniz: ", h+1);
        scanf("%d", &bllk[h]);      // dizi elemanlarýný ekrana yazdýr 
    }


    printf("Olusturdugunuz dizide aranacak elemani giriniz: ");
    scanf("%d", &favoriEleman);                 // Kullanicidan aramak istedigi elemanini iste

    return 0;
}
