#include <iostream>
using namespace std;

int main() {
    int V;
    cin >> V;
    
    int UmgA[101], UmgB[101];
    int total;
    cin >> total;
    for (int i = 1; i <= total; ++i)
        cin >> UmgA[i];
    for (int i = 1; i <= total; ++i)
        cin >> UmgB[i];
        
    int PA, PB;
    cin >> PA >> PB;
    
    float EfA[101], EfB[101];
    for (int i = 1; i <= total; ++i) {
        EfA[i] = (float)(UmgA[i] / PA);
        EfB[i] = (float)(UmgB[i] / PB);
    }
    
    int choicesA = 0, choicesB = 0;
    int pozA = 1, pozB = 1;
    int Vcopy = V;
    
    while (V > PA && V > PB) {
        if (EfA[pozA] > EfB[pozB]) {
            ++choicesA;
            V -= PA;
            ++pozA;
        } else if (EfA[pozA] == EfB[pozB]) {
            if (PA < PB) {
                ++choicesA;
                V -= PA;
                ++pozA;
            } else {
                ++choicesB;
                V -= PB;
                ++pozB;
            }
        } else {
            ++choicesB;
            V -= PB;
            ++pozB;
        }
    }
    
    int Pr = choicesA * PA + choicesB * PB + V;
    cout << choicesA << " " << PA << endl;
    cout << choicesB << " " << PB << endl;
    cout << V << endl;
    cout << Pr << endl;
    
    return 0;
}