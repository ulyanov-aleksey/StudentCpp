// ��������������� ����:
// �����������

#pragma once

#include <iostream>
using namespace std;

namespace Unions {

    int main()
    {
        union {
            // ��� - ���������� �����������. ��� ��������,
            // ��� ��� ��������� � �������� ����������
            // ���� ������� ��� �������.
            char oneByte;
            short twoBytes;
            int fourBytes;
            float eightBytes;
            double tenBytes;
        };

        // �����������, ��� ������ ���� - ���������� ������ ������ �� 1 ���� ������.
        // ()()()()()()()()()()
        // ��� �������� ������ ����������� ������� ������������� 10 ����,
        // ��� ��� ����� ������� ������� � ����������� ����� ������ 10 ����.
        // � ������ �����������, ��� �� ��������� �������� ����:

        oneByte = 'c';

        // ������ �� ����� �� �� ����� ������ ������:
        // ('c')()()()()()()()()()
        // ����� ������, ��� ��� - ����� �� �� ������ ������, ��� �� ����� � ������.
        // ������ ������� ���:

        fourBytes = 4;

        // ������ ��� ����� ���-�� ����� �����:
        // (4)(0)(0)(0)()()()()()()
        // � ������:

        twoBytes = 1;

        // ���� ������:
        // (1)(0)()()()()()()()()
        // ����� ����� �������� �������������� - ��� ������� ����� �� ���������� � �����������
        // �� ������ ��� ��������� �� ���� �� �����������.
        // � ���� ���� ���� ������� ����: �����������, ��������
        // ���� ��������� ������������ �������� �������� ����������� ������.

        // ���������� ��� ����� ������������ ������:

        union road {
            int meters;
            short miles;
        } road1;

        // ������ ��� ����������� ����������� 'road'. ��� ��������, ��� ��� ������� � ����������
        // ����� ����������� ��� ���������� ������������ �������� ����� [.] ��� ��������
        // ������� [->].
        // ���� ������� � ���, ��� ���� ��� ���������� ����� ����� ����� ���, ����� ������� �����
        // ������ � ����� ��� ������, �� � ��� ���� ������� ��������� ��� ���������� � ���
        // ������ 4 ����� ��� ������ � 2 ����� ��� ����, ��� � ����� ���� 6 ����.
        // ���� �� ������� �����������, �� ��������� ��������� ������������ ��� ��������� �����
        // ������ ������ ������ 4 ������. 4 ����� ��� 6 ���� - ������������� 50%.

        // ��������� � ���������� ������ �����������, ��� ��� ����������, ����� ��������� �����
        // ��� �������.

        road1.meters = 134;
        cout << road1.meters;

        // ����������� �������� ����� ������������ �����������, �� ��� �� ��� �������� ��������.
        // � ���� �� ������ ���� �������� �������������� (� �� ������), �� ��� �� �����
        // ������������ ���������� �����������, ��������, ����� ��� ���������.
    }
}
