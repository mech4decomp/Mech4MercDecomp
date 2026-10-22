/*
 * FUN_0070FBB0 (778 B, 0x70FBB0-0x70FEB9) — __cdecl UI/display setup routine.
 * Reads global 0x858940, calls FUN_00713CC0/FUN_007103B0/FUN_0073D430/
 * FUN_0073D3B0/FUN_0075DB4A/FUN_00710490, writes several 0x8aafxx globals,
 * iterates arrays at 0x87b690/0x87b93c, and does FPU scaling (fild/fdivr/
 * fmul/fdivp) with constants 0x7924b8/0x77a440/0x87c698.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_858940;   /* 0x858940 - dword data */
extern void (*g_76b2d4)(void);   /* 0x76b2d4 - function pointer */
extern unsigned int g_8aaf38;   /* 0x8aaf38 - dword data */
extern unsigned int g_8aaf1c;   /* 0x8aaf1c - dword data */
extern unsigned int g_8aaf2c;   /* 0x8aaf2c - dword data */
extern unsigned int g_8aaf30;   /* 0x8aaf30 - dword data */
extern unsigned int g_87b93c[];   /* 0x87b93c - dword array */
extern unsigned int g_87b690[];   /* 0x87b690 - dword array */
extern unsigned int g_87b938;   /* 0x87b938 - dword data */
extern float g_7924b8;   /* 0x7924b8 - float const */
extern unsigned int g_87bbf0;   /* 0x87bbf0 - dword data */
extern unsigned int g_87b694;   /* 0x87b694 - dword data */
extern double g_77a440;   /* 0x77a440 - double const */
extern double g_87c698;   /* 0x87c698 - double data */
extern unsigned int g_87c69c;   /* 0x87c69c - dword data (2nd half of g_87c698) */
extern char g_7a1cf8[];   /* 0x7a1cf8 - format string */
extern void (*g_76b420)(void);   /* 0x76b420 - IAT */

extern void __cdecl FUN_00713CC0(void);
extern void __cdecl FUN_007103B0(void);
extern void __cdecl FUN_0073D430(void);
extern void __cdecl FUN_0073D3B0(void);
extern void __cdecl FUN_0075DB4A(void);
extern void __cdecl FUN_00710490(void);

__declspec(naked) void FUN_0070FBB0(void)
{
    __asm {
        mov     eax, dword ptr [g_858940]
        sub     esp, 0x10c
        push    ebx
        push    ebp
        push    esi
        cdq
        push    edi
        sub     eax, edx
        mov     esi, eax
        push    0
        sar     esi, 1
        push    1
        sub     esi, 0x104
        call    FUN_00713CC0
        push    1
        push    0xd
        call    FUN_00713CC0
        push    0
        push    7
        call    FUN_00713CC0
        push    0xff606060
        push    0x7a
        push    0x208
        push    0xc
        push    esi
        call    FUN_007103B0
        call    FUN_0073D430
        push    1
        push    0xd
        call    FUN_00713CC0
        mov     ebp, dword ptr [g_76b2d4]
        mov     dword ptr [g_8aaf38], 0
        mov     dword ptr [g_8aaf1c], 0x50
        mov     dword ptr [g_8aaf2c], 0x11
        mov     esi, 0xa
        mov     ebx, offset g_87b93c
        mov     edi, 0xffffff01
L_70FC3C:
        mov     eax, dword ptr [g_858940]
        cdq
        sub     eax, edx
        sar     eax, 1
        add     eax, edi
        mov     dword ptr [g_8aaf30], eax
        cmp     dword ptr [ebx], esi
        jbe     L_70FC72
        push    0xa
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        call    ebp
        add     esp, 0xc
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0xffffff
        call    FUN_0073D3B0
        lea     esi, [esi + esi*4]
        shl     esi, 1
L_70FC72:
        add     edi, 3
        add     ebx, 4
        cmp     edi, 0xd2
        jl      L_70FC3C
        xor     edi, edi
        xor     eax, eax
        mov     ecx, offset g_87b690
L_70FC89:
        mov     edx, dword ptr [ecx]
        cmp     eax, edx
        jae     L_70FC91
        mov     eax, edx
L_70FC91:
        add     ecx, 4
        cmp     ecx, offset g_87b938
        jl      L_70FC89
        cmp     eax, edi
        mov     dword ptr [esp + 0x18], 0x3f800000
        je      L_70FCBE
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], edi
        fild    qword ptr [esp + 0x10]
        fdivr   dword ptr [g_7924b8]
        fstp    dword ptr [esp + 0x18]
L_70FCBE:
        mov     esi, dword ptr [g_87bbf0]
        cmp     esi, edi
        mov     ecx, dword ptr [g_87b694]
        mov     edx, dword ptr [g_87b690]
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0x14], 0
        jbe     L_70FD0B
        mov     dword ptr [esp + 0x14], edi
        lea     ebx, [ecx + edx]
        mov     dword ptr [esp + 0x10], ebx
        fild    qword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x10], esi
        mov     dword ptr [esp + 0x14], edi
        fmul    qword ptr [g_77a440]
        fild    qword ptr [esp + 0x10]
        fdivp   st(1), st(0)
        fstp    qword ptr [esp + 0x10]
