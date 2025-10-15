#include <stdio.h>//giri� ��k�� �lemleri i�in kullan�l�r.
#include <string.h> //fonksiyonlar� kullanmak i�in 

int main() {
    char giris1[10], giris2[10];  // Kullan�c�dan al�nacak say�lar� karakter olarak tutar
    char devam[10];              // Devam cevab� i�in karakter dizisi
    int num1, num2, toplam; // girdigimiz karakterlerin toplam�

    do {
        // Birinci karakter giri�i
        printf("Birinci karakteri girin (0-9 arasi, tek haneli): "); 
        scanf("%s", giris1);

        if (strlen(giris1) != 1 || giris1[0] < '0' || giris1[0] > '9') {
            printf("HATA: Gecersiz giris! Sadece 0-9 arasi tek haneli bir karakter girilmelidir.\n");
            continue;
        }

        // �kinci karakter giri�i
        printf("Ikinci karakteri girin (0-9 arasi, tek haneli): ");
        scanf("%s", giris2);

        if (strlen(giris2) != 1 || giris2[0] < '0' || giris2[0] > '9') {
            printf("HATA: Gecersiz giris! Sadece 0-9 arasi tek haneli bir karakter girilmelidir.\n");
           continue;
        }

        // Rakam karakterlerini say�ya �evir
        num1 = giris1[0] - '0';
        num2 = giris2[0] - '0';
        toplam = num1 + num2;

        if (toplam > 9) {
            printf("HATA: Toplam 9'dan buyuk! Sonuc tek haneli olmali.\n");
        } else {
            printf("Toplam: %d\n", toplam);
        }

        // Devam etmek isteyip istemedi�ini sor
        printf("Yeni bir islem yapmak istiyor musunuz? (E/e = Evet, H/h = Hayir): ");
        scanf("%s", devam);

        // Devam cevab�n� kontrol et
        if (strlen(devam) != 1 || 
           (devam[0] != 'E' && devam[0] != 'e' && devam[0] != 'H' && devam[0] != 'h')) {
            printf("GECERSIZ SECIM! Program sonlandiriliyor.\n");
            break;
        }

    } while (devam[0] == 'E' || devam[0] == 'e');

    printf("Program sonlandirildi.\n");
    return 0;
}
