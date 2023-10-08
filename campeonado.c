#include <stdio.h>

int main (){

    int cv, ce, cs, tpc;
    int fv, fe, fs, tpf;

    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);

    tpc = (cv * 3) + ce;
    tpf = (fv *3) + fe;

    if ( tpc == tpf) {      // eu chequei o empate do numero de pontos pelo calculo
        if (cs == fs) {      // como eles empataram no saldo de pontos, precisei checar o empate do saldo de gols
            printf("=\n");
        } 
        
        else {            //como eles não empatem no saldo de gols, eu preciso checar quem tem mais gols
            if (cs > fs) {      // se o carmelo tiver mais gols que o florindo, então
                printf("C\n"); // carmengo ganha
            } else {            // logicamente, se carmeno não teve mais gols que floriano 
                printf("F\n"); // logo, florintians ganhou
            }
        }
    } 
    
    else {                    // caso eles não empatem em pontuação na primeira etapa, eu preciso:
        if (tpc > tpf){         // checar que teve mais pontos
            printf("C\n");      // no caso, foi carlinhosmaia   
        }
        else {                  // LOGICAMENTE, se carlinhos não gnhar essa briga
            printf("F\n");      // florino AMASSA e ganha, felipemassa
        }
    }

    
    


    return 0;
}