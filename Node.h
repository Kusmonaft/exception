#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>

using namespace std;

class Node {
public:
	int data;
	Node* prev;
	Node* next;
	Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};