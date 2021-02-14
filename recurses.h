#ifndef RECURSES_H_INCLUDED
#define RECURSES_H_INCLUDED

using namespace std;

//classe principal
class Player{
    public:
        void setSexo(int num);
        void setVida(int num);
        void setDinheiro(int num);
        void print();
        void downMoney();
        void upMoney();
        void downLife();
        void upLife();
    private:
        const char* sexo;
        int vida;
        int dinheiro;
};


//classes do player
class Feminino:public Player{
    public: 
        Feminino();
};
class Masculino:public Player{
    public:
        Masculino();
};;


//funçoes
void Player::upLife(){
    vida++;
}
void Player::downLife(){
    vida--;
}
void Player::upMoney(){
    dinheiro++;
}
void Player::downMoney(){
    dinheiro--;
}
void Player::setSexo(int num){
    if(num == 1){
        sexo="Feminino";
    }else if(num == 2){
        sexo="Masculino";
    }
}
void Player::setVida(int num){
    vida = num; 
}
void Player::setDinheiro(int num){
    dinheiro = num;
}
void Player::print(){
    cout << "sexo: " << sexo << endl;
    cout << "Vida: " << vida << endl;
    cout << "Dinheiro: " << dinheiro << endl;    
}


//Construtores
Feminino::Feminino(){
    setVida(3);
    setDinheiro(10);
    setSexo(1);
}
Masculino::Masculino(){
    setVida(3);
    setDinheiro(10);
    setSexo(2);
}


#endif