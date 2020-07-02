#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<math.h>

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void cadastroSimples(void)
{
    char nome[50], contPrev[12], totalRend[12], CPF[15];
    float contPrev_f, totalRend_f, base, IRPF = 0;
    //int n, d, i;
    
        printf("\n Nome: ");
        gets (nome);
        scanf("%c", &nome);

            printf("\n CPF: ");
            gets (CPF);
            scanf("%c", &CPF);

                printf("\n Contr. Previd.: R$");
                gets (contPrev);
                scanf("%c", &contPrev);
                contPrev_f = atof(contPrev);

                    printf("\n Total Rend.: R$");
                    gets (totalRend);
                    scanf("%c", &totalRend);
                    totalRend_f = atof(totalRend);
                    
                    base = totalRend_f-contPrev_f;
                    base = base * 0.95;
                    if(base<=12000)	printf("\nIsento de Imposto de Renda");
                    if(base>=12000 && base<=24000) IRPF = base * 0.15;
                    if(base>=24000) IRPF = base * 0.275;
                    printf("\nSalario Liquido: %.2f", totalRend_f - IRPF);
                    printf("\n\n\n\n\n");
//                  return 0;
//    system("cls");
}

void cadastroCompleto(void)
{
    char nome[50], contPrev[12], totalRend[12], CPF[15], idade[12], numDepend[12], Base_IRPF, IRPF = 0;
    int numDepend_i, idade_i;
    float totalRend_f, Base_IRPF, IRPF, contPrev_f = 0;
        printf("\n Nome: ");
        gets (nome);
        scanf("%c", &nome);
            printf("\n CPF: ");
            gets (CPF);
            scanf("%c", &CPF);
                printf("\n Idade: ");
                gets (idade);
                scanf("%c", &idade);
                idade_i = atoi(idade);
                    printf("\n Num. Dependentes: ");
                    gets (numDepend);
                    scanf("%c", &numDepend);
                    numDepend_i = atoi(numDepend);
                        printf("\n Contr. Previd.: R$");
                        gets (contPrev);
                        scanf("%c", &contPrev);
                        contPrev_f = atof(contPrev);
                            printf("\n Total Rend.: R$");
                            gets (totalRend);
                            scanf("%c", &totalRend);
                            totalRend_f = atof(totalRend);
                            Base_IRPF = totalRend_f - contPrev_f;
                            if(idade <65)
                                {
                                    if(numDepend <= 2) Base_IRPF = Base_IRPF * 0.98;
                                    if(numDepend >= 3 && numDepend <= 5) Base_IRPF = Base_IRPF * 0.965;
                                    if(numDepend > 5) Base_IRPF = Base_IRPF * 0.95;
                                }
                            if(idade >=65)
                                {
                                    if(numDepend <= 2) Base_IRPF = Base_IRPF * 0.98;
                            if(numDepend >= 3 && numDepend <= 5) Base_IRPF = Base_IRPF * 0.965;
                            if(numDepend > 5) Base_IRPF = Base_IRPF * 0.95;
                            }
                            if(Base_IRPF<=12000) printf("\nIsento de Imposto de Renda");
                            if(Base_IRPF>=12000 && Base_IRPF<=24000) IRPF = Base_IRPF * 0.15;
                            if(Base_IRPF>=24000) IRPF = Base_IRPF * 0.275;
                            printf("\nIRPF");
                            printf("\nSalario Liquido: %.2f\n", totalRend_f - IRPF);
                            printf("\n\n\n\n\n");

//    system("cls");
}

/******************* funcao principal (main) *********************/

int main(void)
{
    while(1)
    {
        int tipo;
        printf("\n  ******************************************** ");
        printf("\n  *                                          * ");
        printf("\n  *  SISTEMA DE DECLARACAO IMPOSTO DE RENDA  * ");
        printf("\n  *                                          * ");
        printf("\n  ******************************************** ");

        printf("\n\n        ***  OPCOES CADASTRAMENTO ***    ");
        printf("\n  -------------------------------------------");
        printf("\n         ( 1 ) DECLARACAO SIMPLIFICADA");
        printf("\n         ( 2 ) DECLARACAO COMPLETA");
        printf("\n       --> ");
        scanf("%d", &tipo);

        switch(tipo)
        {
            case 1:
              {
                    system("cls");
                    printf("\n *** DECLARACAO SIMPLIFICADA ***");
                    cadastroSimples();
                }break;
            case 2:
                {
                    system("cls");
                    printf("\n *** DECLARACAO COMPLETA ***");
                    cadastroCompleto();
                }break;

            default:
                system("cls");

        }


    //delay(1000);
    }





    //return 0;
}
