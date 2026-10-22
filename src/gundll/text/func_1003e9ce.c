/*
 * FUN_1003e9ce (137 B) - __cdecl. Lazily resolves user32.dll MessageBoxA /
 * GetActiveWindow / GetLastActivePopup via LoadLibraryA/GetProcAddress, then
 * invokes them.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 */

extern int *g_100756a4;   /* [0x100756a4] MessageBoxA fn ptr */
extern int *g_100756a8;   /* [0x100756a8] GetActiveWindow fn ptr */
extern int *g_100756ac;   /* [0x100756ac] GetLastActivePopup fn ptr */
extern int g_10049134;    /* [0x10049134] IAT GetProcAddress */
extern int *g_10049150;   /* [0x10049150] IAT LoadLibraryA */

__declspec(naked) void func_1003e9ce(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_100756a4], ebx
        push    esi
        push    edi
        jnz     L_ea1d
        push    0x1004b818
        call    dword ptr [g_10049150]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_ea53
        mov     esi, dword ptr [g_10049134]
        push    0x1004b80c
        push    edi
        call    esi
        test    eax, eax
        mov     dword ptr [g_100756a4], eax
        jz      L_ea53
        push    0x1004b7fc
        push    edi
        call    esi
        push    0x1004b7e8
        push    edi
        mov     dword ptr [g_100756a8], eax
        call    esi
        mov     dword ptr [g_100756ac], eax
    L_ea1d:
        mov     eax, dword ptr [g_100756a8]
        test    eax, eax
        jz      L_ea3c
        call    eax
        mov     ebx, eax
        test    ebx, ebx
        jz      L_ea3c
        mov     eax, dword ptr [g_100756ac]
        test    eax, eax
        jz      L_ea3c
        push    ebx
        call    eax
        mov     ebx, eax
    L_ea3c:
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    ebx
        call    dword ptr [g_100756a4]
    L_ea4f:
        pop     edi
        pop     esi
        pop     ebx
        ret
    L_ea53:
        xor     eax, eax
        jmp     L_ea4f
    }
}
