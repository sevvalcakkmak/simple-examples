#include <stdio.h>
//Converting from seconds to hours, minutes and second
int main(){
    int sec, min, hour;
    printf("%s", "Please enter the second value: ");
    scanf("%d", &sec);
    min = sec / 60;
    hour = min / 60;
    sec = sec % 60;
    min = min % 60;
    printf("%d:%d:%d", hour, min, sec); 

}