#include <iostream>

int choice;
int days;
double temp;
double average;
double average2;


void menu(){

    std::cout << "Menu:" << '\n';
    std::cout << "1 - Girilen sicakliklarin ortalamasini goster." << '\n';
    std::cout << "2 - En sicak gunu goster." << '\n';
    std::cout << "3 - En soguk gunu goster." << '\n';
    std::cout << "4 - Programi kapat." << '\n';
}

void calculateAverage(int* array, int days, double& average2){

    int sum = 0;
    for(int i = 0; i < days; ++i){

        sum += array[i];
    }

    average2 = (double)sum / days;
    std::cout << "Ortalamasi: " << average2 << '\n';
}

void findmax(int* array, int days)
{
    int max = array[0];
    int maxIndex = 0;
    for(int i = 0; i < days; ++i){
        if(array[i] > max) {
            max = array[i];
            maxIndex = i;
        }
    }

    std::cout << maxIndex + 1 << " . gun ve " << "en yuksek hava sicakligi: " << max << " derece." << '\n';
}

void findmin(int* array, int days){
    int min = array[0];
    int minIndex = 0;
    for(int i = 0; i < days; ++i){
        if(array[i] < min) {
            min = array[i];
            minIndex = i;
        }
    }
    std::cout << minIndex + 1 << " . gun ve " << "en dusuk hava sicakligi: " << min << " derece." << '\n';
}

int main()
{


    std::cout << "Kac gunun sicakligini girmek istiyorsunuz?(1-7): " << '\n';
    std::cin >> days;

    int* array = new int[days];

    for(int i = 0; i < days; ++i){

    std::cout << "Gun " << i + 1 << " icin en yuksek sicaklik: " << '\n';
    std::cin >> array[i];
    }

    do{
        menu();
        std::cout << "Seciminizi yapin: " << '\n';
        std::cin >> choice;

        switch(choice){
            case 1:
                double average2;
                calculateAverage(array, days, average2);
                break;
            case 2:
                findmax(array, days);
                break;
            case 3:
                findmin(array, days);
                break;
            case 4:
                std::cout <<"Program kapatiliyor...";
               break;
        }
    } while(choice != 4);


    return 0;
}