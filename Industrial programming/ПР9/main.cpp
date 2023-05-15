#include <iostream>

template <class Type, int size> void Sort(Type(&elements)[size])
{
    bool finished;

    // Пока массив не отсортирован
    while (!finished) {
        finished = true;

        // Цикл прохода по массиву и замены
        for (int i = 0; i < size - 1; i++) {
            // Если элемент больше следующего - замена
            if (elements[i] > elements[i + 1]) {
                std::swap(elements[i], elements[i + 1]);
                finished = false;
            }
        }
    }
}

//#include "main1.cpp"

int main()
{
    int nums[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };

    Sort(nums);

    for (int i : nums)
    {
        std::cout << i;
    }
}