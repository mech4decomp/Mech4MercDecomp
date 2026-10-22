/*
 * FUN_10038f20 (339 B) — __cdecl.
 * Runtime-error handler: looks up param_1 in a table, then either writes the
 * message to stderr or shows a "Runtime Error!" MessageBox.
 */

extern void __cdecl FUN_1003c500(void);
extern void __cdecl FUN_1003c5f0(void);
extern void __cdecl FUN_10037f30(void);
extern void __cdecl FUN_1003c510(void);
extern void __cdecl FUN_1003e9ce(void);
extern unsigned int *g_100491b8;   /* GetModuleFileNameA IAT */
extern unsigned int *g_100490f0;   /* GetStdHandle IAT */
extern unsigned int *g_10049124;   /* WriteFile IAT */
extern char g_100518e0;
extern char g_10051970;
extern char g_100518e4;
extern int g_100754a4;
extern int g_100754a8;
extern char g_1004b630;
extern char g_1004b62c;
extern char g_1004b610;
extern char g_1004b60c;
extern char g_1004b5e4;

__declspec(naked) void __cdecl FUN_10038f20(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1a4
        mov     edx, dword ptr [ebp + 0x8]
        xor     ecx, ecx
        mov     eax, offset g_100518e0
    L_10038f33:
        cmp     edx, dword ptr [eax]
        jz      L_10038f42
        add     eax, 0x8
        inc     ecx
        cmp     eax, offset g_10051970
        jc      L_10038f33
    L_10038f42:
        push    esi
        mov     esi, ecx
        shl     esi, 0x3
        cmp     edx, dword ptr [esi + g_100518e0]
        jnz     L_10039070
        mov     eax, dword ptr [g_100754a4]
        cmp     eax, 0x1
        jz      L_1003904a
        test    eax, eax
        jnz     L_10038f73
        cmp     dword ptr [g_100754a8], 0x1
        jz      L_1003904a
    L_10038f73:
        cmp     edx, 0xfc
        jz      L_10039070
        lea     eax, [ebp - 0x1a4]
        push    0x104
        push    eax
        push    0x0
        call    dword ptr [g_100491b8]
        test    eax, eax
        jnz     L_10038faa
        lea     eax, [ebp - 0x1a4]
        push    offset g_1004b630
        push    eax
        call    FUN_1003c500
        pop     ecx
        pop     ecx
    L_10038faa:
        lea     eax, [ebp - 0x1a4]
        push    edi
        push    eax
        lea     edi, [ebp - 0x1a4]
        call    FUN_1003c5f0
        inc     eax
        pop     ecx
        cmp     eax, 0x3c
        jbe     L_10038fed
        lea     eax, [ebp - 0x1a4]
        push    eax
        call    FUN_1003c5f0
        mov     edi, eax
        lea     eax, [ebp - 0x1a4]
        sub     eax, 0x3b
        push    0x3
        add     edi, eax
        push    offset g_1004b62c
        push    edi
        call    FUN_10037f30
        add     esp, 0x10
    L_10038fed:
        lea     eax, [ebp - 0xa0]
        push    offset g_1004b610
        push    eax
        call    FUN_1003c500
        lea     eax, [ebp - 0xa0]
        push    edi
        push    eax
        call    FUN_1003c510
        lea     eax, [ebp - 0xa0]
        push    offset g_1004b60c
        push    eax
        call    FUN_1003c510
        push    dword ptr [esi + g_100518e4]
        lea     eax, [ebp - 0xa0]
        push    eax
        call    FUN_1003c510
        push    0x12010
        lea     eax, [ebp - 0xa0]
        push    offset g_1004b5e4
        push    eax
        call    FUN_1003e9ce
        add     esp, 0x2c
        pop     edi
        jmp     L_10039070
    L_1003904a:
        lea     eax, [ebp + 0x8]
        lea     esi, [esi + g_100518e4]
        push    0x0
        push    eax
        push    dword ptr [esi]
        call    FUN_1003c5f0
        pop     ecx
        push    eax
        push    dword ptr [esi]
        push    -0xc
        call    dword ptr [g_100490f0]
        push    eax
        call    dword ptr [g_10049124]
    L_10039070:
        pop     esi
        leave
        ret
    }
}
