/*
 * FUN_005ad481 (extent 0x5ad481-0x5ad886) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dd234;
extern int    g_007f20d0;
extern int    g_007f20d8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005ad4f0(void);
extern void __cdecl FUN_005aeeb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005ad481(void)
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
        nop    
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x34c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d4cb
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f20d8]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005ad4f0
        mov    esi, eax
        jmp    L_d4cd
L_d4cb:
        xor    esi, esi
L_d4cd:
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007f20d0]
        push    esi
        lea    ecx, [edx + 0x10]
        call    FUN_004179b0
        mov    eax, esi
        pop    esi
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
        sub    esp, 0xc
        mov    eax, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x2c]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_004d9940
        xor    ebx, ebx
        mov    byte ptr [esi + 0x190], 1
        mov    dword ptr [esi + 0x194], ebx
        mov    dword ptr [esi + 0x198], ebx
        mov    byte ptr [esi + 0x1c0], 1
        mov    dword ptr [esi + 0x1c4], ebx
        mov    dword ptr [esi + 0x1c8], ebx
        mov    byte ptr [esi + 0x200], 1
        lea    edi, [esi + 0x190]
        mov    dword ptr [esi + 0x204], ebx
        mov    dword ptr [esi + 0x208], ebx
        mov    byte ptr [esi + 0x230], 1
        lea    ebp, [esi + 0x1c0]
        mov    dword ptr [esi + 0x234], ebx
        mov    dword ptr [esi + 0x238], ebx
        mov    byte ptr [esi + 0x260], 1
        mov    dword ptr [esi + 0x264], ebx
        mov    dword ptr [esi + 0x268], ebx
        mov    byte ptr [esi + 0x290], 1
        mov    dword ptr [esi + 0x294], ebx
        mov    dword ptr [esi + 0x298], ebx
        mov    byte ptr [esi + 0x2c4], 1
        push    ebx
        mov    dword ptr [esi + 0x2c8], ebx
        mov    dword ptr [esi + 0x2cc], ebx
        mov    byte ptr [esi + 0x2dc], 1
        sub    esp, 0xc
        mov    dword ptr [esi + 0x2e0], ebx
        mov    dword ptr [esi + 0x2e4], ebx
        mov    byte ptr [esi + 0x2f4], 1
        mov    dword ptr [esi + 0x2f8], ebx
        mov    dword ptr [esi + 0x2fc], ebx
        mov    byte ptr [esi + 0x310], 1
        mov    ecx, esp
        mov    dword ptr [esi + 0x314], ebx
        mov    dword ptr [esi + 0x318], ebx
        mov    byte ptr [esi + 0x328], 1
        push    0x7b8d88
        mov    dword ptr [esi + 0x32c], ebx
        mov    dword ptr [esi + 0x330], ebx
        mov    dword ptr [esi + 0x344], ebx
        mov    dword ptr [esi + 0x348], 0xfffffffe
        mov    dword ptr [esi], 0x785a08
        mov    dword ptr [esi + 0x168], ebx
        mov    dword ptr [esi + 0x16c], ebx
        mov    dword ptr [esi + 0x170], ebx
        mov    dword ptr [esi + 0x174], ebx
        mov    dword ptr [esi + 0x178], ebx
        mov    dword ptr [esi + 0x17c], ebx
        mov    byte ptr [esi + 0x1f0], 1
        mov    byte ptr [esi + 0x1f1], 1
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        lea    ecx, [esi + 0x260]
        call    FUN_005aeeb0
        push    ebx
        sub    esp, 0xc
        mov    ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        lea    ecx, [esi + 0x290]
        call    FUN_005aeeb0
        mov    eax, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [eax + 0x2c]
        add    eax, 0x20
        mov    dword ptr [esp + 0x10], ecx
        mov    edx, dword ptr [eax + 0x1c]
        push    ebx
        mov    dword ptr [esp + 0x18], edx
        mov    eax, dword ptr [eax + 0x2c]
        sub    esp, 0xc
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x2c]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        lea    ecx, [esi + 0x200]
        call    FUN_005aeeb0
        push    ebx
        sub    esp, 0xc
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x2c]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        lea    ecx, [esi + 0x230]
        call    FUN_005aeeb0
        push    ebx
        mov    dword ptr [esi + 0x2c8], ebx
        mov    dword ptr [esi + 0x2d0], ebx
        mov    dword ptr [esi + 0x2d4], ebx
        mov    dword ptr [esi + 0x2d8], ebx
        mov    dword ptr [esi + 0x2cc], ebx
        mov    byte ptr [esi + 0x2c4], 1
        sub    esp, 0xc
        mov    dword ptr [esi + 0x2e0], ebx
        mov    dword ptr [esi + 0x2e8], ebx
        mov    dword ptr [esi + 0x2ec], ebx
        mov    dword ptr [esi + 0x2f0], ebx
        mov    dword ptr [esi + 0x2e4], ebx
        mov    byte ptr [esi + 0x2dc], 1
        mov    dword ptr [esi + 0x2f8], ebx
        mov    dword ptr [esi + 0x300], ebx
        mov    dword ptr [esi + 0x304], ebx
        mov    dword ptr [esi + 0x308], ebx
        mov    dword ptr [esi + 0x2fc], ebx
        mov    byte ptr [esi + 0x2f4], 1
        mov    ecx, esp
        mov    dword ptr [esi + 0x314], ebx
        mov    dword ptr [esi + 0x31c], ebx
        mov    dword ptr [esi + 0x320], ebx
        mov    dword ptr [esi + 0x324], ebx
        mov    dword ptr [esi + 0x318], ebx
        mov    byte ptr [esi + 0x310], 1
        push    0x7b8d88
        mov    byte ptr [esi + 0x2c0], bl
        mov    byte ptr [esi + 0x2c1], bl
        mov    byte ptr [esi + 0x2c2], bl
        mov    dword ptr [esi + 0x32c], ebx
        mov    dword ptr [esi + 0x334], ebx
        mov    dword ptr [esi + 0x338], ebx
        mov    dword ptr [esi + 0x33c], ebx
        mov    dword ptr [esi + 0x330], ebx
        mov    byte ptr [esi + 0x328], 1
        mov    dword ptr [esi + 0x30c], ebx
        mov    dword ptr [esi + 0x180], ebx
        mov    dword ptr [esi + 0x184], ebx
        mov    dword ptr [esi + 0x188], ebx
        mov    dword ptr [esi + 0x18c], ebx
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        mov    ecx, edi
        call    FUN_005aeeb0
        push    ebx
        sub    esp, 0xc
        mov    ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        sub    esp, 0xc
        mov    ecx, esp
        push    0x7b8d88
        call    FUN_00551870
        mov    ecx, ebp
        call    FUN_005aeeb0
        mov    eax, dword ptr [g_007b8d90]
        mov    ecx, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    dword ptr [esi + 0x1fc], eax
        mov    eax, dword ptr [esi + 0x10]
        or    eax, 0x40
        pop    edi
        mov    dword ptr [esi + 0x10], eax
        mov    byte ptr [esi + 0x340], bl
        mov    dword ptr [esi + 0x1f4], ecx
        mov    dword ptr [esi + 0x1f8], edx
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc
        ret    0x10
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
        mov    eax, 0xe
        ret    
    }
}
