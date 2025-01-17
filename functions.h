#pragma once
#ifndef  _FUNCTION_H_
#define _FUCTION_H_

/*
@brief ��������� ����� x �� ��������
@param x �����, ������� �� ���������
@return 1 - ���� ������� �����, 0 - ���� ������� �������
*/
int Prime(unsigned long long int x);

/*
@brief ������� �������� ����� �� ���������
@param x �����, ������� �� ���������
@return 1 - ���� ������� �����, 0 - ���� ������� �������
*/
int isPalindrome(int x);

/*
@brief ������� ��� ���������� ����������� ������ ��������
@param a, b - �����, ��� ����� �������� �� ����
@return ���������� ����� ��������
*/
long long gcd(long long a, long long b);

/*
@brief ������� ��� ���������� ����������� ������ ��������
@param a, b - �����, ��� ����� ������� �� ����
@return ���������� ����� �������
*/
long long lcm(long long a, long long b);

/*
@brief ������� ��� ���������� �������� �����
@param a_ - ����� ������� �������� � �������
@return ������� �����
*/
long long int Square(long long int a_);

/*
@brief ������� ��������� ����� ��������� ������ j_ ����������� �����
@param j_ - ����������� ����������� �����
@return ����� ���������
*/
long long int SumSquare(int j_);

/*
@brief ������� ��������� ������� ����� ������ j_ ����������� �����
@param j_ - ����������� ����������� �����
@return ������� �����
*/
long long int SquareSum(int j_);

/*
@brief ������������ ������ ���� � �����
@param str_ ������
@return �����
*/
int char_to_int(char str_);
#endif