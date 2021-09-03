#include <windows.h>
#include <iostream>
using namespace std;

//X I Y ZA AUTOCLICKER POZICIJU NA EKRANU
int x = 400;
int y = 400;

int main() {
    string unos;
    cout << "[DA] pokretanje autoclickera. \n"; //START AUTOCLICKER
    cout << "[NE] ne pokretanje autoclickera. \n"; //STOP AUTOCLICKER
    cout << "";
    cout << "";
    cout << "[+] Unesi odgovor --> ";
    cin >> unos;
    cout << "";
    if(unos == "DA") {
        int klikovi;
        cout << "[+] Unesi broj klikova: ";
        cin >> klikovi;
        int p;
        while(p < 10) {
            cout << "Autoclicker pocinje za " << p << "\n";
            Sleep(1000);
            p++;
        }
        int i;
        while(i < klikovi) {
            SetCursorPos(x,y);
            mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
            i++;
        }
    } else if(unos == "NE") {
        cout << "[+] Autoclicker nije upaljen!";
    }
}
