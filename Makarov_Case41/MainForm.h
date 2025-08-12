#pragma once
#include <Windows.h>
#include <CommCtrl.h>
#include <string>
#include <vector>
#include "queue.h"
#include "heap.h"
#include "binaryTree.h"

class MainForm {
public:
    MainForm();
    ~MainForm();

    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
    void Create(HINSTANCE hInstance, int nCmdShow);
    void UpdateOutput();
    void OnCommand(WPARAM wParam);

private:
    HWND hwnd;
    HWND hwndQueue;
    HWND hwndHeap;
    HWND hwndTree;
    HWND hwndInput;
    HWND hwndOutput;

    Queue<int> queue;
    Heap<int> heap;
    BinaryTree<int> tree;

    void InitializeControls();
};