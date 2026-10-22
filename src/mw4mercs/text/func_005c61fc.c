/*
 * FUN_005c61fc (extent 0x5c61fc-0x5c6543) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_007878fc;
extern int    g_00787910;
extern int    g_00787914;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2460;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005dd050(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064ded0(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005c61fc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        mov    esi, dword ptr [esp + 0x14]
        push    0
        push    esi
        mov    ecx, edi
        call    FUN_005dd050
        cmp    byte ptr [esp + 0x18], 1
        jne    L_62e4
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_62e4
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_62e4
        mov    ebx, dword ptr [edi + 0x170]
        cmp    eax, ebx
        je    L_62e4
        test    ebx, ebx
        je    L_62e4
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    esi, eax
        mov    eax, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [eax + 0x60]
        cmp    esi, eax
        je    L_62e4
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_00600940
        mov    ecx, ebx
        mov    ebp, eax
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        mov    ecx, ebx
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_62e4
L_62b3:
        mov    edi, dword ptr [esi]
        push    edi
        mov    ecx, ebp
        call    FUN_0064e600
        cmp    al, 1
        jne    L_62d5
        push    edi
        mov    ecx, ebp
        call    FUN_0064e5a0
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    ecx, eax
        call    FUN_0064ded0
L_62d5:
        mov    ecx, ebx
        add    esi, 4
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        jne    L_62b3
L_62e4:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
        mov    eax, dword ptr [g_007f2460]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        lea    ebx, [esi + 0x1c8]
        mov    ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        je    L_63bb
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi + 0x170]
        mov    edi, dword ptr [ecx + 0x30]
        cmp    edi, dword ptr [edx + 0x30]
        je    L_63bb
        mov    ecx, ebx
        call    FUN_0041fd80
        cmp    dword ptr [eax + 0x30], edi
        jne    L_6354
        mov    ecx, dword ptr [esi + 0x4e0]
        test    ecx, 0xfffffffc
        je    L_63bb
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        cmp    eax, 0x7e1
        jne    L_63bb
L_6354:
        fld    dword ptr [esi + 0x560]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_637b
        push    0
        call    FUN_00707e70
        fcomp    dword ptr [esi + 0x560]
        fnstsw  ax
        test    ah, 0x40
        jne    L_63bb
L_637b:
        fld    dword ptr [esi + 0x564]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_639c
        mov    ecx, dword ptr [g_00787910]
        mov    dword ptr [esi + 0x564], ecx
        jmp    L_63ae
L_639c:
        fld    dword ptr [g_007878fc]
        fmul    dword ptr [esi + 0x564]
        fstp    dword ptr [esi + 0x564]
L_63ae:
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x560]
L_63bb:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebx
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
        push    esi
        mov    esi, ecx
        fld    dword ptr [esi + 0x564]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_6449
        fld    dword ptr [esi + 0x564]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_640c
        fld    dword ptr [esi + 0x564]
        fcomp    dword ptr [g_00787914]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6417
L_640c:
        mov    eax, dword ptr [g_00787914]
        mov    dword ptr [esi + 0x564], eax
L_6417:
        push    0
        call    FUN_00707e70
        fld    dword ptr [esi + 0x564]
        fadd    st(0), st(0)
        fadd    dword ptr [esi + 0x560]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_6449
        mov    dword ptr [esi + 0x560], 0
        mov    dword ptr [esi + 0x564], 0
L_6449:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        lea    edi, [esi + 0x1c8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jne    L_6478
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    
L_6478:
        mov    ecx, dword ptr [esi + 0x4e0]
        test    ecx, 0xfffffffc
        push    ebx
        je    L_64c9
        and    ecx, 0xfffffffc
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        cmp    eax, 0x7e1
        jne    L_64c9
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax]
        mov    edi, dword ptr [esi + 0x170]
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x60]
        cmp    ebx, eax
        je    L_64f3
        push    1
        mov    ecx, esi
        call    FUN_005c1720
        call    FUN_006f49a0
        pop    ebx
        pop    edi
        pop    esi
        ret    
L_64c9:
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, dword ptr [esi + 0x170]
        mov    edx, dword ptr [ecx]
        mov    edi, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x60]
        cmp    eax, ebx
        jne    L_64f3
        push    1
        mov    ecx, esi
        call    FUN_005c1720
L_64f3:
        call    FUN_006f49a0
        pop    ebx
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        lea    esi, [edi + 0x1c8]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_6539
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x30]
        cmp    ecx, dword ptr [esp + 0xc]
        jne    L_6539
        push    1
        mov    ecx, edi
        call    FUN_005c1720
L_6539:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
    }
}
