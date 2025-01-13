#include <windows.h>
#include <string>
#include <vector>

// Global variables
HINSTANCE hInst;
std::vector<std::wstring> todoList;
HWND hListBox, hEdit;

// Function prototypes
void AddItem(HWND hWnd);
void InitializeWindow(HWND hWnd);

// Window Procedure
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
        case WM_CREATE:
            InitializeWindow(hWnd);
            break;

        case WM_COMMAND:
            switch (LOWORD(wParam)) {
                case 1:  // Add button clicked
                    AddItem(hWnd);
                    break;
                case 2:  // Close button clicked
                    PostQuitMessage(0);
                    break;
            }
            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

void InitializeWindow(HWND hWnd) {
    // Create a list box
    hListBox = CreateWindowW(L"LISTBOX", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER | LBS_NOTIFY,
                            20, 50, 300, 200, hWnd, NULL, hInst, NULL);

    // Create an edit control for input
    hEdit = CreateWindowW(L"EDIT", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL,
                        20, 10, 200, 30, hWnd, NULL, hInst, NULL);

    // Create a button to add items
    CreateWindowW(L"BUTTON", L"Add", WS_CHILD | WS_VISIBLE,
                230, 10, 80, 30, hWnd, (HMENU)1, hInst, NULL);

    // Create a button to close
    CreateWindowW(L"BUTTON", L"Close", WS_CHILD | WS_VISIBLE,
                130, 260, 80, 30, hWnd, (HMENU)2, hInst, NULL);

    // Set the window always on top
    SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
}

void AddItem(HWND hWnd) {
    wchar_t buffer[256];
    GetWindowTextW(hEdit, buffer, 256);

    if (wcslen(buffer) > 0) {
        SendMessageW(hListBox, LB_ADDSTRING, 0, (LPARAM)buffer);
        SetWindowTextW(hEdit, L"");  // Clear the input field
    }
}

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow) {
    hInst = hInstance;
    WNDCLASSW wc = {0};

    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"TodoAppClass";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClassW(&wc);

    HWND hWnd = CreateWindowW(L"TodoAppClass", L"Todo List", WS_OVERLAPPEDWINDOW ^ WS_THICKFRAME,
                            CW_USEDEFAULT, CW_USEDEFAULT, 360, 340, NULL, NULL, hInstance, NULL);

    if (!hWnd) {
        return 0;
    }

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    MSG msg = {0};
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}
