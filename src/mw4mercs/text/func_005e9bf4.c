/*
 * FUN_005e9bf4 (extent 0x5e9bf4-0x5e9da4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d5b70(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00501470(void);

__declspec(naked) void FUN_005e9bf4(void)
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
        sub    esp, 0x44
        push    esi
        lea    eax, [esp + 0x4c]
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 8], 0x44
        mov    dword ptr [esp + 0xc], 4
        mov    dword ptr [esp + 0x10], 2
        mov    dword ptr [esp + 0x14], 0
        call    FUN_004ea0f0
        fld    dword ptr [esi + 0x1a8]
        mov    ecx, dword ptr [esi + 0x19c]
        mov    edx, dword ptr [esi + 0x1a0]
        mov    eax, dword ptr [esi + 0x1a4]
        mov    dword ptr [esp + 0x24], ecx
        mov    ecx, dword ptr [esi + 0x17c]
        mov    dword ptr [esp + 0x30], ecx
        mov    cl, byte ptr [esi + 0x1b0]
        mov    dword ptr [esp + 0x28], edx
        mov    edx, dword ptr [esi + 0x180]
        mov    dword ptr [esp + 0x2c], eax
        mov    eax, dword ptr [esi + 0x184]
        mov    byte ptr [esp + 0x1c], cl
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esi + 0x1ac]
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 0x34], edx
        mov    dx, word ptr [esi + 0x1b2]
        mov    dword ptr [esp + 0x38], eax
        mov    eax, dword ptr [esi + 0x1c0]
        push    ecx
        fstp    dword ptr [esp + 0x40]
        lea    ecx, [esi + 0x194]
        mov    word ptr [esp + 0x22], dx
        mov    byte ptr [esp + 0x24], 0
        mov    byte ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x48], eax
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_004d5b70
        pop    esi
        add    esp, 0x44
        ret    4
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
        mov    eax, dword ptr [ecx + 0x1c]
        add    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    8
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        add    esi, edx
        push    ecx
        push    esi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_9d3b
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    al, 1
        pop    esi
        ret    0x10
L_9d3b:
        xor    al, al
        pop    esi
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + ecx]
        add    eax, ecx
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ecx + 4], edx
        mov    dword ptr [ecx + 8], eax
        ret    8
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
        mov    dword ptr [esi], 0x789760
        call    FUN_00501470
        test    byte ptr [esp + 8], 1
        je    L_9d9e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_9d9e:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
