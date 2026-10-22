/*
 * FUN_00657140 (1034 B) — __thiscall ABL terrain sound/height selector.
 * Reads a byte from a 2D array at this+0x400004, then dispatches on a
 * mode value (EDX) through 15 jump tables (0x65754c, 0x6575bc..0x6576c0,
 * all outside this function's slice) to push a sound id and call
 * FUN_00637a20. RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00784aec;
extern float g_0076d3c8;
extern float g_0076c5b0;
extern int   g_65754c;
extern int   g_6575bc;
extern int   g_6575d0;
extern int   g_6575e4;
extern int   g_6575f8;
extern int   g_65760c;
extern int   g_657620;
extern int   g_657634;
extern int   g_657648;
extern int   g_65765c;
extern int   g_657670;
extern int   g_657684;
extern int   g_657698;
extern int   g_6576ac;
extern int   g_6576c0;

extern void FUN_00637b40(void);
extern void FUN_00637a20(void);

__declspec(naked) void FUN_00657140(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00637b40
        mov     esi, dword ptr [esi+0x400004]
        mov     ecx, eax
        mov     eax, dword ptr [esp+0x8]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [esp+0xc]
        mov     edx, dword ptr [esi+edx*4]
        lea     eax, [eax+eax*4]
        mov     al, byte ptr [edx+eax*8+0x4]
        mov     edx, dword ptr [esp+0x10]
        cmp     edx, 8
        mov     byte ptr [esp+0x8], al
        pop     esi
        jnz     L_5719d
        mov     eax, dword ptr [esp+0x4]
        and     eax, 0xff
        sub     eax, 0x19
        jz      L_5718b
        dec     eax
        jz      L_57194
        dec     eax
        jz      L_57541
    L_5718b:
        fld     dword ptr [g_00784aec]
        ret     0xc
    L_57194:
        fld     dword ptr [g_0076d3c8]
        ret     0xc
    L_5719d:
        test    edx, edx
        jz      L_57541
        cmp     edx, 2
        jz      L_57541
        cmp     edx, 6
        jz      L_57541
        cmp     edx, 7
        jz      L_57541
        mov     eax, dword ptr [esp+0x4]
        and     eax, 0xff
        cmp     eax, 0x1b
        ja      L_57541
        jmp     dword ptr [eax*4 + g_65754c]
    L_571d9:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_5721c
        jmp     dword ptr [eax*4 + g_6575bc]
    L_571e8:
        push    0xa0
        call    FUN_00637a20
        ret     0xc
    L_571f5:
        push    0xb6
        call    FUN_00637a20
        ret     0xc
    L_57202:
        push    0x8a
        call    FUN_00637a20
        ret     0xc
    L_5720f:
        push    0xcc
        call    FUN_00637a20
        ret     0xc
    L_5721c:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57541
        jmp     dword ptr [eax*4 + g_6575d0]
    L_5722f:
        push    0x9e
        call    FUN_00637a20
        ret     0xc
    L_5723c:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57541
        jmp     dword ptr [eax*4 + g_6575e4]
    L_5724f:
        push    0x9f
        call    FUN_00637a20
        ret     0xc
    L_5725c:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_5729f
        jmp     dword ptr [eax*4 + g_6575f8]
    L_5726b:
        push    0xa1
        call    FUN_00637a20
        ret     0xc
    L_57278:
        push    0xb7
        call    FUN_00637a20
        ret     0xc
    L_57285:
        push    0x8b
        call    FUN_00637a20
        ret     0xc
    L_57292:
        push    0xcd
        call    FUN_00637a20
        ret     0xc
    L_5729f:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_572e2
        jmp     dword ptr [eax*4 + g_65760c]
    L_572ae:
        push    0xa2
        call    FUN_00637a20
        ret     0xc
    L_572bb:
        push    0xb8
        call    FUN_00637a20
        ret     0xc
    L_572c8:
        push    0x8c
        call    FUN_00637a20
        ret     0xc
    L_572d5:
        push    0xce
        call    FUN_00637a20
        ret     0xc
    L_572e2:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57325
        jmp     dword ptr [eax*4 + g_657620]
    L_572f1:
        push    0xa3
        call    FUN_00637a20
        ret     0xc
    L_572fe:
        push    0xb9
        call    FUN_00637a20
        ret     0xc
    L_5730b:
        push    0x8d
        call    FUN_00637a20
        ret     0xc
    L_57318:
        push    0xcf
        call    FUN_00637a20
        ret     0xc
    L_57325:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57368
        jmp     dword ptr [eax*4 + g_657634]
    L_57334:
        push    0xa4
        call    FUN_00637a20
        ret     0xc
    L_57341:
        push    0xba
        call    FUN_00637a20
        ret     0xc
    L_5734e:
        push    0x8e
        call    FUN_00637a20
        ret     0xc
    L_5735b:
        push    0xd0
        call    FUN_00637a20
        ret     0xc
    L_57368:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_573ab
        jmp     dword ptr [eax*4 + g_657648]
    L_57377:
        push    0xa6
        call    FUN_00637a20
        ret     0xc
    L_57384:
        push    0xbc
        call    FUN_00637a20
        ret     0xc
    L_57391:
        push    0x90
        call    FUN_00637a20
        ret     0xc
    L_5739e:
        push    0xd2
        call    FUN_00637a20
        ret     0xc
    L_573ab:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_573ee
        jmp     dword ptr [eax*4 + g_65765c]
    L_573ba:
        push    0xa7
        call    FUN_00637a20
        ret     0xc
    L_573c7:
        push    0xbd
        call    FUN_00637a20
        ret     0xc
    L_573d4:
        push    0x91
        call    FUN_00637a20
        ret     0xc
    L_573e1:
        push    0xd3
        call    FUN_00637a20
        ret     0xc
    L_573ee:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57431
        jmp     dword ptr [eax*4 + g_657670]
    L_573fd:
        push    0xaa
        call    FUN_00637a20
        ret     0xc
    L_5740a:
        push    0xc0
        call    FUN_00637a20
        ret     0xc
    L_57417:
        push    0x94
        call    FUN_00637a20
        ret     0xc
    L_57424:
        push    0xd6
        call    FUN_00637a20
        ret     0xc
    L_57431:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57474
        jmp     dword ptr [eax*4 + g_657684]
    L_57440:
        push    0xac
        call    FUN_00637a20
        ret     0xc
    L_5744d:
        push    0xc2
        call    FUN_00637a20
        ret     0xc
    L_5745a:
        push    0x96
        call    FUN_00637a20
        ret     0xc
    L_57467:
        push    0xd8
        call    FUN_00637a20
        ret     0xc
    L_57474:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57541
        jmp     dword ptr [eax*4 + g_657698]
    L_57487:
        push    0xae
        call    FUN_00637a20
        ret     0xc
    L_57494:
        push    0xc4
        call    FUN_00637a20
        ret     0xc
    L_574a1:
        push    0x98
        call    FUN_00637a20
        ret     0xc
    L_574ae:
        push    0xda
        call    FUN_00637a20
        ret     0xc
    L_574bb:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_574fe
        jmp     dword ptr [eax*4 + g_6576ac]
    L_574ca:
        push    0xaf
        call    FUN_00637a20
        ret     0xc
    L_574d7:
        push    0xc5
        call    FUN_00637a20
        ret     0xc
    L_574e4:
        push    0x99
        call    FUN_00637a20
        ret     0xc
    L_574f1:
        push    0xdb
        call    FUN_00637a20
        ret     0xc
    L_574fe:
        lea     eax, [edx-1]
        cmp     eax, 4
        ja      L_57541
        jmp     dword ptr [eax*4 + g_6576c0]
    L_5750d:
        push    0xb0
        call    FUN_00637a20
        ret     0xc
    L_5751a:
        push    0xc6
        call    FUN_00637a20
        ret     0xc
    L_57527:
        push    0x9a
        call    FUN_00637a20
        ret     0xc
    L_57534:
        push    0xdc
        call    FUN_00637a20
        ret     0xc
    L_57541:
        fld     dword ptr [g_0076c5b0]
        ret     0xc
    }
}
