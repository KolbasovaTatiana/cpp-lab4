#include <iostream>
#include <cmath>

void BubbleSort(long list[], int lenght) {
    while(lenght--) {
        int flag = 0;
        for (int x = 0; x < lenght; x++) {
            if (list[x] > list[x+1]) {
                std::swap(list[x], list[x+1]);
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

int main() {
    unsigned long n, sum;
    std::cin >> n;
    long* gramm = new long[n];

    for (int i = 0; i<n; i++) {
        std::cin >> gramm[i];
    }
    sum = pow(10,9);
    BubbleSort(gramm, n); //получаем отсортированный массив n натуральных значений граммовок
    
    /*for (int x = 0; x < n; x++) {     //вывод значений массива
        std::cout << gramm[x] << '\t';
    }*/

    //sum = ( ( (gramm[0]+gramm[n-1]) * n) / 2);  формула по которой считается сумма арифметической прогрессии

    if (n%4 != 0 && (gramm[0]+gramm[n-1])%4 != 0) { 
        std::cout << "NO" << std::endl;
    }
    else if (n%4 == 0) {
        std::cout << "YES" << std::endl;
        std::cout << n/2 << std::endl;
        for (int i1 = 0; i1 < n/2; i1+= 2) {
            std::cout << gramm[i1] << " " << gramm[n-1-i1] << " ";
        }
        std::cout << std::endl;
        std::cout << n/2 << std::endl;
        for (int i2 = 1; i2 < n/2; i2+= 2) {
            std::cout << gramm[i2] << " " << gramm[n-1-i2] << " ";
        }
        std::cout << std::endl;    
    }
    else {
        std::cout << "YES" << std::endl;
        std::cout << ((n-1)/2)+1 << std::endl;
        for (int i3 = 0; i3 < (n-1)/2; i3+=2) {
            std::cout << gramm[i3] << " " << gramm[n-2-i3] << " ";
        }
        std::cout << std::endl;
        std::cout << (n-1)/2 << std::endl;
        
        std::cout << gramm[n-1] << " ";
        for (int i4 = 1; i4 < (n-1)/2; i4+=2) {
            std::cout << gramm[i4] << " " << gramm[n-2-i4] << " ";
        }
        std::cout << std::endl;
    }
    
    

}