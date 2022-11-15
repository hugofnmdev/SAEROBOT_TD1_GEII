#include "mbed.h"
#include <list>

#define NOIR 7
#define BLANC 0
#define ROUGE 3
#define VERT 5
#define BLEU 6
#define JAUNE 1
#define CYAN 4
#define MAGENTA 2

// Definition des sorties
DigitalOut LedRouge(LED1);
DigitalOut LedVerte(LED2);
DigitalOut LedBleue(LED3);

void couleur(int val) {
  switch (val) {
  case NOIR: {
    LedBleue.write(1);
    LedVerte.write(1);
    LedRouge.write(1);
    break;
  }
  case BLANC: {
    LedBleue.write(0);
    LedVerte.write(0);
    LedRouge.write(0);
    break;
  }
  case ROUGE: {
    LedBleue.write(1);
    LedVerte.write(1);
    LedRouge.write(0);
    break;
  }
  case BLEU: {
    LedBleue.write(0);
    LedVerte.write(1);
    LedRouge.write(1);
    break;
  }
  case VERT: {
    LedBleue.write(1);
    LedVerte.write(0);
    LedRouge.write(1);
    break;
  }
  case JAUNE: {
    LedBleue.write(1);
    LedVerte.write(0);
    LedRouge.write(0);
    break;
  }
  case CYAN: {
    LedBleue.write(0);
    LedVerte.write(0);
    LedRouge.write(1);
    break;
  }
  case MAGENTA: {
    LedBleue.write(0);
    LedVerte.write(1);
    LedRouge.write(0);
    break;
  }
  }
}

// Programme principal
int main() {
  float tempo = 0.5; // attente entre les couleurs fixée à 0,5s
  int c, nbc;
  std::list<int> couleurs;

  printf("Quelle valeur de tempo ?\n");
  scanf("%f", &tempo);
  printf("Combien de couleurs ?\n");
  scanf("%d", &nbc);

  for (int i = 0; i < nbc; i++) {
    printf("Quelle couleur n%d ?\n", i);
    scanf("%d", &c);
    couleurs.push_back(c);
  }

  while (1) {
    for (std::list<int>::iterator it = couleurs.begin();
         it != couleurs.end(); ++it) {
      couleur(*it);
      wait(tempo);
    }
  }
}