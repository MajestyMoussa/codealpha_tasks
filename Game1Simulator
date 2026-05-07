
/*
#include <windows.h>
#include <string>
#include <sstream>

// Global variables
std::wstring englishName;
std::wstring arabicName;

// Forward declarations
LRESULT CALLBACK InputWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK ResultWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Function to create the result window
void ShowResultWindow(HINSTANCE hInstance)
{
    WNDCLASSW wc = {};
    wc.lpfnWndProc = ResultWndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"ResultWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassW(&wc);

    HWND hwndResult = CreateWindowExW(
        0,
        L"ResultWindow",
        L"Result",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME, // fixed size
        CW_USEDEFAULT, CW_USEDEFAULT,
        450, 300,
        NULL, NULL, hInstance, NULL
    );

    ShowWindow(hwndResult, SW_SHOW);
}

// Entry point for GUI program
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR, int nCmdShow)
{
    WNDCLASSW wc = {};
    wc.lpfnWndProc = InputWndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"InputWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassW(&wc);

    HWND hwndInput = CreateWindowExW(
        0,
        L"InputWindow",
        L"Enter Your Names",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME, // fixed size
        CW_USEDEFAULT, CW_USEDEFAULT,
        400, 250,
        NULL, NULL, hInstance, NULL
    );

    ShowWindow(hwndInput, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

// Input window procedure
LRESULT CALLBACK InputWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    static HWND editEnglish, editArabic, btnSubmit;

    switch (msg)
    {
    case WM_CREATE:
        CreateWindowW(L"Static", L"English Name:", WS_VISIBLE | WS_CHILD,
                      20, 20, 100, 20, hwnd, NULL, NULL, NULL);
        editEnglish = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER,
                                    130, 20, 200, 20, hwnd, NULL, NULL, NULL);

        CreateWindowW(L"Static", L"Arabic Name:", WS_VISIBLE | WS_CHILD,
                      20, 60, 100, 20, hwnd, NULL, NULL, NULL);
        editArabic = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER,
                                   130, 60, 200, 20, hwnd, NULL, NULL, NULL);

        btnSubmit = CreateWindowW(L"Button", L"Submit", WS_VISIBLE | WS_CHILD,
                                  150, 120, 100, 30, hwnd, (HMENU)1, NULL, NULL);
        break;

    case WM_COMMAND:
        if (LOWORD(wParam) == 1) // Submit button clicked
        {
            wchar_t buffer[256];

            // Get English name
            GetWindowTextW(editEnglish, buffer, 256);
            englishName = buffer;

            // Get Arabic name
            GetWindowTextW(editArabic, buffer, 256);
            arabicName = buffer;

            // Close input window safely
            PostMessage(hwnd, WM_CLOSE, 0, 0);

            // Open result window
            ShowResultWindow(GetModuleHandle(NULL));
        }
        break;

    case WM_DESTROY:
        // Do not quit yet; wait for result window
        break;

    default:
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }

    return 0;
}

// Result window procedure
LRESULT CALLBACK ResultWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        std::wstringstream ss;
        ss << L"English Name: " << englishName << L"\n";
        ss << L"Arabic Name: " << arabicName << L"\n";
        ss << L"English Letters: " << englishName.length() << L"\n";
        ss << L"Arabic Letters: " << arabicName.length() << L"\n";

        if (englishName.length() > arabicName.length())
            ss << L"Your character with your own people is simpler than with foreigners.\n";
        else if (englishName.length() < arabicName.length())
            ss << L"Your character with foreigners is simpler than with your own people.\n";
        else
            ss << L"Your character is the same with both.\n";

        ss << L"\nThank you for playing the game!";

        RECT rect = {20, 20, 420, 260};
        DrawTextW(hdc, ss.str().c_str(), -1, &rect, DT_LEFT | DT_WORDBREAK);

        EndPaint(hwnd, &ps);
        break;
    }

    case WM_DESTROY:
        PostQuitMessage(0); // Close program when result window closes
        break;

    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }

    return 0;
}
*/
#include <windows.h>
#include <string>
#include <sstream>

