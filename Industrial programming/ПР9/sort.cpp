#include <iostream>
#include "main.cpp"
template <class Type, int size> void sort(Type(&elements)[size])
{
    bool finished = false;

    // ���� ������ �� ������������
    while (!finished) {
        finished = true;

        // ���� ������� �� ������� � ������
        for (int i = 0; i < size - 1; i++) {
            // ���� ������� ������ ���������� - ������
            if (elements[i] > elements[i + 1]) {
                std::swap(elements[i], elements[i + 1]);
                finished = false;
            }
        }
    }
}

