#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

typedef struct TIME{
    int h_;
    short min_;
    short sec_;
}TIME;

int smh_to_s(TIME time){
    return time.h_ * 3600 + time.min_ * 60 + time.sec_;
}
TIME time_to_smh(int s){
    TIME time   = {0,0,0,};
    time.h_     = s/3600;
    time.min_   = (s%3600)/60;
    time.sec_   = (s%3600)%60;
    return time;
}

void echo_time_smh(TIME time){
    cout << time.h_ <<" : "<< time.min_ << " : "<< time.sec_<< endl;
}

int main(){
    // entre ici votre temps en h min s
    TIME t = {0,10,1}; // h_min_s
    int t_s = smh_to_s(t);

    while(t_s>0){
        echo_time_smh(time_to_smh(t_s));
        sleep(1);
        system("clear");
        t_s--;
    }
    cout <<"=#=#=#=#=#=#[FINI]#=#=#=#=#=#="<<endl;
    return 0;
}
