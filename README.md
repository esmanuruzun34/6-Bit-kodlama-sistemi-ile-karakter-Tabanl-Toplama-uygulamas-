# 6-Bit-kodlama-sistemi-ile-karakter-Tabanl-Toplama-uygulamas-
TEK HANELİ SAYI TOPLAMA PROGRAMI (C)

Bu program kullanıcıdan 0-9 arası iki tek haneli sayı alır, bu sayıların toplamını hesaplar ve sonucu ekrana yazdırır.
Kullanıcı isterse yeni bir işlem yapabilir veya programdan çıkabilir.

-------------------------------------------------------------
Programın Amacı:
- Kullanıcıdan iki tek haneli rakam alır.
- Girilen karakterlerin geçerli olup olmadığını kontrol eder.
- Geçersiz giriş yapılırsa uyarı verir.
- İki rakamın toplamını hesaplar.
- Toplam 9’dan büyükse hata mesajı verir (çünkü sonuç tek haneli olmalıdır).
- Kullanıcı “E” veya “e” girerse yeni işlem yapılır, “H” veya “h” girerse program biter.

-------------------------------------------------------------
Kullanılan Kütüphaneler:
- stdio.h → Girdi ve çıktı işlemleri (printf, scanf) için kullanılır.
- string.h → Karakter dizilerinin uzunluğunu ölçmek (strlen) için kullanılır.

-------------------------------------------------------------
Değişkenler:
- giris1, giris2 → Kullanıcıdan alınan rakam karakterleri.
- devam → Kullanıcının devam etmek isteyip istemediğini tutar.
- num1, num2, toplam → Sayısal işlemler için kullanılır.

-------------------------------------------------------------
Programın Çalışma Mantığı:
Program, kullanıcı “E” veya “e” girene kadar döngü içinde çalışır.

1. Birinci karakter girişi:
   Kullanıcıdan bir rakam alınır. Eğer girilen karakter 0–9 arasında değilse hata mesajı verir ve tekrar ister.

2. İkinci karakter girişi:
   Aynı kontrol ikinci rakam için yapılır.

3. Karakterleri sayıya çevirme:
   Girilen karakterler ‘0’ karakterinden çıkarılarak sayıya dönüştürülür.
   Örneğin: ‘5’ - ‘0’ işlemi sonucu 5 eder.

4. Toplama işlemi:
   İki sayının toplamı hesaplanır. Eğer sonuç 9’dan büyükse hata mesajı verir.
   Sonuç uygunsa ekrana yazdırılır.

5. Devam etme sorusu:
   Program kullanıcıya “Yeni bir işlem yapmak istiyor musunuz?” sorusunu sorar.
   Eğer cevap “E” veya “e” ise döngü yeniden başlar.
   “H” veya “h” girilirse program sonlandırılır.
   Farklı bir karakter girilirse “Geçersiz seçim” mesajı verir ve program kapanır.

-------------------------------------------------------------
Örnek Çalışma:
Birinci karakteri girin (0-9 arasi, tek haneli): 4
İkinci karakteri girin (0-9 arasi, tek haneli): 3
Toplam: 7
Yeni bir islem yapmak istiyor musunuz? (E/e = Evet, H/h = Hayir): e

Birinci karakteri girin (0-9 arasi, tek haneli): 9
İkinci karakteri girin (0-9 arasi, tek haneli): 5
HATA: Toplam 9'dan buyuk! Sonuc tek haneli olmali.
Yeni bir islem yapmak istiyor musunuz? (E/e = Evet, H/h = Hayir): h
Program sonlandirildi.

-------------------------------------------------------------
Programın Derlenmesi ve Çalıştırılması:
1. Kodu “toplam.c” adıyla kaydet.
2. Terminal veya komut satırına şunu yaz:
   gcc toplam.c -o toplam
3. Programı çalıştırmak için:
   ./toplam
