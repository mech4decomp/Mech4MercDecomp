/*
 * FUN_0065cb26 (extent 0x65cb26-0x65ccf9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b220c;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2030;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_0065c180(void);
extern void __cdecl FUN_0065c320(void);

__declspec(naked) void FUN_0065cb26(void)
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
        sub    esp, 0x24
        push    ebx
        push    esi
        mov    esi, dword ptr [g_007f2030]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x14]
        cmp    ecx, -2
        je    L_cb83
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ebx, eax
        test    ebx, ebx
        je    L_cb83
        mov    ecx, dword ptr [ebx + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_cb83
        mov    ecx, dword ptr [ebx + 4]
        push    esi
        call    FUN_00415230
        test    al, al
        jne    L_cb91
L_cb83:
        mov    ecx, edi
        call    FUN_0065c320
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x24
        ret    
L_cb91:
        mov    edx, dword ptr [edi + 4]
        push    0x3ff33333
        push    1
        lea    eax, [esp + 0x2c]
        push    ebx
        push    eax
        mov    dword ptr [ebx + 0x514], edx
        call    FUN_0065c180
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        push    0x3ff33333
        push    0
        mov    dword ptr [esp + 0x30], ecx
        lea    ecx, [esp + 0x3c]
        push    ebx
        push    ecx
        mov    dword ptr [esp + 0x3c], edx
        mov    dword ptr [esp + 0x40], eax
        call    FUN_0065c180
        mov    edx, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x30], ecx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    esi, [edi + 0x24]
        push    esi
        mov    dword ptr [esp + 0x40], edx
        call    FUN_0041c540
        add    esp, 0x2c
        test    al, al
        je    L_cc3d
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        push    0x3f000000
        push    1
        mov    dword ptr [esi], edx
        lea    edx, [esp + 0x2c]
        push    ebx
        push    edx
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], ecx
        call    FUN_0065c180
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        add    esp, 0x10
        mov    dword ptr [edi + 0x30], ecx
        mov    dword ptr [edi + 0x34], edx
        mov    dword ptr [edi + 0x38], eax
        jmp    L_cc77
L_cc3d:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        push    0x3f000000
        push    0
        mov    dword ptr [esi], ecx
        lea    ecx, [esp + 0x2c]
        push    ebx
        push    ecx
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], eax
        call    FUN_0065c180
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [edi + 0x30], edx
        mov    edx, dword ptr [eax + 8]
        add    esp, 0x10
        mov    dword ptr [edi + 0x34], ecx
        mov    dword ptr [edi + 0x38], edx
L_cc77:
        mov    ecx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi]
        mov    edx, dword ptr [esi + 8]
        lea    ebx, [edi + 0x18]
        mov    dword ptr [ebx + 4], ecx
        mov    edi, dword ptr [edi + 4]
        push    1
        mov    ecx, edi
        mov    dword ptr [ebx], eax
        mov    dword ptr [ebx + 8], edx
        call    FUN_005c1720
        mov    eax, dword ptr [edi]
        push    0
        push    1
        push    0x258
        push    ebx
        mov    ecx, edi
        call    dword ptr [eax + 0x1bc]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x24
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
        mov    esi, ecx
        cmp    byte ptr [esi + 0x40], 1
        jne    L_cccd
        xor    al, al
        pop    esi
        ret    
L_cccd:
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [esi + 0x24]
        push    ecx
        lea    edx, [esi + 0x18]
        push    edx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_ccf2
        mov    eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jg    L_ccf2
        xor    eax, eax
        pop    esi
        ret    
L_ccf2:
        mov    eax, 1
        pop    esi
        ret    
    }
}
