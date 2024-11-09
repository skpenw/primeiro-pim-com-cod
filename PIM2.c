#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define RED "\x1B[31m"
#define GRN "\x1B[32m"
#define YEL "\x1B[33m"
#define BLU "\x1B[34m"
#define MAG "\x1B[35m"
#define CYN "\x1B[36m"
#define WHT "\x1B[37m"
#define BROWN "\x1B[38;5;130m"
#define RESET "\x1B[0m"

int main()

{
    setlocale(LC_ALL,"Portuguese");
    const int capacidadeSala = 15;
    int ingressosVendidos[4] = {0};
    int opcao;
    int comprar;
    int dia;
    int horario;
    int pessoas;
    int sair_while=0;
    char nome[100];
    int confirmacao;
    int termos=0;
    char* nomesDias[] = {"Quinta-Feira", "Sexta-Feira", "S�bado", "Domingo"};
    char* nomesHorarios[] = {"15:00", "16:00", "17:00", "18:00"};
    int capacidadeSalas[4][4] = {
    {15, 15, 15, 15},
    {15, 15, 15, 15},
    {15, 15, 15, 15},
    {15, 15, 15, 15}
    };
    int ingressosDisponiveis[4][4] = {
    {15, 15, 15, 15},
    {15, 15, 15, 15},
    {15, 15, 15, 15},
    {15, 15, 15, 15}
    };

    while (sair_while==0) {
            float valorTotal = 0.0;
    printf(BLU"\t\t\t\t\t              )\\         O_._._._A_._._._O            /(\n");
    printf("\t\t\t\t\t                \\`--.___,'=================`.___,--' /\n");
    printf("\t\t\t\t\t                 \\`--._.__    SAUDA��ES!    __._,--'/\n");
    printf("\t\t\t\t\t                   \\  ,. l`~~~~~~~~~~~~~~~'l ,.  /\n"RESET);
    printf(CYN"\t\t\t\t\t       __            \\||(_)!_!_!_.-._!_!_!(_)||/            __\n");
    printf(BLU"\t\t\t\t\t       \\\\`-.__        ||_|____!!_|;|_!!____|_||        __,-'//\n");
    printf("\t\t\t\t\t        \\\\    `==---='-----------'='-----------`=---=='    //\n");
    printf("\t\t\t\t\t         | `--.     VOC� EST� NO MUSEU MULTITEM�TICO    ,--'|\n");
    printf("\t\t\t\t\t          \\  ,.`~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~',./\n"RESET);
    printf(CYN"\t\t\t\t\t           \\||  ____,-------._,-------._,-------.____  ||/\n");
    printf("\t\t\t\t\t            ||\\|___!`=======\"!`=======\"!`=======\"!___|/||\n");
    printf("\t\t\t\t\t            || |---||--------||-| | |-!!--------||---| ||\n");
    printf("\t\t\t\t\t  __O_____O_ll_lO_____O_____O|| |'|'| ||O_____O_____Ol_ll_O_____O__\n");
    printf("\t\t\t\t\t  o H o o H o o H o o H o o |-----------| o o H o o H o o H o o H o\n");
    printf("\t\t\t\t\t ___H_____H_____H_____H____O =========== O____H_____H_____H_____H___\n");
    printf("\t\t\t\t\t                          /|=============|\\                  \n");
    printf("\t\t\t\t\t()______()______()______() '=============' ()______()______()______()\n");
    printf("\t\t\t\t\t||{_}{_}||{_}{_}||{_}{_}/| =============== |\\{_}{_}||{_}{_}||{_}{_}||\n");
    printf("\t\t\t\t\t||      ||      ||     / |=================| \\     ||      ||      ||\n");
    printf("\t\t\t\t\t======================()  =================  ()======================\n");
    printf("\t\t\t\t\t----------------------/| ------------------- |\\----------------------\n");
    printf("\t\t\t\t\t                     / |---------------------| \\\n");
    printf("\t\t\t\t\t-'--'--'           ()  '---------------------'  ()           '--'--'-\n\n"RESET);
    printf(BLU"\t\t\t\t\t Pronto para uma aventura cultural? Aperte os cintos, vamos decolar!\n");
    printf(CYN"\t\t\t\t\t\t\tPRECIONE QUALQUER TECLA PARA CONHECER\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");

    system("cls");
    printf(CYN"\n\n\t\t                                 {}                                                   {}\n");
    printf("\t\t                         !  !  ! II                                                   II !  !  !\n");
    printf("\t\t                      !  I__I__I_II                                                   II_I__I__I  !\n");
    printf("\t\t                       I_/|__|__|_||                                                 ||_|__|__|\\_I\n");
    printf("\t\t                    ! /|_/|  |  | ||                                                 || |  |  |\\_\\ !\n");
    printf("\t\t        .--.        I//|  |  |  | ||                 MENU INICIAL                    || |  |  |  |\\\\I        .--.\n");
    printf("\t\t       /-   \\    ! /|/ |  |  |  | ||                                                 || |  |  |  | \\|\\ !    /=   \\\n");
    printf("\t\t       \\=__ /    I//|  |  |  |  | ||                                                 || |  |  |  |  |\\\\I    \\=__ /\n");
    printf("\t\t        }  {  ! /|/ |  |  |  |  | ||                                                 || |  |  |  |  | \\|\\ !  }  {\n");
    printf("\t\t       {____} I//|  |  |  |  |  | || [1] - 100 Anos da Semana da Arte Moderna        || |  |  |  |  |  |\\\\I {____}\n");
    printf("\t\t _!__!__|= |=/|/ |  |  |  |  |  | || [2] - 150 anos de Santos Dumont                 || |  |  |  |  |  | \\|\\=|  |__!__!\n");
    printf("\t\t _I__I__|  ||/|__|__|__|__|__|__|_|| [3] - Jogos Ol�mpicos de Paris 2024             ||_|__|__|__|__|__|__|\\||- |__I__I_\n");
    printf("\t\t -|--|--|- ||-|--|--|--|--|--|--|-|| [4] - Antiguidade Cl�ssica: Gr�cia e Roma Antiga||-|--|--|--|--|--|--|-||= |--|--|-\n");
    printf("\t\t  |  |  |  || |  |  |  |  |  |  | || [0] - Sair                                      || |  |  |  |  |  |  | ||  |  |  |\n");
    printf("\t\t  |  |  |= || |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||= |  |  |\n");
    printf("\t\t  |  |  |- || |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||= |  |  |\n");
    printf("\t\t  |  |  |- || |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||- |  |  | \n");
    printf("\t\t _|__|__|  ||_|__|__|__|__|__|__|_||                                                 ||_|__|__|__|__|__|__|_||  |__|__|_\n");
    printf("\t\t -|--|--|= ||-|--|--|--|--|--|--|-||    ������ Digite a op��o desejada: ������       ||-|--|--|--|--|--|--|-||- |--|--|-\n");
    printf("\t\t -|--|--|| |  |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||  |  |  | \n"RESET);
    printf(GRN"\t\t ~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~\n\t\t ");
    scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                printf(BLU"\t\t\t\t��������������������������� 100 Anos da Semana da Arte Moderna ��������������������������"RESET);
                printf("\n\n\t\t\t\tSemana de Arte Moderna de 1922 � um marco cultural e hist�rico no Brasil,\n");
                printf("\t\t\tnot�vel por desafiar as tradi��es art�sticas do s�culo 19.\n");
                printf("\t\t\t\tO evento, realizado no Theatro Municipal de S�o Paulo de 13 a 17 de fevereiro de 1922,\n");
                printf("\t\t\tum movimento de renova��o art�stica e cultural no pa�s.\n");
                printf("\t\t\t\tReuniu diversas formas de express�o, como dan�a, m�sica, poesia, pintura e escultura, al�m de palestras.\n");
                printf("\t\t\t\tOs artistas envolvidos propunham uma nova vis�o de arte, a partir de uma est�tica inovadora\n");
                printf("\t\t\tinspirada nas vanguardas europeias,\n");
                printf("\t\t\tentre esses artistas estava inclu�do, Heitor Villa-Lobos, T�cito de Almeida, Di Cavalcanti, Guiomar Novaes,\n");
                printf("\t\t\tZina Aita, M�rio de Andrade e Victor Brecheret.\n");
                printf("\t\t\t\tEles almejavam uma est�tica inovadora que refletisse uma identidade cultural brasileira mais contempor�nea,\n");
                printf("\t\t\tmas enraizada em suas pr�prias ra�zes.\n");
                printf("\t\t\t\tEssa semana representou um desafio �s normas culturais estabelecidas, criando uma vis�o art�stica mais brasileira.\n");
                printf("\t\t\t\tToda essa mudan�a e modernismo, chocou a sociedade e com isso eles receberam muitas cr�ticas,\n");
                printf("\t\t\tpois as pessoas ficaram desconfort�veis com tais apresenta��es e n�o conseguiram entender essa nova mudan�a na arte,\n");
                printf("\t\t\te com essa rea��o e cr�tica do p�blico ficou claro que as pessoas n�o estavam prontas para entender\n");
                printf("\t\t\te apreciar esses novos estilos art�sticos.\n");
                printf("\t\t\t\tAssim, a Semana de Arte Moderna de 1922 foi uma verdadeira quebra de paradigmas,\n");
                printf("\t\t\ttrazendo uma nova forma de ver a cultura brasileira,com elementos locais, mas tamb�m abra�ando influ�ncias de fora.\n");
                printf(BROWN"\t\t\t\t                  /\\\n");
                printf("\t\t\t\t                 /  )\n");
                printf("\t\t\t\t                (__/\n"RESET);
                printf(RED"\t\t\t\t        ____     //\n");
                printf(YEL"\t\t\t\t  _--~~~    ~~~-//\n");
                printf(GRN"\t\t\t\t /   ()   ()   // )\n");
                printf(CYN"\t\t\t\t|           _-//-~\n");
                printf(BLU"\t\t\t\t| ()       (_//\n");
                printf(MAG"\t\t\t\t|            ~~---_\n");
                printf(RED"\t\t\t\t \\  ()       ()    )\n");
                printf(YEL"\t\t\t\t  ~--__  ()    __-~\n");
                printf(BROWN"\t\t\t\t       ~//~~~~~\n");
                printf(BROWN"\t\t\t\t        //\n"RESET);
                    printf(GRN"\t\t\t\t[1] - Comprar Tickets.\n"RESET);
                    printf(GRN"\t\t\t\t[2] - Voltar ao In�cio.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &comprar);

                    if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, voc� nos confia seus dados e informa��es, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confian�a.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a pol�tica de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos ser�o utilizados durante\n");
                    printf("\t\t\t\t a compra e navega��o do usu�rio. N�o compartilhamos essas informa��es sem sua permiss�o.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informa��es de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informa��es, estar�o sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informa��es acerca de pagamento como CNPJ e CPF, dados banc�rios e \n");
                    printf("\t\t\t\t n�mero de cart�es de cr�dito, porventura fornecidos, ser�o utilizados com \n");
                    printf("\t\t\t\t vistas �nica e exclusivamente para transa��es na hora da compra. N�o vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informa��es pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, voc� concorda com esses termos.\n");
                    printf("\t\t\t\t    Se n�o concordar, por favor, n�o continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - N�o Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);

                    printf(BROWN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(RED"\t\t\t\t|                            VOC� N�O CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. At� logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t\t\t\t\t(\\ \n");
                    printf("\t\t\t\t\t\t\t\t '\\\\ \n");
                    printf("\t\t\t\t\t\t\t\t   \\'\\     __________  \n");
                    printf("\t\t\t\t\t\t\t\t   / '|   ()_________)\n");
                    printf("\t\t\t\t\t\t\t\t   \\ '/    \\ ~~~~~~~~ \\ \n");
                    printf("\t\t\t\t\t\t\t\t     \\       \\ ~~~~~~   \\ \n");
                    printf("\t\t\t\t\t\t\t\t     ==).      \\__________\\\n");
                    printf("\t\t\t\t\t\t\t\t    (__)       ()__________)\n"RESET);

                    return 0;
                    }
                    switch (comprar) {
                        case 1:
                            system("cls");
                            printf(GRN"\t\t\t\t������������������������������� Valor do Ticket: R$10,00 ��������������������������������\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t��������������������������������� Dias de Funcionamento ���������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - S�bado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o dia: ");
                                    scanf("%d", &dia);
                                    }
                                    switch (dia) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: S�bado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: Domingo.\n");
                                            break;
                                    }
                            printf(MAG"\n\t\t\t\t������������������������������� Hor�rios de Funcionamento �������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: 18:00.\n");
                                            break;
                                    }
                            printf(MAG"\n\t\t\t\t���������������������������� Limite de pessoa por sala: 15 ������������������������������\n"RESET);
                            printf("\t\t\t\tIngressos dispon�veis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o n�mero de pessoas que visitar�o: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAten��o! A quantidade de pessoas n�o dever� exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala est� lotada. N�o � poss�vel comprar mais ingressos para esse evento.\n"RESET);
                            system("pause");
                            }else{
                            ingressosVendidos[opcao - 1] += pessoas;
                            float precoIngresso = 10.0;
                            valorTotal += pessoas * precoIngresso;
                            system("cls");
                            printf(CYN"\n\t\t\t\t        .--'''''''''--.\n");
                            printf("\t\t\t\t     .'      .---.      '.\n");
                            printf("\t\t\t\t    /    .-----------.    \\\n");
                            printf("\t\t\t\t   /        .-----.        \\\n");
                            printf("\t\t\t\t   |       .-.   .-.       |\n");
                            printf("\t\t\t\t   |      /   \\ /   \\      |\n");
                            printf("\t\t\t\t    \\    | .-. | .-. |    /\n");
                            printf("\t\t\t\t     '-._| | | | | | |_.-'\n");
                            printf("\t\t\t\t         | '-' | '-' |\n");
                            printf("\t\t\t\t          \\___/ \\___/\n");
                            printf("\t\t\t\t       _.-'  /   \\  '-._\n");
                            printf("\t\t\t\t     .' _.--|     |--._ '.\tFalta pouco! Sua carteira pode estar mais leve,\n");
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experi�ncia est� prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHor�rio escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao In�cio.\n"RESET);
                            printf(CYN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParab�ns, a sua compra de tickets foi efetuada!\n\n"RESET);
                                    printf(YEL"\t\t\t\t      .--..--..--..--..--..--.\n");
                                    printf("\t\t\t\t    .' \\  (`._   (_)     _   \\\n");
                                    printf("\t\t\t\t  .'    |  '._)         (_)  |\n");
                                    printf("\t\t\t\t  \\ _.')\\      .----..---.   /\n");
                                    printf("\t\t\t\t  |(_.'  |    /    .-\\-.  \\  |\n");
                                    printf("\t\t\t\t  \\     0|    |   ( O| O) | o|\n");
                                    printf("\t\t\t\t   |  _  |  .--.____.'._.-.  |\n");
                                    printf("\t\t\t\t   \\ (_) | o         -` .-`  |\n");
                                    printf("\t\t\t\t    |    \\   |`-._ _ _ _ _\\ /\n");
                                    printf("\t\t\t\t    \\    |   |  `. |_||_|   |\n");
                                    printf("\t\t\t\t    | o  |    \\_      \\     |     -.   .-.\n");
                                    printf("\t\t\t\t    |.-.  \\     `--..-'   O |     `.`-' .'\n");
                                    printf("\t\t\t\t  _.'  .' |     `-.-'      /-.__   ' .-'\n");
                                    printf("\t\t\t\t .' `-.` '.|='=.='=.='=.='=|._/_ `-'.  \n");
                                    printf("\t\t\t\t`-._  `.  |________/\\_____|    `-.-.\n");
                                    printf("\t\t\t\t   .'   ).| '=' '='\\/ '=' |       \n");
                                    printf("\t\t\t\t   `._.`  '---------------'         \n");
                                    printf("\t\t\t\t           //___\\   //___\\      \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t            (_.--__) (_.--__)          \n\n"RESET);
                                    system("pause");
                                    ingressosDisponiveis[opcao - 1][dia - 1] -= pessoas;
                                    break;
                                    case 2:
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao In�cio.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOp��o inv�lida. Voltando ao In�cio.\n\n"RESET);
                        }
                        break;
                            }
                            system("pause");
                            valorTotal = 0.0;
                        }
                        } else if (comprar ==2) {
                    }
                break;
                case 2:
                system("cls");
                printf(BLU"\t\t\t\t��������������������������������� 150 Anos de Santos Dumont �����������������������������"RESET);
                printf("\n\n\t\t\t\tSantos Dumont foi um importante inventor e pioneiro da avia��o brasileira.\n");
                printf("\t\t\t\tEle nasceu em 20 de julho de 1873, em Minas Gerais.\n");
                printf("\t\t\te � considerado o pai da avia��o por suas contribui��es significativas\n");
                printf("\t\t\tpara o desenvolvimento de aeronaves mais leves que o ar.\n");
                printf("\t\t\t\tAo longo de sua vida, Santos Dumont projetou e construiu diversos bal�es e dirig�veis,\n");
                printf("\t\t\tsendo o mais famoso deles o 14 Bis,\n");
                printf("\t\t\tque realizou o primeiro voo controlado e motorizado em 23 de outubro de 1906, em Paris.\n");
                printf("\t\t\t\tAl�m disso, ele tamb�m foi respons�vel por diversas outras inven��es, como o rel�gio de pulso\n");
                printf("\t\t\te a cadeira com rodas para pessoas com mobilidade reduzida.\n");
                printf("\t\t\t\tInfelizmente, Santos Dumont enfrentou problemas pessoais e acabou se suicidando em 23 de julho de 1932.\n");
                printf("\t\t\t\tNo entanto, seu legado como um dos grandes nomes da avia��o mundial permanece at� hoje.\n");
                printf("\t\t\t\tPara celebrar os 150 anos do nascimento de Santos Dumont, � importante lembrar sua import�ncia hist�rica\n");
                printf("\t\t\te suas contribui��es para a ci�ncia e tecnologia.\n");
                printf(BLU"\t\t\t\tSua coragem e determina��o abriram caminho para os avan�os que temos na avia��o atualmente.\n\n"RESET);
                printf(CYN"\t\t\t\t\t\t\t            __/\\__\n");
                printf("\t\t\t\t\t\t\t           `==/\\==`\n");
                printf("\t\t\t\t\t\t\t ____________/__\\____________\n");
                printf("\t\t\t\t\t\t\t/____________________________\\\n");
                printf("\t\t\t\t\t\t\t  __||__||__/.--.\\__||__||__\n");
                printf("\t\t\t\t\t\t\t /__|___|___( >< )___|___|__\\\n");
                printf("\t\t\t\t\t\t\t           _/`--`\\_\n");
                printf("\t\t\t\t\t\t\t          (/------\\)\n"RESET);
                    printf(GRN"\t\t\t\t[1] - Comprar Tickets.\n"RESET);
                    printf(GRN"\t\t\t\t[2] - Voltar ao In�cio.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &comprar);

                    if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, voc� nos confia seus dados e informa��es, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confian�a.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a pol�tica de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos ser�o utilizados durante\n");
                    printf("\t\t\t\t a compra e navega��o do usu�rio. N�o compartilhamos essas informa��es sem sua permiss�o.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informa��es de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informa��es, estar�o sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informa��es acerca de pagamento como CNPJ e CPF, dados banc�rios e \n");
                    printf("\t\t\t\t n�mero de cart�es de cr�dito, porventura fornecidos, ser�o utilizados com \n");
                    printf("\t\t\t\t vistas �nica e exclusivamente para transa��es na hora da compra. N�o vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informa��es pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, voc� concorda com esses termos.\n");
                    printf("\t\t\t\t    Se n�o concordar, por favor, n�o continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - N�o Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);

                    printf(BROWN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(RED"\t\t\t\t|                            VOC� N�O CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. At� logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t\t\t\t\t(\\ \n");
                    printf("\t\t\t\t\t\t\t\t '\\\\ \n");
                    printf("\t\t\t\t\t\t\t\t   \\'\\     __________  \n");
                    printf("\t\t\t\t\t\t\t\t   / '|   ()_________)\n");
                    printf("\t\t\t\t\t\t\t\t   \\ '/    \\ ~~~~~~~~ \\ \n");
                    printf("\t\t\t\t\t\t\t\t     \\       \\ ~~~~~~   \\ \n");
                    printf("\t\t\t\t\t\t\t\t     ==).      \\__________\\\n");
                    printf("\t\t\t\t\t\t\t\t    (__)       ()__________)\n"RESET);
                    return 0;
                    }
                    switch (comprar) {
                        case 1:
                            system("cls");
                            printf(GRN"\t\t\t\t������������������������������� Valor do Ticket: R$10,00 ��������������������������������\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t��������������������������������� Dias de Funcionamento ���������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - S�bado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o dia: ");
                                    scanf("%d", &dia);
                                    }
                                    switch (dia) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: S�bado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: Domingo.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t������������������������������� Hor�rios de Funcionamento �������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: 18:00.\n");
                                            break;
                            }

                            printf(MAG"\n\t\t\t\t���������������������������� Limite de pessoa por sala: 15 ������������������������������\n"RESET);
                            printf("\t\t\t\tIngressos dispon�veis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o n�mero de pessoas que visitar�o: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAten��o! A quantidade de pessoas n�o dever� exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala est� lotada. N�o � poss�vel comprar mais ingressos para esse evento.\n"RESET);
                            system("pause");
                            }else{
                            ingressosVendidos[opcao - 1] += pessoas;
                            float precoIngresso = 10.0;
                            valorTotal += pessoas * precoIngresso;
                            system("cls");
                            printf(CYN"\n\t\t\t\t        .--'''''''''--.\n");
                            printf("\t\t\t\t     .'      .---.      '.\n");
                            printf("\t\t\t\t    /    .-----------.    \\\n");
                            printf("\t\t\t\t   /        .-----.        \\\n");
                            printf("\t\t\t\t   |       .-.   .-.       |\n");
                            printf("\t\t\t\t   |      /   \\ /   \\      |\n");
                            printf("\t\t\t\t    \\    | .-. | .-. |    /\n");
                            printf("\t\t\t\t     '-._| | | | | | |_.-'\n");
                            printf("\t\t\t\t         | '-' | '-' |\n");
                            printf("\t\t\t\t          \\___/ \\___/\n");
                            printf("\t\t\t\t       _.-'  /   \\  '-._\n");
                            printf("\t\t\t\t     .' _.--|     |--._ '.\tFalta pouco! Sua carteira pode estar mais leve,\n");
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experi�ncia est� prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHor�rio escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao In�cio.\n"RESET);
                            printf(CYN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParab�ns, a sua compra de tickets foi efetuada!\n\n"RESET);
                                    printf(YEL"\t\t\t\t      .--..--..--..--..--..--.\n");
                                    printf("\t\t\t\t    .' \\  (`._   (_)     _   \\\n");
                                    printf("\t\t\t\t  .'    |  '._)         (_)  |\n");
                                    printf("\t\t\t\t  \\ _.')\\      .----..---.   /\n");
                                    printf("\t\t\t\t  |(_.'  |    /    .-\\-.  \\  |\n");
                                    printf("\t\t\t\t  \\     0|    |   ( O| O) | o|\n");
                                    printf("\t\t\t\t   |  _  |  .--.____.'._.-.  |\n");
                                    printf("\t\t\t\t   \\ (_) | o         -` .-`  |\n");
                                    printf("\t\t\t\t    |    \\   |`-._ _ _ _ _\\ /\n");
                                    printf("\t\t\t\t    \\    |   |  `. |_||_|   |\n");
                                    printf("\t\t\t\t    | o  |    \\_      \\     |     -.   .-.\n");
                                    printf("\t\t\t\t    |.-.  \\     `--..-'   O |     `.`-' .'\n");
                                    printf("\t\t\t\t  _.'  .' |     `-.-'      /-.__   ' .-'\n");
                                    printf("\t\t\t\t .' `-.` '.|='=.='=.='=.='=|._/_ `-'.  \n");
                                    printf("\t\t\t\t`-._  `.  |________/\\_____|    `-.-.\n");
                                    printf("\t\t\t\t   .'   ).| '=' '='\\/ '=' |       \n");
                                    printf("\t\t\t\t   `._.`  '---------------'         \n");
                                    printf("\t\t\t\t           //___\\   //___\\      \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t            (_.--__) (_.--__)          \n\n"RESET);
                                    system("pause");
                                    ingressosDisponiveis[opcao - 1][dia - 1] -= pessoas;
                                    break;
                                    case 2:
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao In�cio.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOp��o inv�lida. Voltando ao In�cio.\n\n"RESET);
                        }
                        break;
                            }
                            system("pause");
                            valorTotal = 0.0;
                        }
                        } else if (comprar ==2) {
                    }
                break;
            case 3:
                system("cls");
                printf(BLU"\t\t\t\t������������������������������ Jogos Ol�mpicos de Paris 2024 ����������������������������"RESET);
                printf("\n\n\t\t\t\tNo ano de 2024 a cerim�nia dos jogos ol�mpicos n�o ser� em um est�dio, em vez disso ele se passa no Sena,\n");
                printf("\t\t\to rio mais famoso que atravessa o centro inteiro de Paris.\n");
                printf("\t\t\t\tIsso acontecer� pela primeira vez na hist�ria dos jogos ol�mpicos em Paris.\n");
                printf("\t\t\t\tCerca de 10.500 atletas ir�o desfilar pelo centro inteiro da cidade, o desfile ir� terminar em frente ao Trocad�ro,\n");
                printf("\t\t\tonde se encontram v�rios complexos de edif�cios, jardins e pra�as, e tamb�m oferece uma boa vista da Torre Eiffel.\n");
                printf("\t\t\t\tEste ano de 2024 teremos um novo esporte como modalidade ol�mpica.\n");
                printf("\t\t\t\tEsse novo esporte BREAKING, os atletas ter�o que demonstrar habilidades atrav�s de improvisa��o\n");
                printf("\t\t\te movimentos que precisa estar tudo core�grafados junto ao ritmo das m�sicas.\n");
                printf("\t\t\t\tOs primeiros jogos ol�mpicos em Paris se passaram em 1900. Apenas 24 pa�ses foram representados por 997 atletas.\n");
                printf("\t\t\t\tE desde a antiguidade, os jogos ol�mpicos come�aram  a ser um evento com muito destaque para todos os pa�ses,\n");
                printf("\t\t\tpois era uma forma de fazer v�rias amizades e ter uni�o com outros pa�ses e ter paz,\n");
                printf("\t\t\te trazer varios investimentos para infraestrutura,\n");
                printf("\t\t\tturismo, com�rcio e ter uma melhoria na qualidade de vida das popula��es locais.\n");
                printf("\t\t\t\tCom a  evolu��o dos esportes e modalidades nos jogos ol�mpicos, foram surgindo tamb�m atletas lend�rios\n");
                printf("\t\t\tcomo o , Usain Bolt, Michael Phelps, Simone Biles e Nadia Comaneci.\n");
                printf("\t\t\t\tParis �nsia imensamente, receber todos os desafios poss�veis das olimp�adas de 2024.\n");
                printf("\t\t\t\tA Cidade est� se dedicando muito para, suas infraestrutura esportiva,\n");
                printf("\t\t\te construindo novas instala��es para garantir todos os cuidados poss�veis de atletas e dos espectadores.\n");
                printf("\t\t\t\tParis est� tamb�m determinada a mostrar ao mundo inteiro, sua capacidade de ter uma organiza��o excelente\n");
                printf("\t\t\te tornar essa olimp�ada a mais memor�vel no mundo inteiro.\n");
                printf(BLU"\t\t\t\t\t\t     .,::OOO::,.     .,ooOOOoo,.     .,::OOO::,.\n"RESET);
                printf("\t\t\t\t\t\t    .:'         `:. .8'         `8. .:'         `:.\n");
                printf(RED"\t\t\t\t\t\t    :\"           \": 8\"           \"8 :\"           \":\n"RESET);
                printf(YEL"\t\t\t\t\t\t    :,        .,:::\"\"\"::,.     .,:o8OO::,.        ,:\n"RESET);
                printf(GRN"\t\t\t\t\t\t     :,,    .:' ,:   8oo`:. .:'oo8   :,,`:.    ,,:  \n"RESET);
                printf(BLU"\t\t\t\t\t\t      `^OOoo:\"O^'     `^88oo:\"8^'     `^O\":ooOO^'   \n"RESET);
                printf("\t\t\t\t\t\t            :,           ,: :,           ,:         \n");
                printf(RED"\t\t\t\t\t\t             :,,       ,,:   :,,       ,,:          \n"RESET);
                printf(YEL"\t\t\t\t\t\t              `^Oo,,,oO^'     `^OOoooOO^'           \n"RESET);

                    printf(GRN"\n\t\t\t\t[1] - Comprar Tickets.\n"RESET);
                    printf(GRN"\t\t\t\t[2] - Voltar ao In�cio.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &comprar);

                    if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, voc� nos confia seus dados e informa��es, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confian�a.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a pol�tica de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos ser�o utilizados durante\n");
                    printf("\t\t\t\t a compra e navega��o do usu�rio. N�o compartilhamos essas informa��es sem sua permiss�o.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informa��es de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informa��es, estar�o sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informa��es acerca de pagamento como CNPJ e CPF, dados banc�rios e \n");
                    printf("\t\t\t\t n�mero de cart�es de cr�dito, porventura fornecidos, ser�o utilizados com \n");
                    printf("\t\t\t\t vistas �nica e exclusivamente para transa��es na hora da compra. N�o vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informa��es pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, voc� concorda com esses termos.\n");
                    printf("\t\t\t\t    Se n�o concordar, por favor, n�o continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - N�o Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);

                    printf(BROWN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(RED"\t\t\t\t|                            VOC� N�O CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. At� logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t\t\t\t\t(\\ \n");
                    printf("\t\t\t\t\t\t\t\t '\\\\ \n");
                    printf("\t\t\t\t\t\t\t\t   \\'\\     __________  \n");
                    printf("\t\t\t\t\t\t\t\t   / '|   ()_________)\n");
                    printf("\t\t\t\t\t\t\t\t   \\ '/    \\ ~~~~~~~~ \\ \n");
                    printf("\t\t\t\t\t\t\t\t     \\       \\ ~~~~~~   \\ \n");
                    printf("\t\t\t\t\t\t\t\t     ==).      \\__________\\\n");
                    printf("\t\t\t\t\t\t\t\t    (__)       ()__________)\n"RESET);
                    return 0;
                    }
                    switch (comprar) {
                        case 1:
                            system("cls");
                            printf(GRN"\t\t\t\t������������������������������� Valor do Ticket: R$10,00 ��������������������������������\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t��������������������������������� Dias de Funcionamento ���������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - S�bado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o dia: ");
                                    scanf("%d", &dia);
                                    }
                                    switch (dia) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: S�bado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: Domingo.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t������������������������������� Hor�rios de Funcionamento �������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: 18:00.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t���������������������������� Limite de pessoa por sala: 15 ������������������������������\n"RESET);
                            printf("\t\t\t\tIngressos dispon�veis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o n�mero de pessoas que visitar�o: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAten��o! A quantidade de pessoas n�o dever� exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala est� lotada. N�o � poss�vel comprar mais ingressos para esse evento.\n"RESET);
                            system("pause");
                            }else{
                            ingressosVendidos[opcao - 1] += pessoas;
                            float precoIngresso = 10.0;
                            valorTotal += pessoas * precoIngresso;
                            system("cls");
                            printf(CYN"\n\t\t\t\t        .--'''''''''--.\n");
                            printf("\t\t\t\t     .'      .---.      '.\n");
                            printf("\t\t\t\t    /    .-----------.    \\\n");
                            printf("\t\t\t\t   /        .-----.        \\\n");
                            printf("\t\t\t\t   |       .-.   .-.       |\n");
                            printf("\t\t\t\t   |      /   \\ /   \\      |\n");
                            printf("\t\t\t\t    \\    | .-. | .-. |    /\n");
                            printf("\t\t\t\t     '-._| | | | | | |_.-'\n");
                            printf("\t\t\t\t         | '-' | '-' |\n");
                            printf("\t\t\t\t          \\___/ \\___/\n");
                            printf("\t\t\t\t       _.-'  /   \\  '-._\n");
                            printf("\t\t\t\t     .' _.--|     |--._ '.\tFalta pouco! Sua carteira pode estar mais leve,\n");
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experi�ncia est� prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHor�rio escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao In�cio.\n"RESET);
                            printf(CYN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParab�ns, a sua compra de tickets foi efetuada!\n\n"RESET);
                                    printf(YEL"\t\t\t\t      .--..--..--..--..--..--.\n");
                                    printf("\t\t\t\t    .' \\  (`._   (_)     _   \\\n");
                                    printf("\t\t\t\t  .'    |  '._)         (_)  |\n");
                                    printf("\t\t\t\t  \\ _.')\\      .----..---.   /\n");
                                    printf("\t\t\t\t  |(_.'  |    /    .-\\-.  \\  |\n");
                                    printf("\t\t\t\t  \\     0|    |   ( O| O) | o|\n");
                                    printf("\t\t\t\t   |  _  |  .--.____.'._.-.  |\n");
                                    printf("\t\t\t\t   \\ (_) | o         -` .-`  |\n");
                                    printf("\t\t\t\t    |    \\   |`-._ _ _ _ _\\ /\n");
                                    printf("\t\t\t\t    \\    |   |  `. |_||_|   |\n");
                                    printf("\t\t\t\t    | o  |    \\_      \\     |     -.   .-.\n");
                                    printf("\t\t\t\t    |.-.  \\     `--..-'   O |     `.`-' .'\n");
                                    printf("\t\t\t\t  _.'  .' |     `-.-'      /-.__   ' .-'\n");
                                    printf("\t\t\t\t .' `-.` '.|='=.='=.='=.='=|._/_ `-'.  \n");
                                    printf("\t\t\t\t`-._  `.  |________/\\_____|    `-.-.\n");
                                    printf("\t\t\t\t   .'   ).| '=' '='\\/ '=' |       \n");
                                    printf("\t\t\t\t   `._.`  '---------------'         \n");
                                    printf("\t\t\t\t           //___\\   //___\\      \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t            (_.--__) (_.--__)          \n\n"RESET);
                                    system("pause");
                                    ingressosDisponiveis[opcao - 1][dia - 1] -= pessoas;
                                    break;
                                    case 2:
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao In�cio.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOp��o inv�lida. Voltando ao In�cio.\n\n"RESET);
                        }
                        break;
                            }
                            system("pause");
                            valorTotal = 0.0;
                        }
                        } else if (comprar ==2) {
                    }
                break;
            case 4:
                system("cls");
                printf(BLU"\t\t\t\t������������������������� Antiguidade Cl�ssica: Gr�cia e Roma Antiga ��������������������"RESET);
                printf("\n\n\t\t\tA Gr�cia e Roma foram importantes civiliza��es da antiguidade cl�ssica, que foi um longo per�odo na hist�ria da Europa.\n");
                printf("\t\t\tPodemos notar que herdamos diversas coisas dessas duas civiliza��es.\n");
                printf("\t\t\tSendo elas vindas da Gr�cia: a monarquia, tirania, democracia, hegemonia,\n");
                printf("\t\tconceitos filos�ficos como o antropocentrismo, idealismo e racionalismo.\n");
                printf("\t\t\tE vindas da Roma antiga temos o conceito de cidadania e justi�a, a l�ngua latina e o cristianismo.\n");
                printf("\t\t\tA seguir, h� muitos per�odos hist�ricos envolvendo esses povos e a Europa.\n\n");
                printf("\t\t\tNa ordem cronol�gica temos:\n");
                printf(BROWN"\t\t1. Per�odo Pr�-Hom�rico (2000 � 1200 a.C.)\n");
                printf("\t\t2. Per�odo Hom�rico (1100 � 800 a.C.)\n");
                printf("\t\t3. Per�odo Arcaico (800 - 600 a.C.)\n");
                printf("\t\t4. Per�odo Cl�ssico (500 - 400 a.C.)\n");
                printf("\t\t5. Per�odo Helen�stico (300 � 200 a.C.)\n");
                printf("\t\t6. Monarquia (753 � 509 a.C.)\n");
                printf("\t\t7. Rep�blica (509 - 27 a.C.)\n");
                printf("\t\t8. Imp�rio (27 a.C. - 476 d.C.)\n"RESET);
                printf("\n\t\t\tPor serem civiliza��es pr�ximas, Roma se espelhava na Gr�cia. Com o passar do tempo,\n");
                printf("\t\tRoma coloca o homem no centro do universo, adotando o pensamento do antropocentrismo da Gr�cia.\n");
                printf("\t\t- Ambos s�o polite�stas, e muitos deuses gregos foram adaptados para o pensamento religioso romano.\n");
                printf("\t\t- Ambas tinham como base da economia a escravid�o.\n");
                printf("\t\t- A Gr�cia antiga teve o renascimento da democracia, j� em Roma n�o h� democracia.\n");
                printf("\t\t\tA forma como essas civiliza��es marcaram a humanidade � justific�vel por ser t�o cobrada em estudos hist�ricos.\n");
                printf(BROWN"\t\t\t\t\t   ^    / \\:/ \\      ^               +                        |>\n");
                printf("\t\t\t\t\t  / \\      ^        / \\        *    / \\    *              |>  |\n");
                printf("\t\t\t\t\t /   \\             /   \\      OnO  :xxx:  OnO             |  III     |>\n");
                printf("\t\t\t\t\t(_____)           (_____)     I I   I I   I I           /-|\\ III i>  |\n");
                printf("\t\t\t\t\t |   |  _   _   _  |   |      I I   I I   I I         _|__|__III i   ^\n");
                printf("\t\t\t\t\t | O |_| |_| |_| |_| O |     O_O_O_O_O_O_O_O_O     |>\\______/III i  ^^^\n");
                printf("\t\t\t\t\t |   |   - _^_     |   |     \\_______________/     |   !__!__III/\\ ^^^^^\n");
                printf("\t\t\t\t\t |  _|    //|\\\\  - |   |      I     ___     I     /\\ ////|====IIII ===\n");
                printf("\t\t\t\t\t |   |   ///|\\\\   |  -|      I    / i \\    I    /\\\\/////|====IIII ===\n");
                printf("\t\t\t\t\t |-  |_  |||||||   |   |      I   I: i :I   I    | | ||||::::::IIII ===\n");
                printf("\t\t\t\t\t |   |   |||||||   |-  |      I___I:_i_:I___I    | | ||||      IIII ===\n");
                printf("\t\t\t\t\t |___|___|||||||___|___|                         -----------------------\n"RESET);
                    printf(GRN"\n\t\t\t\t[1] - Comprar Tickets.\n"RESET);
                    printf(GRN"\t\t\t\t[2] - Voltar ao In�cio.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &comprar);

                if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, voc� nos confia seus dados e informa��es, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confian�a.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a pol�tica de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos ser�o utilizados durante\n");
                    printf("\t\t\t\t a compra e navega��o do usu�rio. N�o compartilhamos essas informa��es sem sua permiss�o.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informa��es de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informa��es, estar�o sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informa��es acerca de pagamento como CNPJ e CPF, dados banc�rios e \n");
                    printf("\t\t\t\t n�mero de cart�es de cr�dito, porventura fornecidos, ser�o utilizados com \n");
                    printf("\t\t\t\t vistas �nica e exclusivamente para transa��es na hora da compra. N�o vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informa��es pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, voc� concorda com esses termos.\n");
                    printf("\t\t\t\t    Se n�o concordar, por favor, n�o continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - N�o Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);

                    printf(BROWN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(RED"\t\t\t\t|                            VOC� N�O CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. At� logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t�����������������������������������������������������������������������������������������\n"RESET);
                    printf(BROWN"\t\t\t\t\t\t\t\t(\\ \n");
                    printf("\t\t\t\t\t\t\t\t '\\\\ \n");
                    printf("\t\t\t\t\t\t\t\t   \\'\\     __________  \n");
                    printf("\t\t\t\t\t\t\t\t   / '|   ()_________)\n");
                    printf("\t\t\t\t\t\t\t\t   \\ '/    \\ ~~~~~~~~ \\ \n");
                    printf("\t\t\t\t\t\t\t\t     \\       \\ ~~~~~~   \\ \n");
                    printf("\t\t\t\t\t\t\t\t     ==).      \\__________\\\n");
                    printf("\t\t\t\t\t\t\t\t    (__)       ()__________)\n"RESET);
                    return 0;
                    }
                    switch (comprar) {
                        case 1:
                            system("cls");
                            printf(GRN"\t\t\t\t������������������������������� Valor do Ticket: R$10,00 ��������������������������������\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t��������������������������������� Dias de Funcionamento ���������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - S�bado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o dia: ");
                                    scanf("%d", &dia);
                                    }
                                    switch (dia) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: S�bado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: Domingo.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t������������������������������� Hor�rios de Funcionamento �������������������������������\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                                    printf("\t\t\t\t                    ||| ( c  )                  ____\n");
                                    printf("\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                                    printf("\t\t\t\t                       ||||||                   ||     |\n");
                                    printf("\t\t\t\t                       ||||||                ...||__/|\"-\n");
                                    printf("\t\t\t\t                       ||||||             __|________|__\n");
                                    printf("\t\t\t\t                        |||             |______________|\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t                        |||             || ||      || ||\n");
                                    printf("\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                                    printf("\t\t\t\t                        |__>            || ||      || ||\n"RESET);
                                    printf(MAG"\n\t\t\t\tSelecione o hor�rio: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOp��o selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOp��o selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOp��o selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOp��o selecionada: 18:00.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t���������������������������� Limite de pessoa por sala: 15 ������������������������������\n"RESET);
                            printf("\t\t\t\tIngressos dispon�veis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o n�mero de pessoas que visitar�o: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAten��o! A quantidade de pessoas n�o dever� exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala est� lotada. N�o � poss�vel comprar mais ingressos para esse evento.\n"RESET);
                            system("pause");
                            }else{
                            ingressosVendidos[opcao - 1] += pessoas;
                            float precoIngresso = 10.0;
                            valorTotal += pessoas * precoIngresso;
                            system("cls");
                            printf(CYN"\n\t\t\t\t        .--'''''''''--.\n");
                            printf("\t\t\t\t     .'      .---.      '.\n");
                            printf("\t\t\t\t    /    .-----------.    \\\n");
                            printf("\t\t\t\t   /        .-----.        \\\n");
                            printf("\t\t\t\t   |       .-.   .-.       |\n");
                            printf("\t\t\t\t   |      /   \\ /   \\      |\n");
                            printf("\t\t\t\t    \\    | .-. | .-. |    /\n");
                            printf("\t\t\t\t     '-._| | | | | | |_.-'\n");
                            printf("\t\t\t\t         | '-' | '-' |\n");
                            printf("\t\t\t\t          \\___/ \\___/\n");
                            printf("\t\t\t\t       _.-'  /   \\  '-._\n");
                            printf("\t\t\t\t     .' _.--|     |--._ '.\tFalta pouco! Sua carteira pode estar mais leve,\n");
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experi�ncia est� prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHor�rio escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao In�cio.\n"RESET);
                            printf(CYN"\n\t\t\t\t������������������������������� Digite a op��o desejada: ��������������������������������\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParab�ns, a sua compra de tickets foi efetuada!\n\n"RESET);
                                    printf(YEL"\t\t\t\t      .--..--..--..--..--..--.\n");
                                    printf("\t\t\t\t    .' \\  (`._   (_)     _   \\\n");
                                    printf("\t\t\t\t  .'    |  '._)         (_)  |\n");
                                    printf("\t\t\t\t  \\ _.')\\      .----..---.   /\n");
                                    printf("\t\t\t\t  |(_.'  |    /    .-\\-.  \\  |\n");
                                    printf("\t\t\t\t  \\     0|    |   ( O| O) | o|\n");
                                    printf("\t\t\t\t   |  _  |  .--.____.'._.-.  |\n");
                                    printf("\t\t\t\t   \\ (_) | o         -` .-`  |\n");
                                    printf("\t\t\t\t    |    \\   |`-._ _ _ _ _\\ /\n");
                                    printf("\t\t\t\t    \\    |   |  `. |_||_|   |\n");
                                    printf("\t\t\t\t    | o  |    \\_      \\     |     -.   .-.\n");
                                    printf("\t\t\t\t    |.-.  \\     `--..-'   O |     `.`-' .'\n");
                                    printf("\t\t\t\t  _.'  .' |     `-.-'      /-.__   ' .-'\n");
                                    printf("\t\t\t\t .' `-.` '.|='=.='=.='=.='=|._/_ `-'.  \n");
                                    printf("\t\t\t\t`-._  `.  |________/\\_____|    `-.-.\n");
                                    printf("\t\t\t\t   .'   ).| '=' '='\\/ '=' |       \n");
                                    printf("\t\t\t\t   `._.`  '---------------'         \n");
                                    printf("\t\t\t\t           //___\\   //___\\      \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t             ||       ||     \n");
                                    printf("\t\t\t\t            (_.--__) (_.--__)          \n\n"RESET);
                                    system("pause");
                                    ingressosDisponiveis[opcao - 1][dia - 1] -= pessoas;
                                    break;
                                    case 2:
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao In�cio.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOp��o inv�lida. Voltando ao In�cio.\n\n"RESET);
                        }
                        break;
                            }
                            system("pause");
                            valorTotal = 0.0;
                        }
                        } else if (comprar ==2) {
                    }
                break;
    case 0:
    system("cls");
    printf(BROWN"\t\t\t                                                     ___\n");
    printf("\t\t\t                                             ___..--'  .`.\n");
    printf("\t\t\t                                    ___...--'     -  .` `.`.\n");
    printf("\t\t\t                           ___...--' _      -  _   .` -   `.`.\n");
    printf("\t\t\t                  ___...--'  -       _   -       .`  `. - _ `.`.\n");
    printf("\t\t\t           __..--'_______________ -         _  .`  _   `.   - `.`.\n");
    printf("\t\t\t        .`    _ /\\    -        .`      _     .`__________`. _  -`.`.\n");
    printf("\t\t\t      .` -   _ /  \\_     -   .`  _         .` |Sa�da Museu|`.   - `.`.\n");
    printf("\t\t\t    .`-    _  /   /\\   -   .`        _   .`   |___________|  `. _   `.`.\n");
    printf("\t\t\t  .`________ /__ /_ \\____.`____________.`     ___       ___  - `._____`|\n"RESET);
    printf("\t\t\t    |   -  __  -|    | - |  ____  |   | | _  |   |  _  |   |  _ |\n");
    printf("\t\t\t    | _   |  |  | -  |   | |.--.| |___| |    |___|     |___|    |\n");
    printf("\t\t\t    |     |--|  |    | _ | |'--'| |---| |   _|---|     |---|_   |\n");
    printf("\t\t\t    |   - |__| _|  - |   | |.--.| |   | |    |   |_  _ |   |    |\n");
    printf("\t\t\t ---``--._      |    |   |=|'--'|=|___|=|====|___|=====|___|====|\n");
    printf("\t\t\t -- . ''  ``--._| _  |  -|_|.--.|_______|_______________________|\n");
    printf("\t\t\t`--._           '--- |_  |:|'--'|:::::::|:::::::::::::::::::::::|\n");
    printf("\t\t\t_____`--._ ''      . '---'``--._|:::::::|:::::::::::::::::::::::|\n");
    printf("\t\t\t----------`--._          ''      ``--.._|:::::::::::::::::::::::|\n");
    printf("\t\t\t`--._ _________`--._'        --     .   ''-----.................'\n");
    printf(GRN"\t\t\t     `--._----------`--._.  _           -- . :''           -    ''\n"RESET);
    printf("\t\t\t -- . ''  ``--._          ''      -- . :'              -- . ''\n");
    printf("\t\t\t          :'        `--._ _________`--._:'  -- . ''      -- . ''\n");
    printf(GRN"\t\t\t  -- . ''     -- . ''    `--._----------`--._      -- . ''     -- . ''\n"RESET);
    printf("\t\t\t        .            .   . *    .   .      `--._          ''   ____ - ^^\n");
    printf("\t\t\t             .                 .           _.-'   `--._\n");
    printf("\t\t\t        '                           .  _.-'             `---...__\n");
    printf("\t\t\t  __    +      *                         `'                   `--..__\n");
    printf(GRN"\t\t\t\"'  `---\"\"----....____,..^---`^``----.,.___                          `-\n");
    printf("\t\t\t    ___,--'\"\"`---\"'   ^  ^ ^        ^       \"\"\"'---,..___ __,..---\"\"'\n");
    printf("\t\t\t--\"' ___        __--           ^    _____                     ``--..,__\n"RESET);
    sair_while=1;

            break;

            default:
                system("cls");
                printf(WHT"\t\t\t\t\t              _\n");
                printf("\t\t\t\t\t             | |                    Erro no sistema. \n");
                printf("\t\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                printf("\t\t\t\t\t             |_|   |||  | o o|      uma op��o v�lida \n");
                printf("\t\t\t\t\t                    ||| ( c  )                  ____\n");
                printf("\t\t\t\t\t                     ||| \\= /                   ||   \\_\n");
                printf("\t\t\t\t\t                       ||||||                   ||     |\n");
                printf("\t\t\t\t\t                       ||||||                ...||__/|\"-\n");
                printf("\t\t\t\t\t                       ||||||             __|________|__\n");
                printf("\t\t\t\t\t                        |||             |______________|\n");
                printf("\t\t\t\t\t                        |||             || ||      || ||\n");
                printf("\t\t\t\t\t                        |||             || ||      || ||\n");
                printf("\t\t\t\t\t------------------------|||-------------||-||------||-||-------\n");
                printf("\t\t\t\t\t                        |__>            || ||      || ||\n\n\n"RESET);
                system("pause");
        }
    }

    return 0;
}
