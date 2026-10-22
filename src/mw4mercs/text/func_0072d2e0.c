/*
 * FUN_0072d2e0 (286 B) — language/ACP setup: loads Language.dll strings,
 * sets locale, builds lead-byte table.
 *
 * __cdecl, no params, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_7a5a3c[];   /* 0x007a5a3c "Language.dll" */
extern int   g_896b84;     /* 0x00896b84 */
extern int   g_8bc00c;     /* 0x008bc00c */
extern int   g_896c88;     /* 0x00896c88 */
extern void *g_76b320;     /* 0x0076b320 strncpy */
extern char  g_896a80[];   /* 0x00896a80 */
extern void *g_76b360;     /* 0x0076b360 setlocale */
extern char  g_779d48[];   /* 0x00779d48 */
extern void *g_76b104;     /* 0x0076b104 GetACP */
extern char  g_7a5a38[];   /* 0x007a5a38 format */
extern void *g_76b420;     /* 0x0076b420 sprintf IAT */
extern char  g_89697c[];   /* 0x0089697c */
extern void *g_76b318;     /* 0x0076b318 atoi IAT */
extern int   g_7b71d8;     /* 0x007b71d8 */
extern void *g_76b364;     /* 0x0076b364 isleadbyte */
extern char  g_896b88[];   /* 0x00896b88 */

extern void __cdecl FUN_0072d480(void);
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void __stdcall FUN_0072d2e0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebp
        push    esi
        push    edi
        push    offset g_7a5a3c
        mov     dword ptr [g_896b84], 0
        mov     dword ptr [g_8bc00c], 0
        call    FUN_0072d480
        push    0x103
        push    0
        push    eax
        mov     [g_896c88], eax
        call    FUN_0072d830
        mov     edi, dword ptr [g_76b320]
        push    eax
        push    offset g_896a80
        call    edi
        mov     ebp, dword ptr [g_76b360]
        push    offset g_896a80
        push    0
        call    ebp
        add     esp, 0x14
        mov     esi, offset g_779d48
        mov     eax, offset g_896a80
L340:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L364
        test    cl, cl
        jz      L360
        mov     dl, byte ptr [eax + 1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 1]
        jnz     L364
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L340
L360:
        xor     eax, eax
        jmp     L369
L364:
        sbb     eax, eax
        sbb     eax, -1
L369:
        test    eax, eax
        jnz     L39b
        mov     esi, dword ptr [g_76b104]
        call    esi
        cmp     eax, 0x4e4
        jz      L39b
        call    esi
        push    eax
        lea     eax, [esp + 0x10]
        push    offset g_7a5a38
        push    eax
        call    dword ptr [g_76b420]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    2
        call    ebp
        add     esp, 0x14
L39b:
        mov     edx, dword ptr [g_896c88]
        push    0x103
        push    1
        push    edx
        call    FUN_0072d830
        push    eax
        push    offset g_89697c
        call    edi
        mov     eax, [g_896c88]
        add     esp, 0xc
        push    2
        push    eax
        call    FUN_0072d830
        push    eax
        call    dword ptr [g_76b318]
        mov     edi, dword ptr [g_76b364]
        add     esp, 4
        mov     [g_7b71d8], eax
        xor     esi, esi
L3dd:
        push    esi
        call    edi
        add     esp, 4
        test    eax, eax
        setnz   cl
        mov     byte ptr [esi + g_896b88], cl
        inc     esi
        cmp     esi, 0x100
        jl      L3dd
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x10
        ret
    }
}
