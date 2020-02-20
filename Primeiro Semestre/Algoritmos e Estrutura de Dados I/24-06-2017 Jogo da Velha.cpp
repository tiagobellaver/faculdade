#include <bits/stdc++.h>

#define tam 3

using namespace std;

int player;
char matriz[tam][tam];
int i, j;
char player1, player2;
int ganhou = false;
int jogada = 0;
int turno = 1;
int certo = false;

void escolha_jogador()
{
    srand(time(NULL));
    int certo = false;
    while (certo == false)
    {
        player = rand() % 2 + 1;
        cout << " ---------------------------- " << endl;
        cout << "| Bem Vindo ao Mangojata Toe |" << endl;
        cout << " ---------------------------- " << endl;
        cout << endl;
        cout << "Player " << player << " escolha 'X' ou 'O': ";
        cin.get(player1);
        cout << endl;
        if ((player1 == 'X') || (player1 == 'x'))
        {
            player1 = 'X';
            player2 = 'O';
            certo = true;
        }
        else if ((player1 == 'o') || (player1 == 'O'))
        {
            player1 = 'O';
            player2 = 'X';
            certo = true;
        }
        else if ((player1 != 'x' || player1 != 'o') || (player2 != 'X' || player2 != 'O'))
        {
            cout << "Voce digitou um valor invalido" << endl;
            certo = false;
        }
    }
}

void elementos_matriz()
{
    for (i = 0; i < tam; i++)
        for (j = 0; j < tam; j++)
            matriz[i][j] = ' ';
}

void escreve_matriz1()
{
    int cont = 0;
    for (i = 0; i < tam - 1; i++)
    {
        cont++;
        for (j = 0; j < tam - 1; j++)
        {
            if (j % 2 == 0)
                cout <<  "    " << cont << "\t  | "<<matriz[i][j] ;
            else
                cout <<  matriz[i][j] << "| ";
        }
    }
}

void escreve_matriz2()

{
    cout <<  "\t" << matriz[0][0] << " | " << matriz[0][1] << " | " << matriz[0][2] << endl << " \t--|---|--" << endl
         << " \t" << matriz[1][0] << " | " << matriz[1][1] << " | " << matriz[1][2] << endl << " \t--|---|--" << endl
         << " \t" << matriz[2][0] << " | " << matriz[2][1] << " | " << matriz[2][2] << endl;
}

void verifica_ganhador()
{
    if((matriz[0][0] == matriz[0][1]) && (matriz[0][1] == matriz[0][2]) && (matriz[0][0] != ' '))
    {
        ganhou = true;
    }
    else if((matriz[1][0] == matriz[1][1]) && (matriz[1][1] == matriz[1][2]) && (matriz[1][0] != ' '))
    {
        ganhou = true;
    }
    else if((matriz[2][0] == matriz[2][1]) && (matriz[2][1] == matriz[2][2]) && (matriz[2][0] != ' '))
    {
        ganhou = true;
    }
    if((matriz[0][0] == matriz[1][0]) && (matriz[1][0] == matriz[2][0]) && (matriz[0][0] != ' '))
    {
        ganhou = true;
    }
    else if((matriz[0][1] == matriz[1][1]) && (matriz[1][1] == matriz[2][1] )&& (matriz[0][1] != ' '))
    {
        ganhou = true;
    }
    else if((matriz[0][2] == matriz[1][2]) && (matriz[1][2] == matriz[2][2] )&& (matriz[0][2] != ' '))
    {
        ganhou = true;
    }
    if((matriz[0][0] == matriz[1][1]) && (matriz[1][1] == matriz[2][2]) && (matriz[0][0] != ' '))
    {
        ganhou = true;
    }
    else if((matriz[0][2] == matriz[1][1]) && (matriz[1][1] == matriz[2][0]) && (matriz[0][2] != ' '))
    {
        ganhou = true;
    }
}

int jogadas()
{
    certo = false;
    if (turno == 1)
    {
        while (certo == false)
        {
            cout << endl;
            cout << "Digite dois numeros entre 0 e 2: ";
            cin >> i >> j;
            cout << endl;
            if (matriz[i][j] == ' ')
            {
                matriz[i][j] = player1;
                certo = true;
                turno = 2;
                escreve_matriz2();
            }
            else
            {
                cout << "Jogada Invalida" << endl;
            }
        }
    }
    else
    {
        if (turno == 2)
        {
            certo = false;
            while (certo == false)
            {
                cout << endl;
                cout << "Digite dois numeros entre 0 e 2: ";
                cin >> i >> j;
                cout << endl;
                if (matriz[i][j] == ' ')
                {
                    matriz[i][j] = player2;
                    certo = true;
                    turno = 1;
                    escreve_matriz2();
                }
                else
                {
                    cout << "Jogada Invalida" << endl;
                }
            }
        }
    }
}

int main ()
{
    escolha_jogador();
    elementos_matriz();
    escreve_matriz2();
    jogada = 0;
    while ((jogada <= 9) && (ganhou == false))
    {
        jogadas();
        jogada++;
        verifica_ganhador();
    }
    if((ganhou == false) && (jogada <= 9))
    {
        cout << endl;
        cout << "Deu velha!!!" << endl;
    }
    else
    {
        if (ganhou == true)
        {
            if(turno == 1)
            {
                cout << endl;
                cout << "Parabens o jogador 2 ganhou!!" << endl;
            }
            else if (turno == 2)
            {
                cout << endl;
                cout << "Parabens o jogador 1 ganhou!!" << endl;
            }
        }
    }
    return 0;
}
