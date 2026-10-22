/*
 * FUN_004a44be (extent 0x4a44be-0x4a47e4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00494990(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004a4db0(void);
extern void __cdecl FUN_004a9250(void);
extern void __cdecl FUN_004add90(void);
extern void __cdecl FUN_004addd0(void);
extern void __cdecl FUN_004adf70(void);
extern void __cdecl FUN_004adfb0(void);
extern void __cdecl FUN_004ae3c0(void);
extern void __cdecl FUN_004ae5a0(void);
extern void __cdecl FUN_004aeb30(void);

__declspec(naked) void FUN_004a44be(void)
{
    __asm {
        nop    
        nop    
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0xa0]
        test    eax, eax
        je    L_450e
        jle    L_450e
        mov    ecx, dword ptr [edi + 0x10]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x270]
        push    esi
        mov    esi, dword ptr [edi + 0xa8]
        add    esi, 0x70
        mov    ebx, eax
L_44e6:
        fld    dword ptr [esi - 0x54]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_4506
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_4506
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x14]
L_4506:
        add    esi, ebp
        dec    ebx
        jne    L_44e6
        pop    esi
        pop    ebp
        pop    ebx
L_450e:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, edi
        call    FUN_00494990
        pop    edi
        ret    4
        nop    
        nop    
        ret    
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
        nop    
        sub    esp, 0x20
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x30]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        push    ebp
        push    edi
        mov    esi, ecx
        push    0x526
        call    FUN_004a9250
        mov    ebx, 5
        lea    ecx, [esi + 0x2b8]
        mov    dword ptr [esi + 0x2b4], ebx
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x2c4]
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x2d8]
        mov    dword ptr [esi + 0x2d4], ebx
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x2e4]
        call    FUN_004ae3c0
        lea    ecx, [esi + 0x2f8]
        mov    dword ptr [esi + 0x2f4], 6
        call    FUN_004ae3c0
        mov    dword ptr [esi + 0x304], 2
        mov    dword ptr [esi + 0x31c], 0
        lea    ebx, [esi + 0x31c]
        mov    dword ptr [esi + 0x324], 0
        mov    dword ptr [esi + 0x32c], 0
        push    ebp
        mov    dword ptr [esi + 0x334], 0
        push    edi
        lea    ecx, [esi + 0x2b8]
        mov    dword ptr [esi], 0x770354
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x2c4]
        call    FUN_004ae5a0
        mov    eax, dword ptr [edi]
        push    1
        lea    ecx, [esi + 0x2d0]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        push    ebp
        push    edi
        lea    ecx, [esi + 0x2d8]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x2e4]
        call    FUN_004ae5a0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x2f0]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        cmp    ebp, 0xa
        jge    L_4753
        push    0
        lea    ecx, [esi + 0x2f8]
        call    FUN_004aeb30
        push    0x3f800000
        lea    ecx, [esi + 0x304]
        call    FUN_004adfb0
        lea    ecx, [esp + 0x14]
        mov    byte ptr [esi + 0x318], 0
        mov    dword ptr [esp + 0x10], 4
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x28], 1
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esp + 0x28]
        call    FUN_004addd0
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_00495e30
        mov    edx, dword ptr [esp + 0x18]
        lea    ecx, [eax + eax*2]
        fld    dword ptr [edx + ecx*4 + 4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax]
        fsubr    dword ptr [eax + 8]
        mov    al, byte ptr [esp + 0x2c]
        test    al, al
        je    L_46c5
        fmul    dword ptr [esp + 0x24]
L_46c5:
        push    ebp
        fstp    dword ptr [esi + 0x320]
        push    edi
        lea    ecx, [esp + 0x1c]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esp + 0x28]
        call    FUN_004addd0
        mov    eax, dword ptr [edi]
        push    1
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        push    0
        lea    ecx, [esp + 0x18]
        call    FUN_00495e30
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esp + 0x18]
        fld    dword ptr [eax + edx*4 + 4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax]
        fsubr    dword ptr [eax + 8]
        mov    al, byte ptr [esp + 0x2c]
        test    al, al
        je    L_4719
        fmul    dword ptr [esp + 0x24]
L_4719:
        push    ebp
        fstp    dword ptr [esi + 0x328]
        push    edi
        lea    ecx, [esi + 0x32c]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x334]
        call    FUN_004add90
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov    byte ptr [esi + 0x33c], 0
        je    L_47bd
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_47bd
L_4753:
        push    ebp
        push    edi
        lea    ecx, [esi + 0x2f8]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea    ecx, [esi + 0x304]
        call    FUN_004adf70
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x318]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        mov    ecx, ebx
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x324]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x32c]
        call    FUN_004add90
        push    ebp
        push    edi
        lea    ecx, [esi + 0x334]
        call    FUN_004add90
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x33c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
L_47bd:
        mov    ecx, esi
        call    FUN_004a4db0
        pop    edi
        mov    dword ptr [esi + 0x26c], 0xd8
        mov    dword ptr [esi + 0x270], 0x78
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x20
        ret    8
    }
}
