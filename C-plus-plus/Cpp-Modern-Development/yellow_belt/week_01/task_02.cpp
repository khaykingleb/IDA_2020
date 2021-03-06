/*
Вычислите суммарную массу имеющих форму прямоугольного параллелепипеда блоков одинаковой плотности, но разного размера.

# Указание
Считайте, что размеры блоков измеряются в сантиметрах, плотность — в граммах на кубический сантиметр, а итоговая масса — в граммах. 
Таким образом, массу блока можно вычислять как простое произведение плотности на объём.

# Формат ввода
В первой строке вводятся два целых положительных числа: количество блоков N и плотность каждого блока R. Каждая из следующих N строк содержит 
три целых положительных числа W, H, D — размеры очередного блока.

Гарантируется, что:
• количество блоков N не превосходит 10^5;
• плотность блоков R не превосходит 100;
• размеры блоков W, H, D не превосходят 10^4.
*/

#include <iostream>

using namespace std;


int main() {
    uint32_t n, r;
    cin >> n >> r;

    uint64_t mass = 0;

    for (size_t i = 0; i < n; ++i) {
        uint64_t w, h, d;
        cin >> w >> h >> d;
        int64_t volume = w * h * d;
        mass += r * volume;
    }

    cout << mass;

    return 0;
}


// or
// int main() {
//    int N, R;
//    cin >> N >> R;
//    uint64_t answer = 0;
//    for (int i = 0; i < N; ++i) {
//        int W, H, D;
//        cin >> W >> H >> D;
//        // Если не привести W к типу uint64_t перед умножением, 
//        // произведение будет иметь тип int и случится переполнение.
//        // Альтернативное решение — хранить сами W, H, D в uint64_t
//        answer += static_cast<uint64_t>(W) * H * D;
//    }
//    answer *= R;
//    cout << answer << endl;
//    return 0;
// }
