#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>


void PermitirCaracterEspecial()
{

    setlocale(LC_ALL, "Portuguese"); //Acrescentar caracteres da língua portuguesa, ç,acentos,etc ...
};

void Login(char login[15], char senha[15])
{

    PermitirCaracterEspecial();
    printf("\n");
    printf(" ___________________________\n");
    printf("|Fluxo de caixa:            |\n");
    printf("|___________________________|");
    printf("\n|login: ");
    scanf("%s",login);
    printf("|___________________________|");
    printf("\n|Senha: ");
    scanf("%s",senha);
    printf("|___________________________|");
    printf("\n");
    system("cls");
}


void ExibirMenu1(int ano)
{
    PermitirCaracterEspecial();
    system("color f2");
    printf("\n ________________________________________________\n");
    printf("|                   BEM VINDO !                  |\n");
    printf("|------------------------------------------------|\n");
    printf("|            FLUXO DE CAIXA | Mês %d              |\n",ano);
    printf("|------------------------------------------------|\n");
    printf("| 1 - Semana 1                                   |\n");
    printf("|------------------------------------------------|\n");
    printf("| 2 - Semana 2                                   |\n");
    printf("|------------------------------------------------|\n");
    printf("| 3 - Semana 3                                   |\n");
    printf("|------------------------------------------------|\n");
    printf("| 4 - Semana 4                                   |\n");
    printf("|------------------------------------------------|\n");
    printf("| 5 - Total                                      |\n");
    printf("|------------------------------------------------|\n");
    printf("| 6 - Salvar/Sair                                |\n");
    printf("|________________________________________________|\n");
}

void ExibirTelaValores (int opc)
{

    printf("|------------------------------------------------|\n");
    printf("|                   SEMANA %d                    |\n",opc);
    printf("|------------------------------------------------|\n");
    printf("|  1 - (=) Saldo Anterior                        |\n");
    printf("|------------------------------------------------|\n");
    printf("|  # Fluxo de caixa Operacional #                |\n");
    printf("|------------------------------------------------|\n");
    printf("|  2 - (+) Receita com vendas                    |\n");
    printf("|------------------------------------------------|\n");
    printf("|  3 - (-) Pagamentos a fornecedores             |\n");
    printf("|------------------------------------------------|\n");
    printf("|  4 - (-) Pagamentos a funcionários             |\n");
    printf("|------------------------------------------------|\n");
    printf("|  5 - (-) Pagamentos de impostos                |\n");
    printf("|------------------------------------------------|\n");
    printf("|  6 - (=) SALDO CAIXA OPERACIONAL               |\n");
    printf("|------------------------------------------------|\n");
    printf("|  # Fluxo de caixa de inverstimento #           |\n");
    printf("|------------------------------------------------|\n");
    printf("|  7 - (+) Vendas de imobilizados                |\n");
    printf("|------------------------------------------------|\n");
    printf("|  8 - (-) Aquisição de ativos Permanentes       |\n");
    printf("|------------------------------------------------|\n");
    printf("|  9 - (+) Recebimentos de dividendos            |\n");
    printf("|------------------------------------------------|\n");
    printf("| 10 - (=) SALDO CAIXA INVESTIMENTO              |\n");
    printf("|------------------------------------------------|\n");
    printf("| # Fluxo de caixa financiamento #               |\n");
    printf("|------------------------------------------------|\n");
    printf("| 11 - (+) Aquisição de emprestímos              |\n");
    printf("|------------------------------------------------|\n");
    printf("| 12 - (-) Amortização de empréstimos            |\n");
    printf("|------------------------------------------------|\n");
    printf("| 13 - (+) Aporte de capital                     |\n");
    printf("|------------------------------------------------|\n");
    printf("| 14 - (-) Pagamento de dividendos               |\n");
    printf("|------------------------------------------------|\n");
    printf("| 15 - (=) SALDO CAIXA FINANCEIRO                |\n");
    printf("|________________________________________________|\n");
    printf("|                                                |\n");
    printf("| 16 - (=) SALDO DO PERÍODO                      |\n");
    printf("|________________________________________________|\n");


}

void SubMenu()
{

    printf("\n\n\n");
    printf("   ________________________________________________________\n");
    printf("  |                           |                            |\n");
    printf("  |                           |                            |\n");
    printf("  |       19- Para Sair       |  Pressione Qualquer Número |\n");
    printf("  |                           |    Para Voltar ao Menu...  |\n");
    printf("  |___________________________|____________________________|\n");

}


typedef struct Usuarios
{
    char login[15];
    char senha[15];
} Usuarios;