L_70FD0B:
        mov     esi, dword ptr [esp + 0x14]
        fld     qword ptr [g_87c698]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    esi
        add     ecx, edx
        push    ecx
        push    eax
        call    FUN_0075DB4A
        push    eax
        lea     edx, [esp + 0x30]
        push    offset g_7a1cf8
        push    edx
        call    dword ptr [g_76b420]
        mov     eax, dword ptr [g_858940]
        cdq
        sub     eax, edx
        sar     eax, 1
        sub     eax, 0x100
        add     esp, 0x1c
        mov     dword ptr [g_8aaf30], eax
        lea     eax, [esp + 0x1c]
        push    eax
        push    0xffffff
        mov     dword ptr [g_8aaf2c], 0x76
        mov     dword ptr [g_8aaf38], edi
        mov     dword ptr [g_8aaf1c], 0x55
        call    FUN_0073D3B0
        push    edi
        push    1
        call    FUN_00713CC0
        push    1
        push    0xd
        call    FUN_00713CC0
        push    edi
        push    7
        call    FUN_00713CC0
        push    2
        push    0x10
        call    FUN_00713CC0
        mov     eax, dword ptr [g_858940]
        cdq
        sub     eax, edx
        push    0xffffff
        sar     eax, 1
        sub     eax, 0x100
        push    0x1d
        lea     ecx, [eax + 0x200]
        push    ecx
        push    0x1d
        push    eax
        mov     dword ptr [g_8aaf30], eax
        call    FUN_00710490
        mov     eax, dword ptr [g_8aaf30]
        push    0xffffff
        push    0x6f
        lea     edx, [eax + 0x200]
        push    edx
        push    0x6f
        push    eax
        call    FUN_00710490
        mov     eax, dword ptr [g_8aaf30]
        push    0xffffff
        push    0x6f
        push    eax
        push    0x1e
        push    eax
        call    FUN_00710490
        mov     eax, dword ptr [g_8aaf30]
        push    0xffffff
        push    0x6f
        add     eax, 0x1ff
        push    eax
        push    0x1e
        push    eax
        call    FUN_00710490
        xor     esi, esi
L_70FE0D:
        mov     ecx, dword ptr [esi + g_87b690]
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edi
        fild    qword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x18]
        call    FUN_0075DB4A
        cmp     eax, edi
        je      L_70FE71
        mov     edx, dword ptr [esi + g_87b93c]
        cmp     edx, 3
        mov     ecx, 0xff00b000
        jae     L_70FE43
        mov     ecx, 0xffff0000
        jmp     L_70FE59
L_70FE43:
        cmp     edx, 0xa
        jae     L_70FE4F
        mov     ecx, 0xffb00000
        jmp     L_70FE59
L_70FE4F:
        cmp     edx, 0x64
        jae     L_70FE59
        mov     ecx, 0xff700000
L_70FE59:
        push    ecx
        push    eax
        mov     edx, 0x6e
        sub     edx, eax
        mov     eax, dword ptr [g_8aaf30]
        push    3
        push    edx
        inc     eax
        push    eax
        call    FUN_007103B0
L_70FE71:
        mov     edx, dword ptr [g_8aaf30]
        mov     dword ptr [esi + g_87b690], edi
        add     edx, 3
        add     esi, 4
        cmp     esi, 0x2a8
        mov     dword ptr [g_8aaf30], edx
        jl      L_70FE0D
        mov     dword ptr [g_87bbf0], edi
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_87c698], 0
        mov     dword ptr [g_87c69c], 0
        pop     ebx
        add     esp, 0x10c
        ret
    }
}
