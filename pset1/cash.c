#include <stdio.h>
#include <cs50.h>
#include <math.h>

//some test cases fail because i have not rounded it off to correct decimal point

int calculate(float value);
int main(void){

    float dollars = 0;
    while (true)
    {
    dollars = get_float("Enter in dollars: ");
    if (dollars >=0 ){
        break;
        }
    }

    printf("%i\n",calculate(dollars));

}

int calculate(float value)
{


    float quaters = 0.25;
    float dimes = 0.10;
    float nickles = 0.05;
    float penny = 0.01;
    int coins = 0;
    float reminder = 0;
    if (value ==0){
        return coins;
    }


    while(true){
            if (value >= quaters){
                reminder = value-quaters;
                value = reminder;
                coins ++;
            }else if (value >= dimes){
                reminder = value-dimes;
                value = reminder;
                coins ++;
            }else if (value >=nickles){
                reminder = value-nickles;
                value = reminder;
                coins ++;
            }else {
                reminder = value-penny;
                value = reminder;
                coins ++;
            }
            if (reminder <=0){
                break;
            }
    }
    return coins;
}