int main ()
{
//Criando um Login de usúrio
    Usuarios u1 ;
    strcpy(u1.login, "adm");
    strcpy(u1.senha, "1234");

    int loginAutenticado = -1 ;
    char login[15], senha[15];
    int ano ;
    int opc,opc2,i = 0 ;
    float saldoAnt[4] = {0,0,0,0}, receitaVend[4] = {0,0,0,0}, pagamentosFornec[4] = {0,0,0,0}, pagamentosFunc[4] = {0,0,0,0}, pagamentosImp[4] = {0,0,0,0},
                        saldoCaixaOperac[4] = {0,0,0,0},
                                vendasImobili[4] = {0,0,0,0}, aquisiAtivosPerm[4]= {0,0,0,0},recebmentosDivenden[4] = {0,0,0,0},
                                        saldoCaixaInvestimen[4] = {0,0,0,0},
                                                aquisiEmpresti[4] = {0,0,0,0}, amortizaEmp[4] = {0,0,0,0}, aporteDeCapit[4] = {0,0,0,0}, pagamentoDividen[4] = {0,0,0,0},
                                                        saldoCaixaFinan[4] = {0,0,0,0},
                                                                saldoIniciPeriodo[4] = {0,0,0,0},resultadoPeriodo[4] = {0,0,0,0}, saldoFinalPeriodo[4] = {0,0,0,0};


    float tSaldoAnt = 0, tReceitaVend = 0, tPagamentosFornec = 0, tPagamentosFunc = 0, tPagamentosImp = 0,
          tSaldoCaixaOperac = 0,
          tVendasImobili = 0, tAquisiAtivosPerm = 0, tRecebmentosDivenden = 0,
          tSaldoCaixaInvestimen = 0,
          tAquisiEmpresti = 0, tAmortizaEmp = 0, tAporteDeCapit = 0, tPagamentoDividen = 0,
          tSaldoCaixaFinan = 0,
          tSaldoIniciPeriodo = 0,tResultadoPeriodo = 0, tSaldoFinalPeriodo= 0 ;



    FILE * arq;
    arq = fopen("fluxodecaixa.xls","a");
    if(arq == NULL)
    {
        printf("Nao foi Possivel Acessar o arquivo: ");
        exit(0);
    }

    while (loginAutenticado != 1 )   //Se repetir até login existir
    {

        Login(login,senha); //fazendo login

        system("cls");
        if ( strcmp(u1.login,login) == 0 && strcmp(u1.senha,senha)  == 0 )   //caso login exista, executa alguma coisa
        {

            loginAutenticado = 1 ;

            system("cls");

            printf("Digite o mês: ");
            scanf("%d",&ano);

            do
            {
                system("cls");
                ExibirMenu1(ano);
                scanf("%d",& opc);
                system("cls");
                switch (opc)
                {

                case 1 :

                    system("cls");
                    ExibirTelaValores(opc);
                    scanf("%d",&opc2);
                    system("cls");
                    if (opc2 == 1)
                    {
                        printf("Saldo Anterior: ");
                        scanf("%f",&saldoAnt[0]);
                    }
                    if (opc2 == 2)
                    {
                        printf("Receita com vendas: ");
                        scanf("%f",&receitaVend[0]);
                    }
                    if (opc2 == 3)
                    {
                        printf("Pagamentos a fornecedores: ");
                        scanf("%f",&pagamentosFornec[0]);
                    }
                    if (opc2 == 4)
                    {
                        printf("Pagamentos a funcionários: ");
                        scanf("%f",&pagamentosFunc[0]);
                    }
                    if (opc2 == 5)
                    {
                        printf("Pagamentos de impostos: ");
                        scanf("%f",&pagamentosImp[0]);
                    }
                    if (opc2 == 6)
                    {
                        printf("SALDO CAIXA OPERACIONAL: %0.2f",saldoCaixaOperac[0]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 7)
                    {
                        printf("Vendas de imobilizados: ");
                        scanf("%f",&vendasImobili[0]);
                    }
                    if (opc2 == 8)
                    {
                        printf("Aquisição de ativos Permanentes: ");
                        scanf("%f",&aquisiAtivosPerm[0]);
                    }
                    if (opc2 == 9)
                    {
                        printf("Recebimentos de dividendos: ");
                        scanf("%f",&recebmentosDivenden[0]);
                    }
                    if (opc2 == 10)
                    {
                        printf("SALDO CAIXA INVESTIMENTO: %0.2f",saldoCaixaInvestimen[0]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 11)
                    {
                        printf("Aquisição de emprestímos: ");
                        scanf("%f",&aquisiEmpresti[0]);
                    }
                    if (opc2 == 12)
                    {
                        printf("Amortização de empréstimos: ");
                        scanf("%f",&amortizaEmp[0]);
                    }
                    if (opc2 == 13)
                    {
                        printf("Aporte de capital: ");
                        scanf("%f",&aporteDeCapit[0]);
                    }
                    if (opc2 == 14)
                    {
                        printf("Pagamento de dividendos: ");
                        scanf("%f",&pagamentoDividen[0]);
                    }
                    if (opc2 == 15)
                    {
                        printf("SALDO CAIXA FINANCEIRO: %0.2f",saldoCaixaFinan[0]);
                        scanf("%d",&opc);
                        SubMenu();

                    }

                    saldoCaixaOperac[0] = receitaVend[0] - (pagamentosFornec[0] + pagamentosFunc[0] + pagamentosImp[0]);
                    saldoCaixaInvestimen[0] = (vendasImobili[0] + recebmentosDivenden[0]) - aquisiAtivosPerm[0];
                    saldoCaixaFinan[0] = (aquisiEmpresti[0] + aporteDeCapit[0]) - (amortizaEmp[0] + pagamentoDividen[0]);
                    saldoIniciPeriodo[0] = saldoAnt[0];
                    resultadoPeriodo[0] = saldoCaixaOperac[0] + saldoCaixaInvestimen[0] + saldoCaixaFinan[0];
                    saldoFinalPeriodo[0] = saldoIniciPeriodo[0] + resultadoPeriodo[0];

                    if (opc2 == 16)
                    {
                        printf("|----------------------------------------\n");
                        printf("|                 SEMANA 1               \n");
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO INICIAL DO PERÍODO: %0.2f\n",saldoIniciPeriodo[0]);
                        printf("|----------------------------------------\n");
                        printf("|(=) RESULTADO DO PERÍODO: %0.2f\n",resultadoPeriodo[0]);
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO FINAL DO PERÍODO: %0.2f \n",saldoFinalPeriodo[0]);
                        printf("|----------------------------------------\n");
                        scanf("%d",&opc);
                        SubMenu();
                    }

                    break ;

                case 2 :

                    saldoAnt[1] = saldoFinalPeriodo[0];
                    system("cls");
                    ExibirTelaValores(opc);
                    scanf("%d",&opc2);
                    system("cls");
                    if (opc2 == 1)
                    {
                        printf("Saldo Anterior: %0.2f",saldoAnt[1]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 2)
                    {
                        printf("Receita com vendas: ");
                        scanf("%f",&receitaVend[1]);
                    }
                    if (opc2 == 3)
                    {
                        printf("Pagamentos a fornecedores: ");
                        scanf("%f",&pagamentosFornec[1]);
                    }
                    if (opc2 == 4)
                    {
                        printf("Pagamentos a funcionários: ");
                        scanf("%f",&pagamentosFunc[1]);
                    }
                    if (opc2 == 5)
                    {
                        printf("Pagamentos de impostos: ");
                        scanf("%f",&pagamentosImp[1]);
                    }
                    if (opc2 == 6)
                    {
                        printf("SALDO CAIXA OPERACIONAL: %0.2f",saldoCaixaOperac[1]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 7)
                    {
                        printf("Vendas de imobilizados: ");
                        scanf("%f",&vendasImobili[1]);
                    }
                    if (opc2 == 8)
                    {
                        printf("Aquisição de ativos Permanentes: ");
                        scanf("%f",&aquisiAtivosPerm[1]);
                    }
                    if (opc2 == 9)
                    {
                        printf("Recebimentos de dividendos: ");
                        scanf("%f",&recebmentosDivenden[1]);
                    }
                    if (opc2 == 10)
                    {
                        printf("SALDO CAIXA INVESTIMENTO: %0.2f",saldoCaixaInvestimen[1]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 11)
                    {
                        printf("Aquisição de emprestímos: ");
                        scanf("%f",&aquisiEmpresti[1]);
                    }
                    if (opc2 == 12)
                    {
                        printf("Amortização de empréstimos: ");
                        scanf("%f",&amortizaEmp[1]);
                    }
                    if (opc2 == 13)
                    {
                        printf("Aporte de capital: ");
                        scanf("%f",&aporteDeCapit[1]);
                    }
                    if (opc2 == 14)
                    {
                        printf("Pagamento de dividendos: ");
                        scanf("%f",&pagamentoDividen[1]);
                    }
                    if (opc2 == 15)
                    {
                        printf("SALDO CAIXA FINANCEIRO: %0.2f",saldoCaixaFinan[1]);
                        scanf("%d",&opc);
                        SubMenu();

                    }

                    saldoCaixaOperac[1] = receitaVend[1] - (pagamentosFornec[1] + pagamentosFunc[1] + pagamentosImp[1]);
                    saldoCaixaInvestimen[1] = (vendasImobili[1] + recebmentosDivenden[1]) - aquisiAtivosPerm[1];
                    saldoCaixaFinan[1] = (aquisiEmpresti[1] + aporteDeCapit[1]) - (amortizaEmp[1] + pagamentoDividen[1]);
                    saldoIniciPeriodo[1] = saldoAnt[1];
                    resultadoPeriodo[1] = saldoCaixaOperac[1] + saldoCaixaInvestimen[1] + saldoCaixaFinan[1];
                    saldoFinalPeriodo[1] = saldoIniciPeriodo[1] + resultadoPeriodo[1];

                    if (opc2 == 16)
                    {
                        printf("|----------------------------------------\n");
                        printf("|                 SEMANA 2               \n");
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO INICIAL DO PERÍODO: %0.2f\n",saldoIniciPeriodo[1]);
                        printf("|----------------------------------------\n");
                        printf("|(=) RESULTADO DO PERÍODO: %0.2f\n",resultadoPeriodo[1]);
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO FINAL DO PERÍODO: %0.2f \n",saldoFinalPeriodo[1]);
                        printf("|----------------------------------------\n");
                        scanf("%d",&opc);
                        SubMenu();
                    }

                    break ;

                case 3 :

                    saldoAnt[2] = saldoFinalPeriodo[1];
                    system("cls");
                    ExibirTelaValores(opc);
                    scanf("%d",&opc2);
                    system("cls");
                    if (opc2 == 1)
                    {
                        printf("Saldo Anterior: %0.2f",saldoAnt[2]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 2)
                    {
                        printf("Receita com vendas: ");
                        scanf("%f",&receitaVend[2]);
                    }
                    if (opc2 == 3)
                    {
                        printf("Pagamentos a fornecedores: ");
                        scanf("%f",&pagamentosFornec[2]);
                    }
                    if (opc2 == 4)
                    {
                        printf("Pagamentos a funcionários: ");
                        scanf("%f",&pagamentosFunc[2]);
                    }
                    if (opc2 == 5)
                    {
                        printf("Pagamentos de impostos: ");
                        scanf("%f",&pagamentosImp[2]);
                    }
                    if (opc2 == 6)
                    {
                        printf("SALDO CAIXA OPERACIONAL: %0.2f",saldoCaixaOperac[2]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 7)
                    {
                        printf("Vendas de imobilizados: ");
                        scanf("%f",&vendasImobili[2]);
                    }
                    if (opc2 == 8)
                    {
                        printf("Aquisição de ativos Permanentes: ");
                        scanf("%f",&aquisiAtivosPerm[2]);
                    }
                    if (opc2 == 9)
                    {
                        printf("Recebimentos de dividendos: ");
                        scanf("%f",&recebmentosDivenden[2]);
                    }
                    if (opc2 == 10)
                    {
                        printf("SALDO CAIXA INVESTIMENTO: %0.2f",saldoCaixaInvestimen[2]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 11)
                    {
                        printf("Aquisição de emprestímos: ");
                        scanf("%f",&aquisiEmpresti[2]);
                    }
                    if (opc2 == 12)
                    {
                        printf("Amortização de empréstimos: ");
                        scanf("%f",&amortizaEmp[2]);
                    }
                    if (opc2 == 13)
                    {
                        printf("Aporte de capital: ");
                        scanf("%f",&aporteDeCapit[2]);
                    }
                    if (opc2 == 14)
                    {
                        printf("Pagamento de dividendos: ");
                        scanf("%f",&pagamentoDividen[2]);
                    }
                    if (opc2 == 15)
                    {
                        printf("SALDO CAIXA FINANCEIRO: %0.2f",saldoCaixaFinan[2]);
                        scanf("%d",&opc);
                        SubMenu();

                    }

                    saldoCaixaOperac[2] = receitaVend[2] - (pagamentosFornec[2] + pagamentosFunc[2] + pagamentosImp[2]);
                    saldoCaixaInvestimen[2] = (vendasImobili[2] + recebmentosDivenden[2]) - aquisiAtivosPerm[2];
                    saldoCaixaFinan[2] = (aquisiEmpresti[2] + aporteDeCapit[2]) - (amortizaEmp[2] + pagamentoDividen[2]);
                    saldoIniciPeriodo[2] = saldoAnt[2];
                    resultadoPeriodo[2] = saldoCaixaOperac[2] + saldoCaixaInvestimen[2] + saldoCaixaFinan[2];
                    saldoFinalPeriodo[2] = saldoIniciPeriodo[2] + resultadoPeriodo[2];

                    if (opc2 == 16)
                    {
                        printf("|----------------------------------------\n");
                        printf("|                 SEMANA 3               \n");
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO INICIAL DO PERÍODO: %0.2f\n",saldoIniciPeriodo[2]);
                        printf("|----------------------------------------\n");
                        printf("|(=) RESULTADO DO PERÍODO: %0.2f\n",resultadoPeriodo[2]);
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO FINAL DO PERÍODO: %0.2f \n",saldoFinalPeriodo[2]);
                        printf("|----------------------------------------\n");
                        scanf("%d",&opc);
                        SubMenu();
                    }

                    break ;

                case 4 :

                    saldoAnt[3] = saldoFinalPeriodo[2];
                    system("cls");
                    ExibirTelaValores(opc);
                    scanf("%d",&opc2);
                    system("cls");
                    if (opc2 == 1)
                    {
                        printf("Saldo Anterior: %0.2f",saldoAnt[3]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 2)
                    {
                        printf("Receita com vendas: ");
                        scanf("%f",&receitaVend[3]);
                    }
                    if (opc2 == 3)
                    {
                        printf("Pagamentos a fornecedores: ");
                        scanf("%f",&pagamentosFornec[3]);
                    }
                    if (opc2 == 4)
                    {
                        printf("Pagamentos a funcionários: ");
                        scanf("%f",&pagamentosFunc[3]);
                    }
                    if (opc2 == 5)
                    {
                        printf("Pagamentos de impostos: ");
                        scanf("%f",&pagamentosImp[3]);
                    }
                    if (opc2 == 6)
                    {
                        printf("SALDO CAIXA OPERACIONAL: %0.2f",saldoCaixaOperac[3]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 7)
                    {
                        printf("Vendas de imobilizados: ");
                        scanf("%f",&vendasImobili[3]);
                    }
                    if (opc2 == 8)
                    {
                        printf("Aquisição de ativos Permanentes: ");
                        scanf("%f",&aquisiAtivosPerm[3]);
                    }
                    if (opc2 == 9)
                    {
                        printf("Recebimentos de dividendos: ");
                        scanf("%f",&recebmentosDivenden[3]);
                    }
                    if (opc2 == 10)
                    {
                        printf("SALDO CAIXA INVESTIMENTO: %0.2f",saldoCaixaInvestimen[3]);
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    if (opc2 == 11)
                    {
                        printf("Aquisição de emprestímos: ");
                        scanf("%f",&aquisiEmpresti[3]);
                    }
                    if (opc2 == 12)
                    {
                        printf("Amortização de empréstimos: ");
                        scanf("%f",&amortizaEmp[3]);
                    }
                    if (opc2 == 13)
                    {
                        printf("Aporte de capital: ");
                        scanf("%f",&aporteDeCapit[3]);
                    }
                    if (opc2 == 14)
                    {
                        printf("Pagamento de dividendos: ");
                        scanf("%f",&pagamentoDividen[3]);
                    }
                    if (opc2 == 15)
                    {
                        printf("SALDO CAIXA FINANCEIRO: %0.2f",saldoCaixaFinan[3]);
                        scanf("%d",&opc);
                        SubMenu();

                    }

                    saldoCaixaOperac[3] = receitaVend[3] - (pagamentosFornec[3] + pagamentosFunc[3] + pagamentosImp[3]);
                    saldoCaixaInvestimen[3] = (vendasImobili[3] + recebmentosDivenden[3]) - aquisiAtivosPerm[3];
                    saldoCaixaFinan[3] = (aquisiEmpresti[3] + aporteDeCapit[3]) - (amortizaEmp[3] + pagamentoDividen[3]);
                    saldoIniciPeriodo[3] = saldoAnt[3];
                    resultadoPeriodo[3] = saldoCaixaOperac[3] + saldoCaixaInvestimen[3] + saldoCaixaFinan[3];
                    saldoFinalPeriodo[3] = saldoIniciPeriodo[3] + resultadoPeriodo[3];

                    if (opc2 == 16)
                    {
                        printf("|----------------------------------------\n");
                        printf("|                 SEMANA 4               \n");
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO INICIAL DO PERÍODO: %0.2f\n",saldoIniciPeriodo[3]);
                        printf("|----------------------------------------\n");
                        printf("|(=) RESULTADO DO PERÍODO: %0.2f\n",resultadoPeriodo[3]);
                        printf("|----------------------------------------\n");
                        printf("|(=) SALDO FINAL DO PERÍODO: %0.2f \n",saldoFinalPeriodo[3]);
                        printf("|----------------------------------------\n");
                        scanf("%d",&opc);
                        SubMenu();
                    }
                    break ;
                case 5 :

                    tSaldoAnt = saldoAnt[0];
                    tSaldoIniciPeriodo = saldoAnt[0];

                    tReceitaVend = receitaVend[0] + receitaVend[1] + receitaVend[2] + receitaVend[3] ;
                    tPagamentosFornec = -pagamentosFornec[0] + -pagamentosFornec[1] + -pagamentosFornec[2] + -pagamentosFornec[3];
                    tPagamentosFunc = -pagamentosFunc[0] + -pagamentosFunc[1] + -pagamentosFunc[2] + -pagamentosFunc[3];
                    tPagamentosImp = -pagamentosImp[0] + -pagamentosImp[1] + -pagamentosImp[2] + -pagamentosImp[3];
                    tSaldoCaixaOperac = saldoCaixaOperac[0] + saldoCaixaOperac[1] + saldoCaixaOperac[2] + saldoCaixaOperac[3];
                    tVendasImobili = vendasImobili[0] + vendasImobili[1] + vendasImobili[2] + vendasImobili[3];
                    tAquisiAtivosPerm = -aquisiAtivosPerm[0] + -aquisiAtivosPerm[1] + -aquisiAtivosPerm[2] + -aquisiAtivosPerm[3];
                    tRecebmentosDivenden = recebmentosDivenden[0] + recebmentosDivenden[1] + recebmentosDivenden[2] + recebmentosDivenden[3];
                    tSaldoCaixaInvestimen = saldoCaixaInvestimen[0] + saldoCaixaInvestimen[1] + saldoCaixaInvestimen[2] + saldoCaixaInvestimen[3];
                    tAquisiEmpresti = aquisiEmpresti[0] + aquisiEmpresti[1] + aquisiEmpresti[2] + aquisiEmpresti[3];
                    tAmortizaEmp = -amortizaEmp[0] + -amortizaEmp[1] + -amortizaEmp[2] + -amortizaEmp[3];
                    tAporteDeCapit = aporteDeCapit[0] + aporteDeCapit[1] + aporteDeCapit[2] + aporteDeCapit[3];
                    tPagamentoDividen = -pagamentoDividen[0] + -pagamentoDividen[1] + -pagamentoDividen[2] + -pagamentoDividen[3];
                    tSaldoCaixaFinan = saldoCaixaFinan[0] + saldoCaixaFinan[1] + saldoCaixaFinan[2] + saldoCaixaFinan[3];
                    tResultadoPeriodo = tSaldoCaixaOperac + tSaldoCaixaInvestimen + tSaldoCaixaFinan ;
                    tSaldoFinalPeriodo = saldoFinalPeriodo[3] ;

                    printf("----------------------------------------\n");
                    printf("Saldo Anterior: %0.2f\n",tSaldoAnt);
                    printf("----------------------------------------\n");
                    printf("Receita com vendas: %0.2f\n",tReceitaVend);
                    printf("----------------------------------------\n");
                    printf("Pagamentos a fornecedores: -%0.2f\n",tPagamentosFornec);
                    printf("----------------------------------------\n");
                    printf("Pagamentos a funcionários: -%0.2f\n",tPagamentosFunc);
                    printf("----------------------------------------\n");
                    printf("Pagamentos de impostos: -%0.2f\n",tPagamentosImp);
                    printf("----------------------------------------\n");
                    printf("SALDO CAIXA OPERACIONAL: %0.2f\n",tSaldoCaixaOperac);
                    printf("----------------------------------------\n");
                    printf("Vendas de imobilizados: %0.2f\n",tVendasImobili);
                    printf("----------------------------------------\n");
                    printf("Aquisição de ativos Permanentes: -%0.2f\n",tAquisiAtivosPerm);
                    printf("----------------------------------------\n");
                    printf("Recebimentos de dividendos: %0.2f\n",tRecebmentosDivenden);
                    printf("----------------------------------------\n");
                    printf("SALDO CAIXA INVESTIMENTO: %0.2f\n",tSaldoCaixaInvestimen);
                    printf("----------------------------------------\n");
                    printf("Aquisição de emprestímos: %0.2f\n",tAquisiEmpresti);
                    printf("----------------------------------------\n");
                    printf("Amortização de empréstimos: -%0.2f\n",tAmortizaEmp);
                    printf("----------------------------------------\n");
                    printf("Aporte de capital: %0.2f\n",tAporteDeCapit);
                    printf("----------------------------------------\n");
                    printf("Pagamento de dividendos: -%0.2f\n",tPagamentoDividen);
                    printf("----------------------------------------\n");
                    printf("SALDO CAIXA FINANCEIRO: %0.2f\n",tSaldoCaixaFinan);
                    printf("----------------------------------------\n");
                    printf("(=) SALDO INICIAL DO PERÍODO: %0.2f\n",tSaldoIniciPeriodo);
                    printf("----------------------------------------\n");
                    printf("(=) RESULTADO DO PERÍODO: %0.2f\n",tResultadoPeriodo);
                    printf("----------------------------------------\n");
                    printf("(=) SALDO FINAL DO PERÍODO: %0.2f \n",tSaldoFinalPeriodo);
                    printf("----------------------------------------\n");

                    scanf("%d",&opc);
                    SubMenu();
                    break ;

                case 6 :

                    tSaldoAnt = saldoAnt[0];
                    tSaldoIniciPeriodo = saldoAnt[0];

                    tReceitaVend = receitaVend[0] + receitaVend[1] + receitaVend[2] + receitaVend[3] ;
                    tPagamentosFornec = -pagamentosFornec[0] + -pagamentosFornec[1] + -pagamentosFornec[2] + -pagamentosFornec[3];
                    tPagamentosFunc = -pagamentosFunc[0] + -pagamentosFunc[1] + -pagamentosFunc[2] + -pagamentosFunc[3];
                    tPagamentosImp = -pagamentosImp[0] + -pagamentosImp[1] + -pagamentosImp[2] + -pagamentosImp[3];
                    tSaldoCaixaOperac = saldoCaixaOperac[0] + saldoCaixaOperac[1] + saldoCaixaOperac[2] + saldoCaixaOperac[3];
                    tVendasImobili = vendasImobili[0] + vendasImobili[1] + vendasImobili[2] + vendasImobili[3];
                    tAquisiAtivosPerm = -aquisiAtivosPerm[0] + -aquisiAtivosPerm[1] + -aquisiAtivosPerm[2] + -aquisiAtivosPerm[3];
                    tRecebmentosDivenden = recebmentosDivenden[0] + recebmentosDivenden[1] + recebmentosDivenden[2] + recebmentosDivenden[3];
                    tSaldoCaixaInvestimen = saldoCaixaInvestimen[0] + saldoCaixaInvestimen[1] + saldoCaixaInvestimen[2] + saldoCaixaInvestimen[3];
                    tAquisiEmpresti = aquisiEmpresti[0] + aquisiEmpresti[1] + aquisiEmpresti[2] + aquisiEmpresti[3];
                    tAmortizaEmp = -amortizaEmp[0] + -amortizaEmp[1] + -amortizaEmp[2] + -amortizaEmp[3];
                    tAporteDeCapit = aporteDeCapit[0] + aporteDeCapit[1] + aporteDeCapit[2] + aporteDeCapit[3];
                    tPagamentoDividen = -pagamentoDividen[0] + -pagamentoDividen[1] + -pagamentoDividen[2] + -pagamentoDividen[3];
                    tSaldoCaixaFinan = saldoCaixaFinan[0] + saldoCaixaFinan[1] + saldoCaixaFinan[2] + saldoCaixaFinan[3];
                    tResultadoPeriodo = tSaldoCaixaOperac + tSaldoCaixaInvestimen + tSaldoCaixaFinan ;
                    tSaldoFinalPeriodo = saldoFinalPeriodo[3] ;

                    fprintf(arq,"\n|    FLUXO DE CAIXA MÊS %d             \t\t\t",ano);
                    fprintf(arq,"\tSEMANA 1\t");
                    fprintf(arq,"\tSEMANA 2\t");
                    fprintf(arq,"\tSEMANA 3\t");
                    fprintf(arq,"\tSEMANA 4\t");
                    fprintf(arq,"\t TOTAL \t\n");
                    fprintf(arq,"|         (=) Saldo Anterior                          \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",saldoAnt[0],saldoAnt[1],saldoAnt[2],saldoAnt[3],tSaldoAnt);
                    fprintf(arq,"|  Fluxo de caixa Operacional          \t\t\t\t");
                    fprintf(arq,"----------- \t\t ----------- \t\t ----------- \t\t ----------- \t\t -----------\n");
                    fprintf(arq,"|   (+) Receita com vendas             \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",receitaVend[0],receitaVend[1],receitaVend[2],receitaVend[3],tReceitaVend);
                    fprintf(arq,"|   (-) Pagamentos a fornecedores      \t\t\t\t");
                    fprintf(arq,"-%0.2f \t\t -%0.2f \t\t -%0.2f \t\t -%0.2f \t\t %0.2f\n",pagamentosFornec[0],pagamentosFornec[1],pagamentosFornec[2],pagamentosFornec[3],tPagamentosFornec);
                    fprintf(arq,"|   (-) Pagamentos a funcionários      \t\t\t\t");
                    fprintf(arq,"-%0.2f \t\t -%0.2f \t\t -%0.2f \t\t -%0.2f \t\t %0.2f\n",pagamentosFunc[0],pagamentosFunc[1],pagamentosFunc[2],pagamentosFunc[3],tPagamentosFunc);
                    fprintf(arq,"|   (-) Pagamentos de impostos         \t\t\t\t");
                    fprintf(arq,"-%0.2f \t\t -%0.2f \t\t -%0.2f \t\t -%0.2f \t\t %0.2f\n",pagamentosImp[0],pagamentosImp[1],pagamentosImp[2],pagamentosImp[3],tPagamentosImp);
                    fprintf(arq,"|   (=) SALDO CAIXA OPERACIONAL        \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",saldoCaixaOperac[0],saldoCaixaOperac[1],saldoCaixaOperac[2],saldoCaixaOperac[3],tSaldoCaixaOperac);
                    fprintf(arq,"|  Fluxo de caixa de inverstimento     \t\t\t\t");
                    fprintf(arq,"----------- \t\t ----------- \t\t ----------- \t\t ----------- \t\t -----------\n");
                    fprintf(arq,"|   (+) Vendas de imobilizados         \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",vendasImobili[0],vendasImobili[1],vendasImobili[2],vendasImobili[3],tVendasImobili);
                    fprintf(arq,"|   (-) Aquisição de ativos Permanentes\t\t\t\t");
                    fprintf(arq,"-%0.2f \t\t -%0.2f \t\t -%0.2f \t\t -%0.2f \t\t %0.2f\n",aquisiAtivosPerm[0],aquisiAtivosPerm[1],aquisiAtivosPerm[2],aquisiAtivosPerm[3],tAquisiAtivosPerm);
                    fprintf(arq,"|   (+) Recebimentos de dividendos     \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",recebmentosDivenden[0],recebmentosDivenden[1],recebmentosDivenden[2],recebmentosDivenden[3],tRecebmentosDivenden);
                    fprintf(arq,"|   (=) SALDO CAIXA INVESTIMENTO       \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",saldoCaixaInvestimen[0],saldoCaixaInvestimen[1],saldoCaixaInvestimen[2],saldoCaixaInvestimen[3],tSaldoCaixaInvestimen);
                    fprintf(arq,"|  Fluxo de caixa financiamento        \t\t\t\t");
                    fprintf(arq,"----------- \t\t ----------- \t\t ----------- \t\t ----------- \t\t -----------\n");
                    fprintf(arq,"|   (+) Aquisição de emprestímos       \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",aquisiEmpresti[0],aquisiEmpresti[1],aquisiEmpresti[2],aquisiEmpresti[3],tAquisiEmpresti);
                    fprintf(arq,"|   (-) Amortização de empréstimos     \t\t\t\t");
                    fprintf(arq,"-%0.2f \t\t -%0.2f \t\t -%0.2f \t\t -%0.2f \t\t %0.2f\n",amortizaEmp[0],amortizaEmp[1],amortizaEmp[2],amortizaEmp[3],tAmortizaEmp);
                    fprintf(arq,"|   (+) Aporte de capital                       \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",aporteDeCapit[0],aporteDeCapit[1],aporteDeCapit[2],aporteDeCapit[3],tAporteDeCapit);
                    fprintf(arq,"|   (-) Pagamento de dividendos        \t\t\t\t");
                    fprintf(arq,"%-0.2f \t\t -%0.2f \t\t -%0.2f \t\t -%0.2f \t\t %0.2f\n",pagamentoDividen[0],pagamentoDividen[1],pagamentoDividen[2],pagamentoDividen[3],tPagamentoDividen);
                    fprintf(arq,"|   (=) SALDO CAIXA FINANCEIRO         \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",saldoCaixaFinan[0],saldoCaixaFinan[1],saldoCaixaFinan[2],saldoCaixaFinan[3],tSaldoCaixaFinan);
                    fprintf(arq,"|   (=) SALDO INICIAL DO PERÍODO       \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",saldoIniciPeriodo[0],saldoIniciPeriodo[1],saldoIniciPeriodo[2],saldoIniciPeriodo[3],tSaldoIniciPeriodo);
                    fprintf(arq,"|   (=) RESULTADO DO PERÍODO           \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",resultadoPeriodo[0],resultadoPeriodo[1],resultadoPeriodo[2],resultadoPeriodo[3],tResultadoPeriodo);
                    fprintf(arq,"|   (=) SALDO FINAL DO PERÍODO         \t\t\t\t");
                    fprintf(arq,"%0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f \t\t %0.2f\n",saldoFinalPeriodo[0],saldoFinalPeriodo[1],saldoFinalPeriodo[2],saldoFinalPeriodo[3],tSaldoFinalPeriodo);

                    printf("\t\nSalvando ...");
                    //Sleep(1000);
                    system("cls");

                    printf("\t\nSaindo ...");
                    //Sleep(2000);
                    system("cls");

                    break ;

                default :

                    printf("\nOpção Inválida !!!\nPor Favor Digite A opção desejada de 1 a 19. \n");

                    break ;
                }

            }
            while(opc != 6);

            fclose(arq);

        }
        else
        {
            printf("\nLogin inexistente!!!\n");

            loginAutenticado = 0;

            printf("\nPor Favor Tente Novamente !...\n");
            Sleep(2000);
            system("cls");
        }
    }

    return 0;
}

