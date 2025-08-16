/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    /*This is just to declare variables*/
    float bat1=100/9, bat2=100/9, bat3=100/9, bat4=100/9, bat5=100/9, bat6=100/9, bat7=100/9, bat8=100/9, bat9=100/9;
    int bbat1, bbat2, bbat3, bbat4, bbat5, bbat6, bbat7, bbat8, bbat9;
    float bpow1, bpow2, gbpow1, gbpow2, numb1, numb2, n_numb1, n_numb2, alm, tot1, tot2, tot3;
    /*Introduce the Battle Power of each army*/
    printf("Introduce the Attacker's power\t");
    scanf("%f",&bpow1);
    printf("Introduce the Defender's power\t");
    scanf("%f",&bpow2);
    /*Quadratic equation to determine who is stronger, change numbers at the end to make to balance*/
    gbpow1=(bpow1*(bpow1+(bpow2/2.5)));
    gbpow2=(bpow2*(bpow2+(bpow1/2.5)));
    numb1=gbpow1/gbpow2;
    numb2=gbpow2/gbpow1;
    n_numb1=numb1-1;
    n_numb2=numb2-1;
    /*LONG series of if's to determine the changes in the chances, change numbers at the end to balance it*/
    if(numb1>1){
        bat3=bat3-(n_numb1*2);
        alm=(n_numb1*5);
        bat9=alm+bat9;
        
        bat2=bat2-(n_numb1*3.5);
        alm=(n_numb1*7.5);
        bat8=alm+bat8;
        
        bat1=bat1-(n_numb1*4.5);
        alm=(n_numb1*10);
        bat7=alm+bat7;
        if(numb1>1.5){
            bat3=bat3-(n_numb1*1);
            alm=(n_numb1*1);
            bat9=alm+bat9;
            
            bat2=bat2-(n_numb1*1.5);
            alm=(n_numb1*1.5);
            bat8=alm+bat8;
            
            bat1=bat1-(n_numb1*0.5);
            alm=(n_numb1*0.5);
            bat7=alm+bat7;
            if(numb1>2){
                bat3=bat3-(n_numb1*0.5);
                alm=(n_numb1*0.5);
                bat7=alm+bat7;
                
                bat2=bat2-(n_numb1*0.5);
                alm=(n_numb1*0.5);
                bat8=alm+bat8;
                
                bat1=bat1-(n_numb1*5);
                alm=(n_numb1*5);
                bat9=alm+bat9;
            }
        }
    }
    if(numb2>1){
        bat9=bat9-(n_numb2*2);
        alm=(n_numb2*5);
        bat3=alm+bat3;
        
        bat8=bat8-(n_numb2*3.5);
        alm=(n_numb2*7.5);
        bat2=alm+bat2;
        
        bat7=bat7-(n_numb2*4.5);
        alm=(n_numb2*10);
        bat1=alm+bat1;
        if(numb2>1.5){
            bat9=bat9-(n_numb2*1);
            alm=(n_numb2*1);
            bat3=alm+bat3;
            
            bat8=bat8-(n_numb2*1.5);
            alm=(n_numb2*1.5);
            bat2=alm+bat2;
            
            bat7=bat7-(n_numb2*0.5);
            alm=(n_numb2*0.5);
            bat1=alm+bat1;
            if(numb2>2){
                bat9=bat9-(n_numb2*0.5);
                alm=(n_numb2*0.5);
                bat1=alm+bat1;
                
                bat8=bat8-(n_numb2*0.5);
                alm=(n_numb2*0.5);
                bat2=alm+bat2;
                
                bat7=bat7-(n_numb2*5);
                alm=(n_numb2*5);
                bat3=alm+bat3;
            }
        }
    }
    /*This is just for setting maximum and minimum roll values*/
    tot3=bat1+bat2+bat3+bat4+bat5+bat6+bat7+bat8+bat9;
    if(tot3>100){
        alm=100/tot3;
        bat1=bat1*alm;
        bat2=bat2*alm;
        bat3=bat3*alm;
        bat4=bat4*alm;
        bat5=bat5*alm;
        bat6=bat6*alm;
        bat7=bat7*alm;
        bat8=bat8*alm;
        bat9=bat9*alm;
    }
    tot1=bat1+bat2+bat3;
    if(tot1>88){
        alm=88/tot1;
        bat1=bat1*alm;
        bat2=bat2*alm;
        bat3=bat3*alm;
    }
    tot2=bat7+bat8+bat9;
    if(tot2>88){
        alm=88/tot2;
        bat7=bat7*alm;
        bat8=bat8*alm;
        bat9=bat9*alm;
    }
        if(bat1<1){
        alm=bat1-1;
        bat4=bat4+alm;
        bat1=1;
    }
    if(bat2<2){
        alm=bat2-2;
        bat5=bat5+alm;
        bat2=2;
    }
    if(bat3<3){
        alm=bat3-3;
        bat6=bat6+alm;
        bat3=3;
    }
    if(bat7<3){
        alm=bat7-3;
        bat6=bat6+alm;
        bat7=3;
    }
    if(bat8<2){
        alm=bat8-2;
        bat5=bat5+alm;
        bat8=2;
    }
    if(bat9<1){
        alm=bat9-1;
        bat4=bat4+alm;
        bat9=1;
    }
    if(bat4<2){
        bat4=2;
    }
    if(bat5<2){
        bat5=2;
    }
    if(bat6<2){
        bat6=2;
    }
    /*This is just to translate them to a int interger instead of being float*/
    bbat1=bat1;
    bbat2=bat1+bat2;
    bbat3=bat1+bat2+bat3;
    bbat4=bat1+bat2+bat3+bat4;
    bbat5=bat1+bat2+bat3+bat4+bat5;
    bbat6=bat1+bat2+bat3+bat4+bat5+bat6;
    bbat7=bat1+bat2+bat3+bat4+bat5+bat6+bat7;
    bbat8=bat1+bat2+bat3+bat4+bat5+bat6+bat7+bat8;
    bbat9=bat1+bat2+bat3+bat4+bat5+bat6+bat7+bat8+bat9;
    printf("\nCritical Defeat Roll: %i\nMedium Defeat Roll: %i\nMinor Defeat Roll: %i\n",bbat1,bbat2,bbat3);
    printf("\nCritical Stalemate Roll: %i\nMedium Stalemate Roll: %i\nMinor Stalemate Roll: %i\n",bbat4,bbat5,bbat6);
    printf("\nCritical Victory Roll: %i\nMedium Victory Roll: %i\nMinor Victory Roll: %i\n",bbat9,bbat8,bbat7);
}
