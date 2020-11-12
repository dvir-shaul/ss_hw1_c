#define E 2.71828182846

double Exponent(int x){
    double i=1;
    if(x==0) return i;
    if(x==1) return E;
    for(int j=0; j<x; j++){
        i=i*E;
    }
    if(x<0) 
        i=1/i;
    return i;
}

double Power(double x, int y){
    if(y==0) return 1;
    if(y==1) return x;
    double i=1;
    for(int j=0; j<y; j++){
        i=i*x;
    }  
    if(y<0){ 
        i=1/i;
}
return i;
}