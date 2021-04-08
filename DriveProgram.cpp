#include <iostream>
using namespace std;
//Kiem tra ma nguoi dung
int CheckPCode (int Code){
  if(Code == 12345678){
    return 1;
  }else{
  	cout << "MA NGUOI DUNG KHONG HOP LE. VUI LONG NHAP LAI! " <<endl;
    return 0;
  }
}
//Man hinh hop so
void Gearbox(){
		cout << "XIN MOI NHAP LUA CHOM: \n";
  		cout << "1. P\n";
  		cout << "2. R\n";
  		cout << "3. N\n";
  		cout << "4. D\n";
  		cout << "5. POWER OFF\n";
  		cout << ">> ";
}
//Kiem tra hop so
int CheckSpeed(int speed){
	if (speed == 0){//Xe dung han
		cout <<"CHU Y SU DUNG PHANH TAY DE DAM BAO AN TOAN";
		return 1;
	}else {//Xe chua dung
		cout << "HAY CHAC CHAN XE DA DUNG VA VAN TOC LA 0 KM/H";
		return 0;
	}
}
//Menu tien lui
void RDMenu(){
	cout << "MOI LUA CHOM: \n";
  	cout << "1. TANG TOC\n";
  	cout << "2. GIAM TOC\n";
  	cout << "3. PHANH\n";
  	cout << "4. TRO VE MENU\n";
  	cout << ">>";
}

int main(){
  int PCode;
  int checkCode;
  int checkSpd;
  int speed = 0;
  int choice;
  do
  {
   cout << "NHAP MA SO CA NHAN: \n";
   cin >> PCode;
   int checkCode = CheckPCode(PCode);
  } while (checkCode==0);
  do{
  	Gearbox();
  	cin >> choice;
  }while(choice < 0 && choice > 6); //Kiem tra viec nhap so
  system("cls");
  switch(choice){
  	case 1: //P (Park)
  		checkSpd= CheckSpeed(speed);
  		if (checkSpd==1){
  			cout << "DA VE SO P\n";
  			cout << "CHU Y SU DUNG PHANH TAY DE DAM BAO AN TOAN";
		}else{
			cout << "HAY CHAN CHAN XE DA DUNG VA VAN TOC LA 0 KM/H \n";
		}
  		break;
  	case 2: //R (Reverse)
  	
  		break;
  	case 3: //N (Neutral)
  	
  		break;
  	case 4: //D (Drive)
  	
  		break;
  	case 5: //POWER OFF
  		cout << "THE CAR POWER OFF";
  		break;
  }
  return 0;
}
