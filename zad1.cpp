#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  char unosUblagajnu = '0'; //posto je unos sa slovima trebamo char tip podatka, char predstavlja samo jedan simbol (slovo, broj...)
  int prodanoUlaznica = 0, ulazniceZaOdrasle = 0, ulazniceZaDjecu = 0, obiteljskaTroclana = 0, obiteljskaCetveroclana = 0, ulaznicaZaLjuljacku = 0; //trebamo brojati koliko je prodano ulaznica za sto nam treba cjelobrojni podatak 
  float dnevniUtrzak;// dnevni utrzak ce biti broj s decimalama pa nam treba tip podatka koji radi s decimalnim brojevima, to su float i double (double je isto sto i float, ali moze preciznije odrediti vrijednost, to nije trenutno bitno)



  //dok god ne unesemo simbol 'K' vrtit ce se kod unutar while petlje ispod. U svakoj iteraciji/prolazu koda unutar petlje cemo provjeravati sto je uneseno i ako je unos zadovoljio neku od if petlji to cemo zabiljeziti kao prodanu ulaznicu 
  while(unosUblagajnu != 'K'){
    cin >> unosUblagajnu;

    if(unosUblagajnu == 'O'){
      ulazniceZaOdrasle++;
    }
    if(unosUblagajnu == 'D'){
      ulazniceZaDjecu++;
    }
    if(unosUblagajnu == 'T'){
      obiteljskaTroclana++;
    }
    if(unosUblagajnu == 'C'){
      obiteljskaCetveroclana++;
    }
    if(unosUblagajnu == 'L'){
      ulaznicaZaLjuljacku++;
    }

    //ovdje biljezimo koliko je ulaznica ukupno prodano. Uvijet gleda kada je unosUblagajnu razlicit (!=) od simbola 'K'
    if(unosUblagajnu != 'K'){
    prodanoUlaznica++;
    }
  }

  //izracunamo ukupni utrzak i ispisemo rezultate.
  dnevniUtrzak = ulazniceZaOdrasle * 13.5 + ulazniceZaDjecu * 7.5 + obiteljskaTroclana * 27 + obiteljskaCetveroclana * 32 + ulaznicaZaLjuljacku * 5;
  
  
  cout << "Prodano je " << prodanoUlaznica << " ulaznica" << endl;
  cout << "Odrasli: " << ulazniceZaOdrasle << " po cijeni od 13.5€, ukupno " << ulazniceZaOdrasle * 13.5 << "€" << endl;
  cout << "Djeca: " << ulazniceZaDjecu << " po cijeni od 7.5€, ukupno " << ulazniceZaDjecu * 7.5 << "€" << endl;
  cout << "Troclana: " << obiteljskaTroclana << " po cijeni od 27€, ukupno " << obiteljskaTroclana * 27 << "€" << endl;
  cout << "Cetveroclana: " << obiteljskaCetveroclana << " po cijeni od 32€, ukupno " << obiteljskaCetveroclana * 32 << "€" << endl;
  cout << "Ljuljačka: " << ulaznicaZaLjuljacku << " po cijeni od 5€, ukupno " << ulaznicaZaLjuljacku * 5 << "€" << endl;
  cout << "Dnevni utržak je: " << dnevniUtrzak << "€" << endl;

	return 0;
}

/*
Podatci se unose jedan po jedan, tj. podatak-enter-podatak-enter... sve dok se ne unese 'K' kad ce program ispisati dnevno izvjesce.


  Moglo se raditi i s if/else if/else, ali to ne bi napravilo nikakvu razliku.
*/