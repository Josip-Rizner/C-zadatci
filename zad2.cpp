#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

  /*Deklariranje varijabli koje ce trebati*/

  char NoviCvijet = ' ';
  int VisibabeUBuketu = 0, SafraniUBuketu = 0, LjubiciceUBuketu = 0;
  int OdbaceneVisibabe = 0, OdbaceniSafrani = 0, OdbaceneLjubicice = 0;

  /*Ulazimo u petlju koja ce se ponavljati dok ne bude po 2 od svakog cvijeta. Uvjet je: Dok je broj visibaba manji od 2 ILI dok je broj safrana manjai od 2 ILI dok je broj ljubicica manji od 2.
  
  Svaki if provjerava koje slovo je uneseno, ako je npr uneseno V I (&&) ako ima < od 2 visibabe povecat ce se broj visibaba u buketu, inace ako je uneseno V i ako ima 2 visibabe u buketu, povecava se broj odbacenih visibaba. 
  */

  while(VisibabeUBuketu < 2  || SafraniUBuketu < 2 || LjubiciceUBuketu < 2){
    
    cin >> NoviCvijet;

    if(NoviCvijet == 'V' && VisibabeUBuketu < 2){
      VisibabeUBuketu++;
    }
    else if(NoviCvijet == 'V' && VisibabeUBuketu == 2){
      OdbaceneVisibabe++;
    }

    if(NoviCvijet == 'S' && SafraniUBuketu < 2){
      SafraniUBuketu++;
    }
    else if(NoviCvijet == 'S' && SafraniUBuketu == 2){
      OdbaceniSafrani++;
    }

    if(NoviCvijet == 'L' && LjubiciceUBuketu < 2){
      LjubiciceUBuketu++;
    }
    else if(NoviCvijet == 'L' && LjubiciceUBuketu == 2){
      OdbaceneLjubicice++;
    }
  }

  cout << "Ukupni broj cvjetova koje je Maja odbacila: " << OdbaceneVisibabe + OdbaceniSafrani + OdbaceneLjubicice << endl;
  cout << "Od toga: " << endl;
  cout << "Visibaba: " << OdbaceneVisibabe << endl;
  cout << "Šafrana: " << OdbaceniSafrani << endl;
  cout << "Ljubicica: " << OdbaceneLjubicice << endl;

	return 0;
}

