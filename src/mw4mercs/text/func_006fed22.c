/*
 * FUN_006fed22 (extent 0x6fed22-0x6fef16) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern float  g_007a0330;
extern int    g_0085683c;
extern char   g_00856840;
extern char   g_0085685e;
extern char   g_0085685f;
extern int    g_00856860;
extern char   g_008aaac0;
extern char   g_008aaac1;
extern void __cdecl FUN_006f65c0(void);
extern void __cdecl FUN_006f65f0(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006fd230(void);
extern void __cdecl FUN_006fd260(void);
extern void __cdecl FUN_006feec0(void);
extern void __cdecl FUN_006fef20(void);
extern void __cdecl FUN_006ffeb0(void);
extern void __cdecl FUN_00700020(void);
extern void __cdecl FUN_00700560(void);
extern void __cdecl FUN_00707e90(void);

__declspec(naked) void FUN_006fed22(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00700560
        mov    al, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x7a0e58
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0085685e]
        test    al, al
        jne    L_ed95
        mov    al, byte ptr [g_0085685f]
        test    al, al
        jne    L_ed95
        test    byte ptr [g_00856840], 6
        jne    L_ed95
        mov    eax, dword ptr [g_0085683c]
        cmp    eax, 0x80
        je    L_ed90
        test    eax, eax
        jle    L_ed90
        cmp    eax, 0x40
        jne    L_ed95
L_ed90:
        xor    al, al
        ret    4
L_ed95:
        mov    al, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x8aaa20
        call    dword ptr [g_0076b110]
        call    FUN_00700020
        push    0x8aaa20
        call    dword ptr [g_0076b100]
        mov    eax, dword ptr [g_0085683c]
        test    eax, eax
        jl    L_ede1
        cmp    eax, 0x80
        je    L_ede1
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi + 0x20]
        test    al, al
        jne    L_ede1
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        mov    byte ptr [esi + 0x20], 1
L_ede1:
        call    FUN_006f89f0
        test    eax, eax
        pop    esi
        je    L_ee01
        call    FUN_006f89f0
        call    FUN_006f65c0
        call    FUN_006f89f0
        push    0x14
        call    FUN_006f65f0
L_ee01:
        mov    byte ptr [g_0085685e], 0
        mov    byte ptr [g_0085685f], 0
        mov    al, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008aaac0]
        test    al, al
        jne    L_eeb1
        mov    al, byte ptr [g_008aaac1]
        test    al, al
        jne    L_eeb1
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    al, byte ptr [esi + 0x20]
        test    al, al
        jne    L_eeab
        push    1
        call    FUN_006fef20
        mov    ecx, dword ptr [g_00856860]
        test    ecx, ecx
        je    L_ee93
        mov    al, byte ptr [g_0085685e]
        test    al, al
        jne    L_ee65
        mov    al, byte ptr [g_0085685f]
        test    al, al
        je    L_ee93
L_ee65:
        call    FUN_006fd260
        mov    ecx, dword ptr [g_00856860]
        call    FUN_006fd230
        cmp    eax, 2
        jne    L_ee93
        mov    al, byte ptr [g_0085685e]
        test    al, al
        je    L_ee8b
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x24]
        jmp    L_ee93
L_ee8b:
        mov    ecx, dword ptr [esi]
        push    0
        push    esi
        call    dword ptr [ecx + 0x1c]
L_ee93:
        push    0x8567f8
        mov    ecx, esi
        call    FUN_006feec0
        push    0x8567b8
        mov    ecx, esi
        call    FUN_006feec0
L_eeab:
        mov    al, 1
        pop    esi
        ret    4
L_eeb1:
        mov    al, 1
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_00856860]
        push    esi
        call    FUN_006fd260
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        je    L_ef12
L_eed4:
        cmp    byte ptr [esi + 0xc], 1
        jne    L_eeff
        call    FUN_00707e90
        fsub    qword ptr [esi + 0x28]
        fcomp    qword ptr [g_007a0330]
        fnstsw  ax
        test    ah, 0x41
        jne    L_eeff
        cmp    esi, 0x8567f8
        je    L_eeff
        cmp    esi, 0x8567b8
        jne    L_ef0a
L_eeff:
        mov    esi, dword ptr [esi + 0x34]
        test    esi, esi
        jne    L_eed4
        pop    esi
        ret    4
L_ef0a:
        push    1
        push    esi
        call    FUN_006ffeb0
L_ef12:
        pop    esi
        ret    4
    }
}
