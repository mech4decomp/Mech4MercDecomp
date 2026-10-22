/*
 * FUN_0058157e (extent 0x58157e-0x5816c8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern char   g_007f1f7d;
extern void __cdecl FUN_0058adf0(void);
extern void __cdecl FUN_005a1990(void);
extern void __cdecl FUN_005f2ce0(void);

__declspec(naked) void FUN_0058157e(void)
{
    __asm {
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x14]
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, eax
        je    L_16c3
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [edi + 0x18]
        push    eax
        push    ecx
        mov    ecx, edi
        call    FUN_005f2ce0
        sub    eax, 9
        je    L_1698
        sub    eax, 2
        je    L_15c2
        sub    eax, 4
        je    L_1698
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
        pop    edi
        ret    8
L_15c2:
        mov    eax, dword ptr [esi + 0x5ac]
        test    eax, eax
        je    L_1651
        dec    eax
        cmp    eax, 3
        ja    L_1636
        jmp    dword ptr [eax*4 + 0x5816c8]
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    0
        push    eax
        push    0x1f
        jmp    L_1633
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    0
        push    eax
        push    0x21
        jmp    L_1633
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    0
        push    eax
        push    0x20
        jmp    L_1633
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    0
        push    eax
        push    0x1e
L_1633:
        call    dword ptr [edx + 8]
L_1636:
        mov    ecx, esi
        call    FUN_0058adf0
        mov    ecx, dword ptr [esi + 0x5ac]
        mov    eax, dword ptr [edi + 0x14]
        mov    dword ptr [esi + 0x5b0], ecx
        pop    esi
        pop    edi
        ret    8
L_1651:
        fld    dword ptr [esi + 0x440]
        mov    ecx, dword ptr [esi + 0x2f4]
        fcomp    dword ptr [g_0076c5b0]
        mov    edx, dword ptr [ecx]
        push    0
        fnstsw  ax
        test    ah, 0x41
        je    L_1683
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    eax
        push    0xa
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
        pop    edi
        ret    8
L_1683:
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    eax
        push    0x12
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
        pop    edi
        ret    8
L_1698:
        mov    ecx, dword ptr [esi + 0x9ac]
        push    0x3f800000
        call    FUN_005a1990
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    0
        push    eax
        push    0x26
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [edi + 0x14]
        pop    esi
L_16c3:
        pop    edi
        ret    8
        nop    
        // jump-table data @ 0x005816C8 (10 relocated pointers)
        __emit 0x1F
        __emit 0x16
        __emit 0x58
        __emit 0x00
        __emit 0x09
        __emit 0x16
        __emit 0x58
        __emit 0x00
        __emit 0xF3
        __emit 0x15
        __emit 0x58
        __emit 0x00
        __emit 0xDD
        __emit 0x15
        __emit 0x58
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
