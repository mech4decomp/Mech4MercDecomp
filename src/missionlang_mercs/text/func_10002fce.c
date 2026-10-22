/*
 * FUN_10002fce (137 B) — MessageBox wrapper: lazily LoadLibrary("user32.dll")
 * and resolve MessageBoxA/GetActiveWindow/GetLastActivePopup, then compute
 * the owner window and call MessageBoxA(hwnd, text, caption, type).
 *
 * __cdecl, 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__stdcall *g_1000552c)(void *, void *, void *, unsigned int); /* 0x1000552c MessageBoxA */
extern void *(__stdcall *g_10005530)(void);                              /* 0x10005530 GetActiveWindow */
extern void *(__stdcall *g_10005534)(void *);                            /* 0x10005534 GetLastActivePopup */
extern void *(__stdcall *g_10004090)(const char *);                      /* IAT 0x10004090 LoadLibraryA */
extern void *(__stdcall *g_1000408c)(void *, const char *);              /* IAT 0x1000408c GetProcAddress */

extern char g_100043d0[];   /* 0x100043d0 "user32.dll" */
extern char g_100043c4[];   /* 0x100043c4 "MessageBoxA" */
extern char g_100043b4[];   /* 0x100043b4 "GetActiveWindow" */
extern char g_100043a0[];   /* 0x100043a0 "GetLastActivePopup" */

__declspec(naked) int __cdecl FUN_10002fce(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_1000552c], ebx
        push    esi
        push    edi
        jnz     L301D
        push    offset g_100043d0
        call    dword ptr [g_10004090]
        mov     edi, eax
        cmp     edi, ebx
        jz      L3053
        mov     esi, dword ptr [g_1000408c]
        push    offset g_100043c4
        push    edi
        call    esi
        test    eax, eax
        mov     dword ptr [g_1000552c], eax
        jz      L3053
        push    offset g_100043b4
        push    edi
        call    esi
        push    offset g_100043a0
        push    edi
        mov     dword ptr [g_10005530], eax
        call    esi
        mov     dword ptr [g_10005534], eax
L301D:
        mov     eax, dword ptr [g_10005530]
        test    eax, eax
        jz      L303C
        call    eax
        mov     ebx, eax
        test    ebx, ebx
        jz      L303C
        mov     eax, dword ptr [g_10005534]
        test    eax, eax
        jz      L303C
        push    ebx
        call    eax
        mov     ebx, eax
L303C:
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    dword ptr [esp + 0x18]
        push    ebx
        call    dword ptr [g_1000552c]
L304F:
        pop     edi
        pop     esi
        pop     ebx
        ret
L3053:
        xor     eax, eax
        jmp     L304F
    }
}
