/*
 * FUN_10003e14 (137 B, __cdecl) — MessageBoxA wrapper. Lazily resolves
 * user32.dll MessageBoxA/GetActiveWindow/GetLastActivePopup via LoadLibraryA
 * + GetProcAddress, then calls MessageBoxA with the active-window handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008c08;   /* MessageBoxA FARPROC */
extern int g_10008c0c;   /* GetActiveWindow FARPROC */
extern int g_10008c10;   /* GetLastActivePopup FARPROC */
extern void *g_100050a4; /* LoadLibraryA IAT */
extern void *g_100050a0; /* GetProcAddress IAT */

__declspec(naked) int FUN_10003e14(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10008c08], ebx
        push    esi
        push    edi
        jnz     L_3e63
        push    0x10005468
        call    dword ptr [g_100050a4]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_3e99
        mov     esi, dword ptr [g_100050a0]
        push    0x1000545c
        push    edi
        call    esi
        test    eax, eax
        mov     dword ptr [g_10008c08], eax
        jz      L_3e99
        push    0x1000544c
        push    edi
        call    esi
        push    0x10005438
        push    edi
        mov     dword ptr [g_10008c0c], eax
        call    esi
        mov     dword ptr [g_10008c10], eax
L_3e63:
        mov     eax, dword ptr [g_10008c0c]
        test    eax, eax
        jz      L_3e82
        call    eax
        mov     ebx, eax
        test    ebx, ebx
        jz      L_3e82
        mov     eax, dword ptr [g_10008c10]
        test    eax, eax
        jz      L_3e82
        push    ebx
        call    eax
        mov     ebx, eax
L_3e82:
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    ebx
        call    dword ptr [g_10008c08]
L_3e95:
        pop     edi
        pop     esi
        pop     ebx
        ret
L_3e99:
        xor     eax, eax
        jmp     L_3e95
    }
}
