#include <stdio.h>
#include <string.h>
#define MAX_KITAP 100
struct Kitap {
    char ad[100];
    float fiyat;
    char yazar[100];
    char konu[100];
    int sayfa;
    char yayinevi[100];
};
struct Kitap kitaplar[MAX_KITAP];
void kitaplariListele(int n) {
    printf("\nKitap Listesi:\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. Kitap Bilgileri:\n", i + 1);
        printf("Ad: %s\n", kitaplar[i].ad);
        printf("Fiyat: %.2f\n", kitaplar[i].fiyat);
        printf("Yazar: %s\n", kitaplar[i].yazar);
        printf("Konu: %s\n", kitaplar[i].konu);
        printf("Sayfa: %d\n", kitaplar[i].sayfa);
        printf("Yayınevi: %s\n", kitaplar[i].yayinevi);
        printf("------------------------------\n");
    }
}
void kitapAra(int n) {
    char arananAd[100];
    printf("Aranacak kitap adini girin: ");
    scanf("%s", arananAd);

    int bulunan = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(kitaplar[i].ad, arananAd) == 0) {
            // Kitap bulundu, bilgileri ekrana yazdır
            printf("\nKitap Bilgileri:\n");
            printf("Ad: %s\n", kitaplar[i].ad);
            printf("Fiyat: %.2f\n", kitaplar[i].fiyat);
            printf("Yazar: %s\n", kitaplar[i].yazar);
            printf("Konu: %s\n", kitaplar[i].konu);
            printf("Sayfa: %d\n", kitaplar[i].sayfa);
            printf("Yayınevi: %s\n", kitaplar[i].yayinevi);
            printf("------------------------------\n");
            bulunan = 1;
            break;
        }
    }

    if (!bulunan) {
        printf("Kitap bulunamadi.\n");
    }
}
int main(int argc, char const *argv[])
{
    int n;
printf("Kitap sayisi giriniz:  ");
    scanf("%d", &n);
        for (int i = 0; i < n; i++) {
        printf("\n%d. Kitap Bilgileri:\n", i + 1);
        printf("Ad: ");
        scanf("%s", kitaplar[i].ad);
        getchar();
        printf("Fiyat: ");
        scanf("%f", &kitaplar[i].fiyat);
        getchar();
        printf("Yazar: ");
        scanf("%s", kitaplar[i].yazar);
        getchar();
        printf("Konu: ");
        scanf("%s", kitaplar[i].konu);
        getchar();
        printf("Sayfa: ");
        scanf("%d", &kitaplar[i].sayfa);
        getchar();
        printf("Yayinevi: ");
        scanf("%s", kitaplar[i].yayinevi);
    }
    int secim;
    do {
        // Menüyü göster
        printf("\nMenu:\n");
        printf("1. Kitap ara\n");
        printf("2. Kitap listele\n");
        printf("3. Çıkış\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                kitapAra(n);
                break;   
            case 2:
            kitaplariListele(n);
            case 3:
                printf("Programdan cikiliyor.\n");
                break;
            default:
                printf("Geçersiz secim. Tekrar deneyin.\n");
        }
    } while (secim != 3);
    return 0;
}
