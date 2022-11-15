#include "mbed.h"

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

void couleur(int val)
{
    switch(val)
    {
        case NOIR:
        {
            LedBleue.write(1);
            LedVerte.write(1);
            LedRouge.write(1);
            break;
        }
        case BLANC:
        {
            LedBleue.write(0);
            LedVerte.write(0);
            LedRouge.write(0);
            break;
        }
        case ROUGE:
        {
            LedBleue.write(1);
            LedVerte.write(1);
            LedRouge.write(0);
            break;
        }
        case BLEU:
        {
            LedBleue.write(0);
            LedVerte.write(1);
            LedRouge.write(1);            
            break;
        }
        case VERT:
        {
            LedBleue.write(1);
            LedVerte.write(0);
            LedRouge.write(1);               
            break;
        }
        case JAUNE:
        {
            LedBleue.write(1);
            LedVerte.write(0);
            LedRouge.write(0);               
            break;
        }
        case CYAN:
        {
            LedBleue.write(0);
            LedVerte.write(0);
            LedRouge.write(1);              
            break;
        }
        case MAGENTA:
        {
            LedBleue.write(0);
            LedVerte.write(1);
            LedRouge.write(0);            
            break;
        }
    }
}

// Programme principal
int main() {
    float tempo=0.5; //attente entre les couleurs fixée à 0,5s
    int c1, c2, c3;

    printf("Quelle valeur de tempo ?\n");
    scanf("%f", &tempo);

    printf("TABLE DES COULEURS : \nNOIR 7\nBLANC 0\nROUGE 3\nVERT 5\nBLEU 6\nJAUNE 1\nCYAN 4\nMAGENTA 2\n");

    printf("Quelle couleur n1 ?\n");
    scanf("%d", &c1);
    printf("Quelle couleur n2 ?\n");
    scanf("%d", &c2);
    printf("Quelle couleur n3 ?\n");
    scanf("%d", &c3);

    while(1) { //début de la boucle infinie
        couleur(c1);
        wait(tempo);
        couleur(c2);
        wait(tempo);
        couleur(c3);
        wait(tempo);
    } //fin de la boucle infinie
}