/*
 * FUN_10001206 (163 B) — exit/atexit handler. __cdecl, 3 params
 * (param_1, param_2, param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_GetCurrentProcess)(void);        /* IAT 0x10005010 */
extern int (__stdcall *g_TerminateProcess)(void *, unsigned int); /* IAT 0x1000500c */
extern void (__stdcall *g_ExitProcess)(unsigned int);       /* IAT 0x10005008 */

extern unsigned int g_10008a8c;   /* 0x10008a8c */
extern unsigned int g_10008a88;   /* 0x10008a88 */
extern unsigned char g_10008a84;  /* 0x10008a84 */
extern unsigned int g_10009110;   /* 0x10009110 */
extern unsigned int g_1000910c;   /* 0x1000910c */

extern void __stdcall FUN_100012ab(void);
extern void __stdcall FUN_100012b4(void);
extern void __stdcall FUN_100012bd(void *start, void *end);

__declspec(naked) void __cdecl FUN_10001206(void)
{
    __asm {
        push    edi
        call    FUN_100012ab
        push    1
        pop     edi
        cmp     dword ptr [g_10008a8c], edi
        jnz     L_28
        push    dword ptr [esp + 8]
        call    dword ptr [g_GetCurrentProcess]
        push    eax
        call    dword ptr [g_TerminateProcess]
L_28:
        cmp     dword ptr [esp + 0xC], 0
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     dword ptr [g_10008a88], edi
        mov     byte ptr [g_10008a84], bl
        jnz     L_7c
        mov     eax, dword ptr [g_10009110]
        test    eax, eax
        jz      L_6b
        mov     ecx, dword ptr [g_1000910c]
        push    esi
        lea     esi, [ecx - 4]
        cmp     esi, eax
        jc      L_6a
L_57:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_5f
        call    eax
L_5f:
        sub     esi, 4
        cmp     esi, dword ptr [g_10009110]
        jnc     L_57
L_6a:
        pop     esi
L_6b:
        push    0x10006018
        push    0x10006014
        call    FUN_100012bd
        pop     ecx
        pop     ecx
L_7c:
        push    0x10006020
        push    0x1000601c
        call    FUN_100012bd
        pop     ecx
        pop     ecx
        test    ebx, ebx
        pop     ebx
        jz      L_99
        call    FUN_100012b4
        pop     edi
        ret
L_99:
        push    dword ptr [esp + 8]
        mov     dword ptr [g_10008a8c], edi
        call    dword ptr [g_ExitProcess]
    }
}
