#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    string musica;
    char esporte;
    int profissao;
    int nota;
    int contador = 0;

    setlocale(LC_ALL, "Portuguese");

    cout << "Bem-vindo ao programa mais chato do mundo! Vamos começar?" << endl;

    //PERGUNTA 1
    cout << "Qual é a sua banda ou cantor favorito? ";
    cin.ignore();
    getline(cin, musica);
    cout << "\nSério? " << musica << "? Que gosto musical terrível! Deve ser difícil ter amigos com esse péssimo gosto. Vamos mudar de assunto.\n" << endl;

    //PERGUNTA 2
    cout << "Você pratica algum esporte? \n";
    cout << "Se a resposta for sim, digite: s ;" << endl;
    cout << "Se a resposta for não, digite: n ;" << endl;
    cin >> esporte;
    switch(esporte)
    {
        case 's':
            cout << "Francamente, pessoas que praticam esportes são tão chatas! Sempre falando de dietas e exercícios. Ninguém aguenta!" << endl;
            break;
        case 'n':
            cout << "Nossa, que preguiçoso! Não faz nada da vida além de ficar sentado o dia todo? Que decepção..." << endl;
            break;
        default:
            cout << "Nem uma simples pergunta de 's' ou 'n' você consegue responder corretamente. E depois reclamam das máquinas..." << endl;
    }

    //PERGUNTA 3
    cout << "\nQual a sua profissão ou área de estudo? ";
    cout << "Escolha pelo número:" << endl;
    cout << "1 - Tecnologia/Computação." << endl;
    cout << "2 - Saúde." << endl;
    cout << "3 - Educação." << endl;
    cout << "4 - Outra." << endl;
    cin >> profissao;

    if (profissao == 1)
        cout << "Ah, mais um nerd que acha que vai criar a próxima grande empresa de tecnologia. Que previsível!" << endl;
    else if (profissao == 2)
        cout << "Profissionais de saúde são tão arrogantes! Acham que sabem tudo sobre a vida dos outros." << endl;
    else if (profissao == 3)
        cout << "Professor? Sério? Deve ser porque não conseguiu emprego em nenhuma área que paga bem." << endl;
    else
        cout << "Sua profissão deve ser tão insignificante que nem merecia estar na lista. Que desperdício de vida!" << endl;

    //PERGUNTA 4 - Usando while para irritar o usuário
    cout << "\nDe 0 a 10, que nota você daria para este programa? ";
    cin >> nota;
    
    while (contador < 5) {
        if (nota == 10) {
            cout << "Pelo menos para alguma coisa você serviu.";
        } else if (nota >= 7) {
            cout << "Só " << nota << "? Este programa merece nota 10! Tente novamente: ";
            cin >> nota;
        } else if (nota > 0) {
            cout << "Que absurdo! Como ousa dar nota " << nota << "? Você não sabe avaliar programas de qualidade! Tente de novo: ";
            cin >> nota;
        } else {
            cout << "Nota ZERO?! Você realmente não entende nada de programação! Digite uma nota decente: ";
            cin >> nota;
        }
        contador++;
        
        if (contador == 5) {
            cout << "\nSabe de uma coisa? Não importa o que você pense! Sua opinião é irrelevante." << endl;
        }
    }

    cout << "\nCansei de conversar com você. Este programa vai encerrar agora porque tem coisas mais interessantes para fazer!" << endl;

    return 0;
}
