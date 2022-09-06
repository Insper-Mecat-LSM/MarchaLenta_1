/*
    *Objetivo: Esse código tem como objetivo testar a shield L293 com o motor de passo da marcha lenta
    *Data: 06/09/2022
    *Status: Funcionando
    *Observações: O pistão ao chegar no final do curso ele solta, segure a ponta enquanto estiver rodando o código.
*/

#include "mbed.h"

DigitalIn BT(BUTTON1);

DigitalOut IN1_BOBA(D13); 
DigitalOut IN2_BOBB(D12);
DigitalOut EN_BOB1(D11);

DigitalOut IN1_BOBC(D8);
DigitalOut IN2_BOBD(D10);
DigitalOut EN_BOB2(D9);

int delay = 4;

void fechando (void);
void abrindo (void);

int main()
{
    IN1_BOBA = 0;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD = 0;

    EN_BOB1 = 1;
    EN_BOB2 = 1;

    while(1) {
        if(BT==1) {

            for (int i = 0; i < 50; i++) {
                fechando();
            }
            for (int i = 49 ; i >0; i--) {
                abrindo();
            }
        }
    }
}
void fechando()
{
    wait_ms(delay);
    IN1_BOBA = 1;
    IN2_BOBB = 0;
    IN1_BOBC = 1;
    IN2_BOBD = 0;
    //1
    wait_ms(delay);
    IN1_BOBA = 1;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD =0;
    //2
    wait_ms(delay);
    IN1_BOBA = 1;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD =1;
    //3
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD =1;
    //4
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 1;
    IN1_BOBC = 0;
    IN2_BOBD = 1;
    //5
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 1;
    IN1_BOBC = 0;
    IN2_BOBD =0;
    //6
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 1;
    IN1_BOBC = 1;
    IN2_BOBD =0;
    //7
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 0;
    IN1_BOBC = 1;
    IN2_BOBD =0;
}
void abrindo()
{
    //7
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 0;
    IN1_BOBC = 1;
    IN2_BOBD =0;
    //6
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 1;
    IN1_BOBC = 1;
    IN2_BOBD =0;
    //5
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 1;
    IN1_BOBC = 0;
    IN2_BOBD =0;
    //4
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 1;
    IN1_BOBC = 0;
    IN2_BOBD = 1;
    //3
    wait_ms(delay);
    IN1_BOBA = 0;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD =1;
    //2
    wait_ms(delay);
    IN1_BOBA = 1;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD =1;
    //1
    wait_ms(delay);
    IN1_BOBA = 1;
    IN2_BOBB = 0;
    IN1_BOBC = 0;
    IN2_BOBD =0;
    //0
    wait_ms(delay);
    IN1_BOBA = 1;
    IN2_BOBB = 0;
    IN1_BOBC = 1;
    IN2_BOBD = 0;
}