// Global variables
std::wstring englishName;
std::wstring arabicName;

// Forward declarations
LRESULT CALLBACK InputWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK ResultWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Function to create the result window
void ShowResultWindow(HINSTANCE hInstance)
{
    WNDCLASSW wc = {};
    wc.lpfnWndProc = ResultWndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"ResultWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassW(&wc);

    // Minimized window size
    HWND hwndResult = CreateWindowExW(
        0,
        L"ResultWindow",
        L"Result",
        WS_OVERLAPPEDWINDOW & ~(WS_THICKFRAME | WS_MAXIMIZEBOX), // fixed small window
        CW_USEDEFAULT, CW_USEDEFAULT,
        400, 220, // smaller width & height
        NULL, NULL, hInstance, NULL
    );

    ShowWindow(hwndResult, SW_SHOW);
}

// Entry point for GUI program
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR, int nCmdShow)
{
    WNDCLASSW wc = {};
    wc.lpfnWndProc = InputWndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"InputWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    RegisterClassW(&wc);

    // Input window with smaller size
    HWND hwndInput = CreateWindowExW(
        0,
        L"InputWindow",
        L"Enter Your Names",
        WS_OVERLAPPEDWINDOW & ~(WS_THICKFRAME | WS_MAXIMIZEBOX),
        CW_USEDEFAULT, CW_USEDEFAULT,
        360, 200, // smaller input window
        NULL, NULL, hInstance, NULL
    );

    ShowWindow(hwndInput, nCmdShow);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

// Input window procedure
LRESULT CALLBACK InputWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    static HWND editEnglish, editArabic, btnSubmit;

    switch (msg)
    {
    case WM_CREATE:
        CreateWindowW(L"Static", L"English Name:", WS_VISIBLE | WS_CHILD,
                      20, 20, 90, 20, hwnd, NULL, NULL, NULL);
        editEnglish = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER,
                                    120, 20, 200, 20, hwnd, NULL, NULL, NULL);

        CreateWindowW(L"Static", L"Arabic Name:", WS_VISIBLE | WS_CHILD,
                      20, 60, 90, 20, hwnd, NULL, NULL, NULL);
        editArabic = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER,
                                   120, 60, 200, 20, hwnd, NULL, NULL, NULL);

        btnSubmit = CreateWindowW(L"Button", L"Submit", WS_VISIBLE | WS_CHILD,
                                  130, 110, 100, 30, hwnd, (HMENU)1, NULL, NULL);
        break;

    case WM_COMMAND:
        if (LOWORD(wParam) == 1) // Submit clicked
        {
            wchar_t buffer[256];
            GetWindowTextW(editEnglish, buffer, 256);
            englishName = buffer;

            GetWindowTextW(editArabic, buffer, 256);
            arabicName = buffer;

            PostMessage(hwnd, WM_CLOSE, 0, 0); // close input window safely
            ShowResultWindow(GetModuleHandle(NULL));
        }
        break;

    case WM_DESTROY:
        break;

    default:
        return DefWindowProcW(hwnd, msg, wParam, lParam);
    }

    return 0;
}

// Result window procedure
LRESULT CALLBACK ResultWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);

        std::wstringstream ss;
        ss << L"English Name: " << englishName << L"\n";
        ss << L"Arabic Name: " << arabicName << L"\n";
        ss << L"English Letters: " << englishName.length() << L"\n";
        ss << L"Arabic Letters: " << arabicName.length() << L"\n";

        if (englishName.length() > arabicName.length())
            ss << L"Your character with your own people is simpler than with foreigners.\n";
        else if (englishName.length() < arabicName.length())
            ss << L"Your character with foreigners is simpler than with your own people.\n";
        else
            ss << L"Your character is the same with both your people & foreigners.\n";

        ss << L"\nThank you for playing the game!";

        RECT rect = {10, 10, 380, 200};
        DrawTextW(hdc, ss.str().c_str(), -1, &rect, DT_LEFT | DT_WORDBREAK);

        EndPaint(hwnd, &ps);
        break;
    }

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, msg, wParam, lParam);
    }

    return 0;
}
