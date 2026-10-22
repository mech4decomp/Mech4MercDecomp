/*
 * FUN_100011fc (163 B) — exit/atexit handler. __cdecl, 3 params
 * (param_1, param_2, param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *(__stdcall *g_GetCurrentProcess)(void);        /* IAT 0x10004010 */
extern int (__stdcall *g_TerminateProcess)(void *, unsigned int); /* IAT 0x1000400c */
extern void (__stdcall *g_ExitProcess)(unsigned int);       /* IAT 0x10004008 */

extern unsigned int g_100053b4;   /* 0x100053b4 */
extern unsigned int g_100053b0;   /* 0x100053b0 */
extern unsigned char g_100053ac;  /* 0x100053ac */
extern unsigned int g_100058d0;   /* 0x100058d0 */
extern unsigned int g_100058cc;   /* 0x100058cc */

extern void __stdcall FUN_100012a1(void);
extern void __stdcall FUN_100012aa(void);
extern void __stdcall FUN_100012b3(void *start, void *end);

__declspec(naked) void __cdecl FUN_100011fc(void)
{
    __asm {
        push    edi
        call    FUN_100012a1
        push    1
        pop     edi
        cmp     dword ptr [g_100053b4], edi
        jnz     L_1e
        push    dword ptr [esp + 8]
        call    dword ptr [g_GetCurrentProcess]
        push    eax
        call    dword ptr [g_TerminateProcess]
L_1e:
        cmp     dword ptr [esp + 0xC], 0
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        mov     dword ptr [g_100053b0], edi
        mov     byte ptr [g_100053ac], bl
        jnz     L_72
        mov     eax, dword ptr [g_100058d0]
        test    eax, eax
        jz      L_61
        mov     ecx, dword ptr [g_100058cc]
        push    esi
        lea     esi, [ecx - 4]
        cmp     esi, eax
        jc      L_60
L_4d:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_55
        call    eax
L_55:
        sub     esi, 4
        cmp     esi, dword ptr [g_100058d0]
        jnc     L_4d
L_60:
        pop     esi
L_61:
        push    0x10005018
        push    0x10005014
        call    FUN_100012b3
        pop     ecx
        pop     ecx
L_72:
        push    0x10005020
        push    0x1000501c
        call    FUN_100012b3
        pop     ecx
        pop     ecx
        test    ebx, ebx
        pop     ebx
        jz      L_8f
        call    FUN_100012aa
        pop     edi
        ret
L_8f:
        push    dword ptr [esp + 8]
        mov     dword ptr [g_100053b4], edi
        call    dword ptr [g_ExitProcess]
    }
}
