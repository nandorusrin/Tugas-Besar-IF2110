#include "library.h"
#include "foodtree.h"
#include "foodconversion.h"
#include "arrtable.h"
#include "arrorder.h"
#include "handtray.h"
#include "commands.c"

int main () {
	
	MapMatrix R1, R2, R3, RK;
    RK.NBrsEff = 8;
    R1.NBrsEff = 8;
    R2.NBrsEff = 8;
    R3.NBrsEff = 8;
    RK.NKolEff = 8;
    R1.NKolEff = 8;
    R2.NKolEff = 8;
    R3.NKolEff = 8;
    
	R1.T[1][1] = "--"; R1.T[1][2] = "XX"; R1.T[1][3] = "--"; R1.T[1][4] = "--"; R1.T[1][5] = "--"; R1.T[1][6] = "--"; R1.T[1][7] = "--"; R1.T[1][8] = "--";
    R1.T[2][1] = "XX"; R1.T[2][2] = "01"; R1.T[2][3] = "XX"; R1.T[2][4] = "--"; R1.T[2][5] = "--"; R1.T[2][6] = "XX"; R1.T[2][7] = "02"; R1.T[2][8] = "XX";
    R1.T[3][1] = "--"; R1.T[3][2] = "XX"; R1.T[3][3] = "--"; R1.T[3][4] = "--"; R1.T[3][5] = "--"; R1.T[3][6] = "--"; R1.T[3][7] = "--"; R1.T[3][8] = "--";
    R1.T[4][1] = "--"; R1.T[4][2] = "--"; R1.T[4][3] = "--"; R1.T[4][4] = "--"; R1.T[4][5] = "--"; R1.T[4][6] = "--"; R1.T[4][7] = "--"; R1.T[4][8] = "--";
    R1.T[5][1] = "--"; R1.T[5][2] = "--"; R1.T[5][3] = "--"; R1.T[5][4] = "--"; R1.T[5][5] = "--"; R1.T[5][6] = "--"; R1.T[5][7] = "--"; R1.T[5][8] = "DD";
    R1.T[6][1] = "--"; R1.T[6][2] = "XX"; R1.T[6][3] = "--"; R1.T[6][4] = "--"; R1.T[6][5] = "--"; R1.T[6][6] = "--"; R1.T[6][7] = "--"; R1.T[6][8] = "--";
    R1.T[7][1] = "XX"; R1.T[7][2] = "03"; R1.T[7][3] = "XX"; R1.T[7][4] = "--"; R1.T[7][5] = "--"; R1.T[7][6] = "XX"; R1.T[7][7] = "04"; R1.T[7][8] = "XX";
    R1.T[8][1] = "--"; R1.T[8][2] = "XX"; R1.T[8][3] = "--"; R1.T[8][4] = "--"; R1.T[8][5] = "DD"; R1.T[8][6] = "--"; R1.T[8][7] = "--"; R1.T[8][8] = "--";

    R2.T[1][1] = "--"; R2.T[1][2] = "--"; R2.T[1][3] = "--"; R2.T[1][4] = "--"; R2.T[1][5] = "--"; R2.T[1][6] = "--"; R2.T[1][7] = "XX"; R2.T[1][8] = "--";
    R2.T[2][1] = "DD"; R2.T[2][2] = "--"; R2.T[2][3] = "__"; R2.T[2][4] = "--"; R2.T[2][5] = "--"; R2.T[2][6] = "XX"; R2.T[2][7] = "06"; R2.T[2][8] = "XX";
    R2.T[3][1] = "--"; R2.T[3][2] = "--"; R2.T[3][3] = "--"; R2.T[3][4] = "--"; R2.T[3][5] = "--"; R2.T[3][6] = "--"; R2.T[3][7] = "XX"; R2.T[3][8] = "--";
    R2.T[4][1] = "XX"; R2.T[4][2] = "05"; R2.T[4][3] = "XX"; R2.T[4][4] = "--"; R2.T[4][5] = "--"; R2.T[4][6] = "--"; R2.T[4][7] = "--"; R2.T[4][8] = "--";
    R2.T[5][1] = "--"; R2.T[5][2] = "--"; R2.T[5][3] = "--"; R2.T[5][4] = "--"; R2.T[5][5] = "--"; R2.T[5][6] = "--"; R2.T[5][7] = "--"; R2.T[5][8] = "--";
    R2.T[6][1] = "--"; R2.T[6][2] = "--"; R2.T[6][3] = "--"; R2.T[6][4] = "--"; R2.T[6][5] = "--"; R2.T[6][6] = "--"; R2.T[6][7] = "XX"; R2.T[6][8] = "--";
    R2.T[7][1] = "XX"; R2.T[7][2] = "07"; R2.T[7][3] = "XX"; R2.T[7][4] = "--"; R2.T[7][5] = "--"; R2.T[7][6] = "XX"; R2.T[7][7] = "08"; R2.T[7][8] = "XX";
    R2.T[8][1] = "--"; R2.T[8][2] = "--"; R2.T[8][3] = "--"; R2.T[8][4] = "--"; R2.T[8][5] = "--"; R2.T[8][6] = "--"; R2.T[8][7] = "Xx"; R2.T[8][8] = "--";

    R3.T[1][1] = "--"; R3.T[1][2] = "--"; R3.T[1][3] = "--"; R3.T[1][4] = "--"; R3.T[1][5] = "DD"; R3.T[1][6] = "--"; R3.T[1][7] = "--"; R3.T[1][8] = "--";
    R3.T[2][1] = "DD"; R3.T[2][2] = "--"; R3.T[2][3] = "--"; R3.T[2][4] = "--"; R3.T[2][5] = "--"; R3.T[2][6] = "--"; R3.T[2][7] = "--"; R3.T[2][8] = "--";
    R3.T[3][1] = "--"; R3.T[3][2] = "XX"; R3.T[3][3] = "09"; R3.T[3][4] = "XX"; R3.T[3][5] = "--"; R3.T[3][6] = "--"; R3.T[3][7] = "XX"; R3.T[3][8] = "--";
    R3.T[4][1] = "--"; R3.T[4][2] = "--"; R3.T[4][3] = "--"; R3.T[4][4] = "--"; R3.T[4][5] = "--"; R3.T[4][6] = "XX"; R3.T[4][7] = "10"; R3.T[4][8] = "XX";
    R3.T[5][1] = "--"; R3.T[5][2] = "--"; R3.T[5][3] = "--"; R3.T[5][4] = "--"; R3.T[5][5] = "--"; R3.T[5][6] = "--"; R3.T[5][7] = "XX"; R3.T[5][8] = "--";
    R3.T[6][1] = "--"; R3.T[6][2] = "--"; R3.T[6][3] = "XX"; R3.T[6][4] = "--"; R3.T[6][5] = "--"; R3.T[6][6] = "--"; R3.T[6][7] = "--"; R3.T[6][8] = "--";
    R3.T[7][1] = "--"; R3.T[7][2] = "XX"; R3.T[7][3] = "10"; R3.T[7][4] = "XX"; R3.T[7][5] = "--"; R3.T[7][6] = "--"; R3.T[7][7] = "--"; R3.T[7][8] = "--";
    R3.T[8][1] = "--"; R3.T[8][2] = "--"; R3.T[8][3] = "XX"; R3.T[8][4] = "--"; R3.T[8][5] = "--"; R3.T[8][6] = "XX"; R3.T[8][7] = "12"; R3.T[8][8] = "XX";

    RK.T[1][1] = "aa"; RK.T[1][2] = "--"; RK.T[1][3] = "--"; RK.T[1][4] = "--"; RK.T[1][5] = "--"; RK.T[1][6] = "--"; RK.T[1][7] = "--"; RK.T[1][8] = "--";
    RK.T[2][1] = "bb"; RK.T[2][2] = "--"; RK.T[2][3] = "--"; RK.T[2][4] = "--"; RK.T[2][5] = "--"; RK.T[2][6] = "--"; RK.T[2][7] = "--"; RK.T[2][8] = "--";
    RK.T[3][1] = "cc"; RK.T[3][2] = "--"; RK.T[3][3] = "--"; RK.T[3][4] = "--"; RK.T[3][5] = "--"; RK.T[3][6] = "--"; RK.T[3][7] = "--"; RK.T[3][8] = "--";
    RK.T[4][1] = "dd"; RK.T[4][2] = "--"; RK.T[4][3] = "--"; RK.T[4][4] = "--"; RK.T[4][5] = "--"; RK.T[4][6] = "--"; RK.T[4][7] = "--"; RK.T[4][8] = "--";
    RK.T[5][1] = "ee"; RK.T[5][2] = "--"; RK.T[5][3] = "--"; RK.T[5][4] = "ii"; RK.T[5][5] = "jj"; RK.T[5][6] = "vv"; RK.T[5][7] = "--"; RK.T[5][8] = "--";
    RK.T[6][1] = "ff"; RK.T[6][2] = "--"; RK.T[6][3] = "--"; RK.T[6][4] = "--"; RK.T[6][5] = "--"; RK.T[6][6] = "--"; RK.T[6][7] = "--"; RK.T[6][8] = "--";
    RK.T[7][1] = "gg"; RK.T[7][2] = "--"; RK.T[7][3] = "--"; RK.T[7][4] = "--"; RK.T[7][5] = "--"; RK.T[7][6] = "--"; RK.T[7][7] = "--"; RK.T[7][8] = "--";
    RK.T[8][1] = "hh"; RK.T[8][2] = "--"; RK.T[8][3] = "--"; RK.T[8][4] = "kk"; RK.T[8][5] = "ll"; RK.T[8][6] = "mm"; RK.T[8][7] = "nn"; RK.T[8][8] = "oo";
	Player P;
	/*char C;
	Stack H;
	Stack T;
	FoodTree F;*/
	Point PTray;
	Graph G;
    //ArrOrder AO;
    //MakeEmptyAO(&AO);
    ArrTable AT;
    InitiateAT(R1, R2, R3, &AT);
    ArrCounter AC;
    ReadCounter(RK,&AC,&PTray);
    printf("hai");
    MakeGraph(&G);
    printf("tes");
    
    /*int i;
    for (i=1;i<=16;i++){
		printf("%c\n",ElmtA(AC,i).Code);
		printf("%d %d\n",Ordinat(ElmtA(AC,i).Position),Absis(ElmtA(AC,i).Position));
	}
    printf("%d %d\n",PTray.i,PTray.j);
    P.Money=0;*/
	P.Room = 3;
	//ElmtA(AT,1).Occupied = true;
    P.Position.i = 1;
    P.Position.j = 5;
    
    GU(AT,AC,PTray,R3,&P,G);
    printf("%d %d\n",P.Position.i,P.Position.j);
    /*Neff(AO)=2;
	ElmtA(AO,1).TableIndex = 3;
	ElmtA(AO,2).TableIndex = 1;
	ElmtA(AO,1).DishKey = 'q';
	ElmtA(AO,2).DishKey = 'p';
	STARTTREE();
	BuildTree(&F);
	
	CreateEmptyStack(&H);
	CreateEmptyStack(&T);
    TAKE(P,AC,&H);
    if (Top(H)==Nil){
		printf("Nil");
	}
    if (Top(H) != Nil){
		PopTray(&H,&C);
		printf("%c\n",C);
	}
	
	Push(&H,'a');
	Push(&H,'b');
	Push(&H,'d');
	Push(&H,'h');
	
	PUT(P,Ordinat(PTray),Absis(PTray),&H,&T,F);

	Push(&T,'p');
	
	GIVE(&P,&AT,&AO,&T);
    printf("%d\n",P.Money);
    for (i=1;i<=Neff(AO);i++){
		printf("%c\n",ElmtA(AO,i).DishKey);
	}
    if (ElmtA(AT,i).Occupied ==false){
		printf("sudah pergi");
	}
	
	if(IsStackEmpty(T)){
		printf("kosong");
	}*/
    
    return 0;
}
    