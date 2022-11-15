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

    printf("Quelle valeur de tempo ?");
    scanf("%f", &tempo);

    while(1) { //début de la boucle infinie
        couleur(BLEU);
        wait(tempo);
        couleur(BLANC);
        wait(tempo);
        couleur(ROUGE);
        wait(tempo);
        couleur(NOIR);
        wait(tempo);
    } //fin de la boucle infinie
}