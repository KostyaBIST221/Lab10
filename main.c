#include <stdio.h>
#include <math.h>

double fa(double x) {
    if (x<=3){
        return x*x-3*x+9;
    }else{
        return 1/(x*x*x+3);
    }
}
    
double fb(double x) {
    return x*exp(sin(x*x));
}
    
int main() {
    double x;
    scanf("%lf",&x);
    printf("fa(x)=%.2lf ,fb(x)=%.2lf\n", fa(x), fb(x));
    printf("Произведение-%.2lf\nРазность квадратов-%.2lf\nУдвоенная сумма-%.2lf\n", fa(x)*fb(x), pow(fa(x),2) - pow(fb(x),2), 2*(fa(x)+fb(x)));
}
