/*
 * FUN_005f8bd6 (extent 0x5f8bd6-0x5f8db4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b220c;
extern int    g_007f26a4;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_005f8dc0(void);
extern void __cdecl FUN_0066ac90(void);

__declspec(naked) void FUN_005f8bd6(void)
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
        sub    esp, 0x4c
        push    ebx
        mov    ebx, dword ptr [esp + 0x58]
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x5c]
        push    edi
        mov    edi, dword ptr [esp + 0x68]
        mov    eax, dword ptr [edi + 0x2c0]
        mov    ecx, dword ptr [eax + ebx*4]
        mov    al, byte ptr [esi + 4]
        test    al, al
        mov    dword ptr [esp + 0x64], ecx
        je    L_8c30
        mov    edx, dword ptr [edi + 0x2c4]
        mov    ebp, dword ptr [esi + 0x3c]
        cmp    ebp, dword ptr [edx + ebx*4]
        je    L_8c30
        push    edi
        push    ebp
        push    ebx
        lea    ecx, [edi + 0x2d0]
        call    FUN_0066ac90
        mov    eax, dword ptr [edi + 0x2c4]
        mov    ecx, dword ptr [esp + 0x64]
        mov    dword ptr [eax + ebx*4], ebp
L_8c30:
        mov    al, byte ptr [esi + 2]
        test    al, al
        je    L_8c72
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [eax + 0x5c]
        add    eax, 0x50
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [esi + 0x18]
        mov    dword ptr [edi + 0x2a4], edx
        mov    edx, dword ptr [esi + 0x1c]
        mov    dword ptr [edi + 0x2a8], eax
        mov    dword ptr [edi + 0x2ac], edx
        jmp    L_8ca8
L_8c72:
        cmp    byte ptr [esi], 0
        je    L_8c8a
        mov    eax, dword ptr [esi + 8]
        mov    edx, dword ptr [esi + 0xc]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x14], edx
        jmp    L_8ca4
L_8c8a:
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [eax + 0x5c]
        add    eax, 0x50
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x14], edx
L_8ca4:
        mov    dword ptr [esp + 0x18], eax
L_8ca8:
        mov    al, byte ptr [esi + 3]
        test    al, al
        je    L_8cd6
        mov    eax, dword ptr [esi + 0x24]
        mov    edx, dword ptr [esi + 0x20]
        mov    dword ptr [edi + 0x2b4], eax
        mov    eax, dword ptr [ecx + 0xd8]
        mov    dword ptr [edi + 0x2b0], edx
        mov    edx, dword ptr [esi + 0x28]
        add    eax, 0x50
        mov    dword ptr [edi + 0x2b8], edx
        push    eax
        jmp    L_8d05
L_8cd6:
        mov    al, byte ptr [esi + 1]
        test    al, al
        je    L_8cfb
        mov    ecx, dword ptr [esi + 0x2c]
        mov    edx, dword ptr [esi + 0x30]
        mov    eax, dword ptr [esi + 0x34]
        mov    dword ptr [esp + 0x1c], ecx
        mov    ecx, dword ptr [esi + 0x38]
        mov    dword ptr [esp + 0x20], edx
        mov    dword ptr [esp + 0x24], eax
        mov    dword ptr [esp + 0x28], ecx
        jmp    L_8d0e
L_8cfb:
        mov    edx, dword ptr [ecx + 0xd8]
        add    edx, 0x50
        push    edx
L_8d05:
        lea    ecx, [esp + 0x20]
        call    FUN_0041afd0
L_8d0e:
        mov    eax, dword ptr [g_007b220c]
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x68], eax
        mov    dword ptr [g_007b220c], 0x3a83126f
        call    FUN_0041b680
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x38], ecx
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x4c], edx
        mov    dword ptr [esp + 0x5c], eax
        call    FUN_0041a160
        mov    ecx, dword ptr [esp + 0x64]
        lea    edx, [esp + 0x2c]
        push    edx
        call    FUN_004daa20
        mov    eax, dword ptr [esp + 0x68]
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [g_007b220c], eax
        pop    ebx
        add    esp, 0x4c
        ret    
        nop    
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        mov    edi, dword ptr [ebx + 0xbc]
L_8d7b:
        test    edi, edi
        je    L_8db0
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_8db0
        mov    eax, dword ptr [g_007f26a4]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_8d7b
        push    esi
        mov    ecx, ebx
        call    FUN_005f8dc0
        push    esi
        lea    ecx, [ebx + 0x35c]
        call    FUN_004179b0
        jmp    L_8d7b
L_8db0:
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
