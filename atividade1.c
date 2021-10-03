/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
2 ∗ UNIFAL − U ni v e r si d a d e F e d e r al de Al f e n a s .
3 ∗ BACHARELADO EM CIENCIA DA COMPUTACAO.
4 ∗ Trabalho . . : A ti vi d a d e 1
5 ∗ D i s c i p l i n a : Programacao
6 ∗ P r o f e s s o r . : Luiz Eduardo da S i l v a
7 ∗ Aluno . . . . . : Kayan Martins de Freitas
8 ∗ Data . . . . . . : 08/07/2020
9 ∗−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/

#include <stdio.h>

int main(void){
    int ID,IDADE,cont = 0, qtdMale = 0, qtdFemale = 0, qtdOutro = 0, maior = 0, IDmaior, menor = 200, IDmenor;
    float media, somaIdade = 0;
    char sexo;

    while(ID!=0 && sexo!='x' && IDADE!=0)
    {
        scanf("%d %c %d", &ID, &sexo, &IDADE);
        somaIdade = somaIdade+IDADE;

        if (ID!=0 && sexo!='x' && IDADE!=0){
            if(sexo == 'm' || sexo == 'M'){
                qtdMale = qtdMale+1;
            }else if (sexo == 'f' || sexo == 'F')
            {
                qtdFemale = qtdFemale+1;
            }else{
                qtdOutro = qtdOutro+1;
            }

            if(IDADE>=maior){
                maior = IDADE;
                IDmaior = ID;
            }else if (IDADE<=menor)
            {
                menor = IDADE;
                IDmenor = ID;
            }
        
            cont++;
        }
        
    }

    media = (somaIdade/cont);

     printf("+------------------+----------+\n");
        printf("%18s %8.0f |\n","| Soma das idades  |", somaIdade);
        printf("%18s %8d |\n","| Total de pessoas |",cont);
        printf("%18s %8.1f |\n","| Media de idades  |",media);
        printf("%18s %8d |\n","| Homens           |", qtdMale);
        printf("%18s %8d |\n","| Mulheres         |", qtdFemale);
        printf("%18s %8d |\n","| Outros           |", qtdOutro);
        printf("%18s %8d |\n","| Maior idade      |", maior);
        printf("%18s %8d |\n","| ID do mais velho |",IDmaior);
        printf("%18s %8d |\n","| Menor idade      |",menor);
        printf("%18s %8d |\n","| ID do mais novo  |",IDmenor);
        printf("+------------------+----------+\n");   
}
