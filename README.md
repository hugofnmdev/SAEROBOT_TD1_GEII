# TD 1 - SAE Robots

Ex 1 :
https://github.com/hugofnmdev/SAEROBOT_TD1_GEII/blob/main/Couleurs6/main.cpp

Ex 2 :
https://github.com/hugofnmdev/SAEROBOT_TD1_GEII/blob/main/Couleurs7/main.cpp

Ex 3 :
https://github.com/hugofnmdev/SAEROBOT_TD1_GEII/blob/main/Couleurs8/main.cpp

Fonction couleur :
```c
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
```
