/*
 * FUN_0050a54d (extent 0x50a54d-0x50a722) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007b220c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040e4a0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_0040edc0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0050a5c0(void);
extern void __cdecl FUN_0050c5c0(void);

__declspec(naked) void FUN_0050a54d(void)
{
    __asm {
        nop    
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_a59b
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax + eax*8]
        lea    edx, [eax + ecx*2]
        dec    eax
        lea    esi, [esi + edx*8]
        js    L_a585
        push    edi
        lea    edi, [eax + 1]
L_a574:
        sub    esi, 0x98
        mov    ecx, esi
        call    FUN_0050c5c0
        dec    edi
        jne    L_a574
        pop    edi
L_a585:
        test    bl, 1
        je    L_a593
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_a593:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_a59b:
        mov    ecx, esi
        call    FUN_0050c5c0
        test    bl, 1
        je    L_a5b0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_a5b0:
        mov    eax, esi
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
        sub    esp, 0x50
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x5c]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    4
        lea    ecx, [edi + 0x1c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x20]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x29]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x3c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x44]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    1
        push    0
        push    0x76c6b4
        lea    ecx, [esp + 0x18]
        call    FUN_0040dca0
        push    0x77792c
        lea    ecx, [esp + 0x10]
        call    FUN_0040ecc0
        mov    ebx, eax
        test    ebx, ebx
        jne    L_a668
        push    0x77792c
        lea    ecx, [esp + 0x10]
        call    FUN_0040edc0
L_a668:
        fld    dword ptr [edi + 0x30]
        fsub    dword ptr [edi + 0x34]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_a683
        push    1
        jmp    L_a685
L_a683:
        push    0
L_a685:
        push    0x77791c
        mov    ecx, ebx
        call    FUN_00411f20
        lea    ecx, [esp + 0xc]
        call    FUN_0040e4a0
        mov    ebx, dword ptr [edi + 4]
        mov    edi, dword ptr [edi]
        mov    ecx, ebx
        sub    ecx, edi
        mov    eax, 0x38e38e39
        imul    ecx
        sar    edx, 3
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        push    4
        lea    eax, [esp + 0x64]
        mov    dword ptr [esp + 0x64], edx
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        cmp    edi, ebx
        je    L_a6db
L_a6ca:
        mov    edx, dword ptr [esi]
        push    0x24
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        add    edi, 0x24
        cmp    edi, ebx
        jne    L_a6ca
L_a6db:
        lea    ecx, [esp + 0xc]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x50
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x44
        push    esi
        push    1
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_004d1f80
        lea    ecx, [esp + 4]
        push    ecx
        mov    ecx, esi
        call    FUN_0050a5c0
        lea    ecx, [esp + 4]
        call    FUN_004d21c0
        pop    esi
        add    esp, 0x44
        ret    4
    }
}
