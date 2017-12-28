#include <iostream>

using namespace std;

int main() {
  int key, move, quantity, quantity1;
  
  cout << "請輸入欲書寫幾個字(不超過100字元)\n";
  cin >> quantity;
  char sentence[quantity];
  
  cout <<"請輸入欲輸入的字\n";
  cin >> sentence;
  
  while (1) {
    cout << "請輸入欲位移的次數\n";
    cin >> move;
    cout << "請輸入 1(加密) 或 2(解密) 3(結束)\n";
    cin >> key;
    
    if (key == 3) {
      break;
    } else if (key == 1) {
      for (quantity1 = 0; quantity1 < quantity; quantity1++) {
        sentence[quantity1] += move;
      }
      cout << sentence << endl;
    } else if (key == 2) {
      for (quantity1 = 0; quantity1 < quantity; quantity1++) {
        sentence[quantity1] -= move;
      }
      cout << sentence << endl;
    } else {
      cout << "無此功能\n";
      break;
    }
  }
}



#include <iostream>

using namespace std;

int main() {
  int key, move, quantity, quantity1;
  char sentence[quantity];
  
  cout <<"請輸入欲輸入的字\n";
  cin >> sentence;
  
  while (1) {
    cout << "請輸入欲位移的次數\n";
    cin >> move;
    cout << "請輸入 1(加密) 或 2(解密) 3(結束)\n";
    cin >> key;
    
    if (key == 3) {
      break;
    } else if (key == 1) {
        for (quantity1 = 0; sentence[quantity1] != '\0'; quantity1++) {
            sentence[quantity1] += move;
            if (sentence[quantity1] > 90) {
                sentence[quantity1] - 25;
            }
        }
        cout << sentence << endl;
    } else if (key == 2) {
        for (quantity1 = 0; sentence[quantity1] != '\0'; quantity1++) {
            sentence[quantity1] -= move;
            if (sentence[quantity1] > 90) {
                sentence[quantity1] + 25;
            }
        }
        cout << sentence << endl;
    } else {
        cout << "無此功能\n";
        break;
    }
  }
}