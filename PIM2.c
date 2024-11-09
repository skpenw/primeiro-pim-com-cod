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
    char* nomesDias[] = {"Quinta-Feira", "Sexta-Feira", "Sábado", "Domingo"};
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
    printf("\t\t\t\t\t                 \\`--._.__    SAUDAÇÕES!    __._,--'/\n");
    printf("\t\t\t\t\t                   \\  ,. l`~~~~~~~~~~~~~~~'l ,.  /\n"RESET);
    printf(CYN"\t\t\t\t\t       __            \\||(_)!_!_!_.-._!_!_!(_)||/            __\n");
    printf(BLU"\t\t\t\t\t       \\\\`-.__        ||_|____!!_|;|_!!____|_||        __,-'//\n");
    printf("\t\t\t\t\t        \\\\    `==---='-----------'='-----------`=---=='    //\n");
    printf("\t\t\t\t\t         | `--.     VOCÊ ESTÁ NO MUSEU MULTITEMÁTICO    ,--'|\n");
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
    printf("\t\t _I__I__|  ||/|__|__|__|__|__|__|_|| [3] - Jogos Olímpicos de Paris 2024             ||_|__|__|__|__|__|__|\\||- |__I__I_\n");
    printf("\t\t -|--|--|- ||-|--|--|--|--|--|--|-|| [4] - Antiguidade Clássica: Grécia e Roma Antiga||-|--|--|--|--|--|--|-||= |--|--|-\n");
    printf("\t\t  |  |  |  || |  |  |  |  |  |  | || [0] - Sair                                      || |  |  |  |  |  |  | ||  |  |  |\n");
    printf("\t\t  |  |  |= || |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||= |  |  |\n");
    printf("\t\t  |  |  |- || |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||= |  |  |\n");
    printf("\t\t  |  |  |- || |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||- |  |  | \n");
    printf("\t\t _|__|__|  ||_|__|__|__|__|__|__|_||                                                 ||_|__|__|__|__|__|__|_||  |__|__|_\n");
    printf("\t\t -|--|--|= ||-|--|--|--|--|--|--|-||    §§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§       ||-|--|--|--|--|--|--|-||- |--|--|-\n");
    printf("\t\t -|--|--|| |  |  |  |  |  |  |  | ||                                                 || |  |  |  |  |  |  | ||  |  |  | \n"RESET);
    printf(GRN"\t\t ~~~~~~~~~~~^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~~~~\n\t\t ");
    scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                printf(BLU"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ 100 Anos da Semana da Arte Moderna ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨"RESET);
                printf("\n\n\t\t\t\tSemana de Arte Moderna de 1922 é um marco cultural e histórico no Brasil,\n");
                printf("\t\t\tnotável por desafiar as tradições artísticas do século 19.\n");
                printf("\t\t\t\tO evento, realizado no Theatro Municipal de São Paulo de 13 a 17 de fevereiro de 1922,\n");
                printf("\t\t\tum movimento de renovação artística e cultural no país.\n");
                printf("\t\t\t\tReuniu diversas formas de expressão, como dança, música, poesia, pintura e escultura, além de palestras.\n");
                printf("\t\t\t\tOs artistas envolvidos propunham uma nova visão de arte, a partir de uma estética inovadora\n");
                printf("\t\t\tinspirada nas vanguardas europeias,\n");
                printf("\t\t\tentre esses artistas estava incluído, Heitor Villa-Lobos, Tácito de Almeida, Di Cavalcanti, Guiomar Novaes,\n");
                printf("\t\t\tZina Aita, Mário de Andrade e Victor Brecheret.\n");
                printf("\t\t\t\tEles almejavam uma estética inovadora que refletisse uma identidade cultural brasileira mais contemporânea,\n");
                printf("\t\t\tmas enraizada em suas próprias raízes.\n");
                printf("\t\t\t\tEssa semana representou um desafio às normas culturais estabelecidas, criando uma visão artística mais brasileira.\n");
                printf("\t\t\t\tToda essa mudança e modernismo, chocou a sociedade e com isso eles receberam muitas críticas,\n");
                printf("\t\t\tpois as pessoas ficaram desconfortáveis com tais apresentações e não conseguiram entender essa nova mudança na arte,\n");
                printf("\t\t\te com essa reação e crítica do público ficou claro que as pessoas não estavam prontas para entender\n");
                printf("\t\t\te apreciar esses novos estilos artísticos.\n");
                printf("\t\t\t\tAssim, a Semana de Arte Moderna de 1922 foi uma verdadeira quebra de paradigmas,\n");
                printf("\t\t\ttrazendo uma nova forma de ver a cultura brasileira,com elementos locais, mas também abraçando influências de fora.\n");
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
                    printf(GRN"\t\t\t\t[2] - Voltar ao Início.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &comprar);

                    if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, você nos confia seus dados e informações, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confiança.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a política de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos serão utilizados durante\n");
                    printf("\t\t\t\t a compra e navegação do usuário. Não compartilhamos essas informações sem sua permissão.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informações de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informações, estarão sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informações acerca de pagamento como CNPJ e CPF, dados bancários e \n");
                    printf("\t\t\t\t número de cartões de crédito, porventura fornecidos, serão utilizados com \n");
                    printf("\t\t\t\t vistas única e exclusivamente para transações na hora da compra. Não vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informações pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, você concorda com esses termos.\n");
                    printf("\t\t\t\t    Se não concordar, por favor, não continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - Não Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);

                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(RED"\t\t\t\t|                            VOCÊ NÃO CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. Até logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
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
                            printf(GRN"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Valor do Ticket: R$10,00 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Dias de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - Sábado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                            printf("\t\t\t\tOpção selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: Sábado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: Domingo.\n");
                                            break;
                                    }
                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Horários de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o horário: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                    printf(MAG"\n\t\t\t\tSelecione o horário: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOpção selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: 18:00.\n");
                                            break;
                                    }
                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Limite de pessoa por sala: 15 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\tIngressos disponíveis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o número de pessoas que visitarão: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAtenção! A quantidade de pessoas não deverá exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala está lotada. Não é possível comprar mais ingressos para esse evento.\n"RESET);
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
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experiência está prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHorário escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao Início.\n"RESET);
                            printf(CYN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParabéns, a sua compra de tickets foi efetuada!\n\n"RESET);
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
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao Início.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOpção inválida. Voltando ao Início.\n\n"RESET);
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
                printf(BLU"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ 150 Anos de Santos Dumont ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨"RESET);
                printf("\n\n\t\t\t\tSantos Dumont foi um importante inventor e pioneiro da aviação brasileira.\n");
                printf("\t\t\t\tEle nasceu em 20 de julho de 1873, em Minas Gerais.\n");
                printf("\t\t\te é considerado o pai da aviação por suas contribuições significativas\n");
                printf("\t\t\tpara o desenvolvimento de aeronaves mais leves que o ar.\n");
                printf("\t\t\t\tAo longo de sua vida, Santos Dumont projetou e construiu diversos balões e dirigíveis,\n");
                printf("\t\t\tsendo o mais famoso deles o 14 Bis,\n");
                printf("\t\t\tque realizou o primeiro voo controlado e motorizado em 23 de outubro de 1906, em Paris.\n");
                printf("\t\t\t\tAlém disso, ele também foi responsável por diversas outras invenções, como o relógio de pulso\n");
                printf("\t\t\te a cadeira com rodas para pessoas com mobilidade reduzida.\n");
                printf("\t\t\t\tInfelizmente, Santos Dumont enfrentou problemas pessoais e acabou se suicidando em 23 de julho de 1932.\n");
                printf("\t\t\t\tNo entanto, seu legado como um dos grandes nomes da aviação mundial permanece até hoje.\n");
                printf("\t\t\t\tPara celebrar os 150 anos do nascimento de Santos Dumont, é importante lembrar sua importância histórica\n");
                printf("\t\t\te suas contribuições para a ciência e tecnologia.\n");
                printf(BLU"\t\t\t\tSua coragem e determinação abriram caminho para os avanços que temos na aviação atualmente.\n\n"RESET);
                printf(CYN"\t\t\t\t\t\t\t            __/\\__\n");
                printf("\t\t\t\t\t\t\t           `==/\\==`\n");
                printf("\t\t\t\t\t\t\t ____________/__\\____________\n");
                printf("\t\t\t\t\t\t\t/____________________________\\\n");
                printf("\t\t\t\t\t\t\t  __||__||__/.--.\\__||__||__\n");
                printf("\t\t\t\t\t\t\t /__|___|___( >< )___|___|__\\\n");
                printf("\t\t\t\t\t\t\t           _/`--`\\_\n");
                printf("\t\t\t\t\t\t\t          (/------\\)\n"RESET);
                    printf(GRN"\t\t\t\t[1] - Comprar Tickets.\n"RESET);
                    printf(GRN"\t\t\t\t[2] - Voltar ao Início.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &comprar);

                    if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, você nos confia seus dados e informações, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confiança.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a política de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos serão utilizados durante\n");
                    printf("\t\t\t\t a compra e navegação do usuário. Não compartilhamos essas informações sem sua permissão.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informações de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informações, estarão sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informações acerca de pagamento como CNPJ e CPF, dados bancários e \n");
                    printf("\t\t\t\t número de cartões de crédito, porventura fornecidos, serão utilizados com \n");
                    printf("\t\t\t\t vistas única e exclusivamente para transações na hora da compra. Não vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informações pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, você concorda com esses termos.\n");
                    printf("\t\t\t\t    Se não concordar, por favor, não continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - Não Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);

                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(RED"\t\t\t\t|                            VOCÊ NÃO CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. Até logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
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
                            printf(GRN"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Valor do Ticket: R$10,00 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Dias de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - Sábado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                            printf("\t\t\t\tOpção selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: Sábado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: Domingo.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Horários de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o horário: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                    printf(MAG"\n\t\t\t\tSelecione o horário: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOpção selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: 18:00.\n");
                                            break;
                            }

                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Limite de pessoa por sala: 15 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\tIngressos disponíveis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o número de pessoas que visitarão: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAtenção! A quantidade de pessoas não deverá exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala está lotada. Não é possível comprar mais ingressos para esse evento.\n"RESET);
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
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experiência está prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHorário escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao Início.\n"RESET);
                            printf(CYN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParabéns, a sua compra de tickets foi efetuada!\n\n"RESET);
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
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao Início.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOpção inválida. Voltando ao Início.\n\n"RESET);
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
                printf(BLU"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Jogos Olímpicos de Paris 2024 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨"RESET);
                printf("\n\n\t\t\t\tNo ano de 2024 a cerimônia dos jogos olímpicos não será em um estádio, em vez disso ele se passa no Sena,\n");
                printf("\t\t\to rio mais famoso que atravessa o centro inteiro de Paris.\n");
                printf("\t\t\t\tIsso acontecerá pela primeira vez na história dos jogos olímpicos em Paris.\n");
                printf("\t\t\t\tCerca de 10.500 atletas irão desfilar pelo centro inteiro da cidade, o desfile irá terminar em frente ao Trocadéro,\n");
                printf("\t\t\tonde se encontram vários complexos de edifícios, jardins e praças, e também oferece uma boa vista da Torre Eiffel.\n");
                printf("\t\t\t\tEste ano de 2024 teremos um novo esporte como modalidade olímpica.\n");
                printf("\t\t\t\tEsse novo esporte BREAKING, os atletas terão que demonstrar habilidades através de improvisação\n");
                printf("\t\t\te movimentos que precisa estar tudo coreógrafados junto ao ritmo das músicas.\n");
                printf("\t\t\t\tOs primeiros jogos olímpicos em Paris se passaram em 1900. Apenas 24 países foram representados por 997 atletas.\n");
                printf("\t\t\t\tE desde a antiguidade, os jogos olímpicos começaram  a ser um evento com muito destaque para todos os países,\n");
                printf("\t\t\tpois era uma forma de fazer várias amizades e ter união com outros países e ter paz,\n");
                printf("\t\t\te trazer varios investimentos para infraestrutura,\n");
                printf("\t\t\tturismo, comércio e ter uma melhoria na qualidade de vida das populações locais.\n");
                printf("\t\t\t\tCom a  evolução dos esportes e modalidades nos jogos olímpicos, foram surgindo também atletas lendários\n");
                printf("\t\t\tcomo o , Usain Bolt, Michael Phelps, Simone Biles e Nadia Comaneci.\n");
                printf("\t\t\t\tParis ânsia imensamente, receber todos os desafios possíveis das olimpíadas de 2024.\n");
                printf("\t\t\t\tA Cidade está se dedicando muito para, suas infraestrutura esportiva,\n");
                printf("\t\t\te construindo novas instalações para garantir todos os cuidados possíveis de atletas e dos espectadores.\n");
                printf("\t\t\t\tParis está também determinada a mostrar ao mundo inteiro, sua capacidade de ter uma organização excelente\n");
                printf("\t\t\te tornar essa olimpíada a mais memorável no mundo inteiro.\n");
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
                    printf(GRN"\t\t\t\t[2] - Voltar ao Início.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &comprar);

                    if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, você nos confia seus dados e informações, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confiança.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a política de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos serão utilizados durante\n");
                    printf("\t\t\t\t a compra e navegação do usuário. Não compartilhamos essas informações sem sua permissão.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informações de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informações, estarão sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informações acerca de pagamento como CNPJ e CPF, dados bancários e \n");
                    printf("\t\t\t\t número de cartões de crédito, porventura fornecidos, serão utilizados com \n");
                    printf("\t\t\t\t vistas única e exclusivamente para transações na hora da compra. Não vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informações pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, você concorda com esses termos.\n");
                    printf("\t\t\t\t    Se não concordar, por favor, não continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - Não Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);

                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(RED"\t\t\t\t|                            VOCÊ NÃO CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. Até logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
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
                            printf(GRN"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Valor do Ticket: R$10,00 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Dias de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - Sábado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                            printf("\t\t\t\tOpção selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: Sábado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: Domingo.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Horários de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o horário: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                    printf(MAG"\n\t\t\t\tSelecione o horário: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOpção selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: 18:00.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Limite de pessoa por sala: 15 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\tIngressos disponíveis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o número de pessoas que visitarão: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAtenção! A quantidade de pessoas não deverá exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala está lotada. Não é possível comprar mais ingressos para esse evento.\n"RESET);
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
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experiência está prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHorário escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao Início.\n"RESET);
                            printf(CYN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParabéns, a sua compra de tickets foi efetuada!\n\n"RESET);
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
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao Início.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOpção inválida. Voltando ao Início.\n\n"RESET);
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
                printf(BLU"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Antiguidade Clássica: Grécia e Roma Antiga ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨"RESET);
                printf("\n\n\t\t\tA Grécia e Roma foram importantes civilizações da antiguidade clássica, que foi um longo período na história da Europa.\n");
                printf("\t\t\tPodemos notar que herdamos diversas coisas dessas duas civilizações.\n");
                printf("\t\t\tSendo elas vindas da Grécia: a monarquia, tirania, democracia, hegemonia,\n");
                printf("\t\tconceitos filosóficos como o antropocentrismo, idealismo e racionalismo.\n");
                printf("\t\t\tE vindas da Roma antiga temos o conceito de cidadania e justiça, a língua latina e o cristianismo.\n");
                printf("\t\t\tA seguir, há muitos períodos históricos envolvendo esses povos e a Europa.\n\n");
                printf("\t\t\tNa ordem cronológica temos:\n");
                printf(BROWN"\t\t1. Período Pré-Homérico (2000 – 1200 a.C.)\n");
                printf("\t\t2. Período Homérico (1100 – 800 a.C.)\n");
                printf("\t\t3. Período Arcaico (800 - 600 a.C.)\n");
                printf("\t\t4. Período Clássico (500 - 400 a.C.)\n");
                printf("\t\t5. Período Helenístico (300 – 200 a.C.)\n");
                printf("\t\t6. Monarquia (753 – 509 a.C.)\n");
                printf("\t\t7. República (509 - 27 a.C.)\n");
                printf("\t\t8. Império (27 a.C. - 476 d.C.)\n"RESET);
                printf("\n\t\t\tPor serem civilizações próximas, Roma se espelhava na Grécia. Com o passar do tempo,\n");
                printf("\t\tRoma coloca o homem no centro do universo, adotando o pensamento do antropocentrismo da Grécia.\n");
                printf("\t\t- Ambos são politeístas, e muitos deuses gregos foram adaptados para o pensamento religioso romano.\n");
                printf("\t\t- Ambas tinham como base da economia a escravidão.\n");
                printf("\t\t- A Grécia antiga teve o renascimento da democracia, já em Roma não há democracia.\n");
                printf("\t\t\tA forma como essas civilizações marcaram a humanidade é justificável por ser tão cobrada em estudos históricos.\n");
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
                    printf(GRN"\t\t\t\t[2] - Voltar ao Início.\n"RESET);
                    printf(CYN"\n\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &comprar);

                if (comprar == 1) {
                    system("cls");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\t\t\t\t|                        TERMOS DE USO E POLITICA DE PRIVACIDADE                        |\n"RESET);
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\n"RESET);
                    printf(RED"\t\t\t\t    Ao utilizar este programa, você nos confia seus dados e informações, nos comprometemos\n"RESET);
                    printf(RED"\t\t\t\t a manter essa confiança.\n"RESET);
                    printf("\t\t\t\t    Esse termo tem por finalidade deixar transparente a política de coleta e\n");
                    printf("\t\t\t\t compartilhamento de dados, e como os mesmos serão utilizados durante\n");
                    printf("\t\t\t\t a compra e navegação do usuário. Não compartilhamos essas informações sem sua permissão.\n");
                    printf("\t\t\t\t    Os dados fornecidos durante a compra, tais como nome e sobrenome, \n");
                    printf("\t\t\t\t e-mails, telefone, informações de pagamento, bem como qualquer outras \n");
                    printf("\t\t\t\t informações, estarão sobre guarda, resguardando o direito de privacidade.\n");
                    printf("\t\t\t\t    As informações acerca de pagamento como CNPJ e CPF, dados bancários e \n");
                    printf("\t\t\t\t número de cartões de crédito, porventura fornecidos, serão utilizados com \n");
                    printf("\t\t\t\t vistas única e exclusivamente para transações na hora da compra. Não vendemos,\n");
                    printf("\t\t\t\t alugamos ou trocamos suas informações pessoais com terceiros.\n");
                    printf("\t\t\t\t    Ao continuar utilizando nosso programa, você concorda com esses termos.\n");
                    printf("\t\t\t\t    Se não concordar, por favor, não continue usando o programa.\n\n");
                    printf(BROWN"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(BROWN"\n\t\t\t\t[1] - Concordo (Continuar a Compra)\n"RESET);
                    printf(BROWN"\t\t\t\t[2] - Não Concordo (Sair do Programa)\n"RESET);
                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);

                    printf(BROWN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                    scanf("%d", &termos);

                    if (termos != 1) {
                    printf(RED"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
                    printf(RED"\t\t\t\t|                            VOCÊ NÃO CONCORDOU COM OS TERMOS                           |\n"RESET);
                    printf(RED"\t\t\t\t|                            DE USO E POLITICA DE PRIVACIDADE                           |\n"RESET);
                    printf(RED"\t\t\t\t|                             Saindo do programa. Até logo!                             |\n"RESET);
                    printf(RED"\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n"RESET);
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
                            printf(GRN"\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Valor do Ticket: R$10,00 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf(MAG"\n\t\t\t\tInsira seu nome: ");
                            getchar();
                            fgets(nome, sizeof(nome), stdin);
                            nome[strcspn(nome, "\n")] = '\0';
                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Dias de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - Quinta - Feira\n");
                            printf("\t\t\t\t[2] - Sexta - Feira\n");
                            printf("\t\t\t\t[3] - Sábado\n");
                            printf("\t\t\t\t[4] - Domingo\n");
                            printf(MAG"\n\t\t\t\tSelecione o dia: ");
                            scanf("%d", &dia);

                            while (dia > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                            printf("\t\t\t\tOpção selecionada: Quinta - Feira.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: Sexta - Feira.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: Sábado.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: Domingo.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Horários de Funcionamento ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\t[1] - 15:00\n");
                            printf("\t\t\t\t[2] - 16:00\n");
                            printf("\t\t\t\t[3] - 17:00\n");
                            printf("\t\t\t\t[4] - 18:00\n");
                            printf(MAG"\n\t\t\t\tSelecione o horário: ");
                            scanf("%d", &horario);

                            while (horario > 4) {
                                    printf(WHT"\t\t\t\t              _\n");
                                    printf("\t\t\t\t             | |                    Erro no sistema. \n");
                                    printf("\t\t\t\t             | |===( )   //////    Por favor, digite \n");
                                    printf("\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
                                    printf(MAG"\n\t\t\t\tSelecione o horário: ");
                                    scanf("%d", &horario);
                                    }
                                        switch (horario) {
                                        case 1:
                                            printf("\t\t\t\tOpção selecionada: 15:00.\n");
                                            break;
                                        case 2:
                                            printf("\t\t\t\tOpção selecionada: 16:00.\n");
                                            break;
                                        case 3:
                                            printf("\t\t\t\tOpção selecionada: 17:00.\n");
                                            break;
                                        case 4:
                                            printf("\t\t\t\tOpção selecionada: 18:00.\n");
                                            break;
                                    }

                            printf(MAG"\n\t\t\t\t¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨ Limite de pessoa por sala: 15 ¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨\n"RESET);
                            printf("\t\t\t\tIngressos disponíveis para o evento: %d\n", ingressosDisponiveis[opcao - 1][dia - 1]);
                            printf(MAG"\t\t\t\tDigite o número de pessoas que visitarão: ");
                            scanf("%d", &pessoas);
                            if (pessoas <= 0 || pessoas > 15)
                            {
                                printf(RED"\n\t\t\t\tAtenção! A quantidade de pessoas não deverá exceder o limite de 15.\n"RESET);
                                system("pause");
                            break;
                            }
                            if (ingressosVendidos[opcao - 1] + pessoas>capacidadeSala){
                            printf(RED"\n\t\t\t\tA sala está lotada. Não é possível comprar mais ingressos para esse evento.\n"RESET);
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
                            printf("\t\t\t\t     ' _...-|     |-..._ '\tmas sua experiência está prestes a ficar mais rica.\n");
                            printf("\t\t\t\t            |     |\n");
                            printf("\t\t\t\t            '.___.'\n");
                            printf("\t\t\t\t              | |\n");
                            printf("\t\t\t\t              | |\n"RESET);
                            printf(GRN"\n\t\t\t\tConfira suas escolhas:\n"RESET);
                            printf("\t\t\t\tNome do comprador: %s\n", nome);
                            printf("\t\t\t\tDia escolhido: %s\n", nomesDias[dia - 1]);
                            printf("\t\t\t\tHorário escolhido: %s\n", nomesHorarios[horario - 1]);
                            printf("\t\t\t\tQuantidade de pessoas: %d\n", pessoas);
                            printf("\t\t\t\tValor total a pagar: R$%.2f", valorTotal);
                            printf(GRN"\n\t\t\t\t[1] - Confirmar compra.\n"RESET);
                            printf(GRN"\t\t\t\t[2] - Cancelar compra e voltar ao Início.\n"RESET);
                            printf(CYN"\n\t\t\t\t§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§¬¬¬¬ Digite a opção desejada: ¬¬¬¬§§¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬§§\n\t\t\t\t");
                            scanf("%d", &confirmacao);

                                switch (confirmacao) {
                                    case 1:
                                    printf(GRN"\n\t\t\t\tParabéns, a sua compra de tickets foi efetuada!\n\n"RESET);
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
                                    printf(YEL"\n\t\t\t\tCompra cancelada. Voltando ao Início.\n\n"RESET);
                                    break;
                                default:
                                printf(RED"\n\t\t\t\tOpção inválida. Voltando ao Início.\n\n"RESET);
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
    printf("\t\t\t      .` -   _ /  \\_     -   .`  _         .` |Saída Museu|`.   - `.`.\n");
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
                printf("\t\t\t\t\t             |_|   |||  | o o|      uma opção válida \n");
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
