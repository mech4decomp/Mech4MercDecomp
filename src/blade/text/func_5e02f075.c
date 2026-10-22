/*
 * FUN_5e02f075 (137 B) — MessageBox-style wrapper. Lazily resolves
 * user32.dll MessageBoxA/GetActiveWindow/GetLastActivePopup via LoadLibraryA
 * + GetProcAddress, caches the function pointers in globals, then dispatches.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (*g_5e77aa44)(int, int, int, int); /* MessageBoxA */
extern int (*g_5e77aa48)(void);               /* GetActiveWindow */
extern int (*g_5e77aa4c)(int);                /* GetLastActivePopup */
extern void *g_5e035008;                      /* IAT: LoadLibraryA */
extern void *g_5e035004;                      /* IAT: GetProcAddress */
extern char g_5e036620[];                     /* "user32.dll" */
extern char g_5e036614[];                     /* "MessageBoxA" */
extern char g_5e036604[];                     /* "GetActiveWindow" */
extern char g_5e0365f0[];                     /* "GetLastActivePopup" */

__declspec(naked) void FUN_5e02f075(void)
{
    __asm {
        push ebx
        xor ebx, ebx
        cmp dword ptr [g_5e77aa44], ebx
        push esi
        push edi
        jnz L_f0c4
        push offset g_5e036620
        call dword ptr [g_5e035008]
        mov edi, eax
        cmp edi, ebx
        jz L_f0fa
        mov esi, dword ptr [g_5e035004]
        push offset g_5e036614
        push edi
        call esi
        test eax, eax
        mov dword ptr [g_5e77aa44], eax
        jz L_f0fa
        push offset g_5e036604
        push edi
        call esi
        push offset g_5e0365f0
        push edi
        mov dword ptr [g_5e77aa48], eax
        call esi
        mov dword ptr [g_5e77aa4c], eax
L_f0c4:
        mov eax, dword ptr [g_5e77aa48]
        test eax, eax
        jz L_f0e3
        call eax
        mov ebx, eax
        test ebx, ebx
        jz L_f0e3
        mov eax, dword ptr [g_5e77aa4c]
        test eax, eax
        jz L_f0e3
        push ebx
        call eax
        mov ebx, eax
L_f0e3:
        push dword ptr [esp+0x18]
        push dword ptr [esp+0x18]
        push dword ptr [esp+0x18]
        push ebx
        call dword ptr [g_5e77aa44]
L_f0f6:
        pop edi
        pop esi
        pop ebx
        ret
L_f0fa:
        xor eax, eax
        jmp L_f0f6
    }
}
