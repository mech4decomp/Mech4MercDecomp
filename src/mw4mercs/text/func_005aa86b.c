/*
 * FUN_005aa86b (extent 0x5aa86b-0x5aaa41) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20a8;
extern int    g_007f25b0;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_00534630(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005a94e0(void);
extern void __cdecl FUN_005edd30(void);

__declspec(naked) void FUN_005aa86b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x44
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x58]
        push    0
        push    2
        push    0x44
        mov    esi, ecx
        push    4
        lea    ecx, [esp + 0x20]
        lea    ebp, [edi + 0xc]
        call    FUN_00534630
        mov    eax, dword ptr [edi + 8]
        add    eax, 0x14
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_004ea0f0
        lea    ebx, [edi + 0x18]
        push    ebx
        lea    ecx, [esp + 0x34]
        mov    byte ptr [esp + 0x2c], 0
        mov    word ptr [esp + 0x2e], 0
        call    FUN_0040c5d0
        fld    dword ptr [esi + 0x228]
        mov    ecx, dword ptr [ebp]
        mov    edx, dword ptr [ebp + 4]
        mov    eax, dword ptr [ebp + 8]
        mov    dword ptr [esp + 0x3c], ecx
        mov    cl, byte ptr [esi + 0x230]
        mov    byte ptr [esp + 0x28], cl
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esi + 0x22c]
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x40], edx
        mov    dx, word ptr [esi + 0x232]
        mov    dword ptr [esp + 0x44], eax
        mov    eax, dword ptr [esi + 0x238]
        push    ecx
        mov    ecx, dword ptr [edi + 8]
        fstp    dword ptr [esp + 0x4c]
        mov    word ptr [esp + 0x2e], dx
        mov    byte ptr [esp + 0x30], 4
        mov    byte ptr [esp + 0x50], 0
        mov    dword ptr [esp + 0x54], eax
        call    FUN_004d5b70
        mov    edx, dword ptr [esi + 0xd8]
        add    edx, 0x80
        push    edx
        mov    ecx, esi
        call    FUN_004daa20
        mov    eax, dword ptr [edi + 4]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x9c]
        push    ecx
        sub    esp, 0xc
        mov    ecx, esp
        push    ebp
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    ebx
        call    FUN_005a94e0
        mov    ecx, esi
        call    FUN_005edd30
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x44
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
        nop    
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
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_a9e8
        mov    eax, dword ptr [g_007f25b0]
        mov    ecx, dword ptr [g_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x6780c0
        push    0
        push    0x6780a0
        push    eax
        push    0x678010
        push    0x5aaa80
        push    0
        push    0
        push    ecx
        push    0x7855b4
        push    0x49f
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5aac20
        mov    dword ptr [g_007f20a8], esi
        jmp    L_a9f2
L_a9e8:
        mov    dword ptr [g_007f20a8], 0
L_a9f2:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_aa2e
        push    0x34
        push    0x231
        push    0x7855a0
        push    0xb
        mov    ecx, esi
        call    FUN_005008e0
        mov    edx, dword ptr [g_007f20a8]
        push    esi
        lea    ecx, [edx + 0x74]
        mov    dword ptr [esi], 0x773cd0
        call    FUN_00500ec0
        pop    esi
        ret    
L_aa2e:
        mov    edx, dword ptr [g_007f20a8]
        xor    esi, esi
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop    esi
        ret    
    }
}
