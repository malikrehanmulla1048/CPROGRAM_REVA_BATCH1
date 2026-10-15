#include<stdio.h>
int main() {
    int money = 7581;
    int notes[] = {100, 50, 20, 10, 5, 2, 1};
    int total_notes = 0;
    for(int i = 0; i < 7; i++) {
        if(money >= notes[i]) {
            total_notes += money / notes[i];
            money = money % notes[i];
        }
    }
    printf("Number of notes: %d\n", total_notes);
    // if(money > 100) {
    //     notes = money / 100;
    //     money = money % 100;
    // }
    // if(money > 50) {
    //     notes += money / 50;
    //     money = money % 50;
    // }
    // if(money > 20) {
    //     notes += money / 20;
    //     money = money % 20;
    // }
    // if(money > 10) {
    //     notes += money / 10;
    //     money = money % 10;
    // }
    // if(money > 5) {
    //     notes += money / 5;
    //     money = money % 5;
    // }
    // if(money > 2) {
    //     notes += money / 2;
    //     money = money % 2;
    // }
    // if(money > 1) {
    //     notes += money / 1;
    //     money = money % 1;
    // }
    // printf("Number of notes: %d\n", notes);
    return 0;
}