/*
 * FUN_00590ed8 (extent 0x590ed8-0x59101e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007f1f8c;
extern int    g_007f1f90;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004168e0(void);

__declspec(naked) void FUN_00590ed8(void)
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
        mov    eax, dword ptr [g_007f1f90]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007f1f90], eax
        jne    L_0f46
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_0f3c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007f1f8c], esi
        jmp    L_0f46
L_0f3c:
        mov    dword ptr [g_007f1f8c], 0
L_0f46:
        mov    ecx, dword ptr [g_007f1f8c]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_0f80
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi], 0x7823b4
        mov    eax, esi
        pop    esi
        ret    8
L_0f80:
        pop    edi
        xor    eax, eax
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx + 4], eax
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ecx + 8], eax
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x10], edx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [esp + 0x20]
        mov    dword ptr [ecx + 0x14], edx
        mov    edx, dword ptr [esp + 0x1c]
        mov    dword ptr [ecx + 0x1c], eax
        mov    eax, dword ptr [esp + 0x24]
        mov    dword ptr [ecx + 0x18], edx
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [ecx + 0x20], eax
        mov    eax, dword ptr [esp + 0x28]
        mov    dword ptr [ecx + 0x34], edx
        mov    edx, dword ptr [esp + 0x30]
        mov    dword ptr [ecx + 0x30], eax
        mov    eax, dword ptr [ecx + 0x34]
        mov    dword ptr [ecx + 0x38], edx
        mov    dword ptr [ecx + 0x40], eax
        mov    edx, dword ptr [ecx + 0x30]
        mov    eax, dword ptr [ecx + 0x38]
        mov    dword ptr [ecx + 0x3c], edx
        mov    edx, dword ptr [esp + 0x38]
        mov    dword ptr [ecx + 0x44], eax
        mov    eax, dword ptr [esp + 0x34]
        mov    dword ptr [ecx + 0x28], edx
        mov    edx, dword ptr [esp + 0x3c]
        mov    dword ptr [ecx + 0x24], eax
        lea    eax, [ecx + 0x48]
        mov    dword ptr [ecx + 0x2c], edx
        mov    byte ptr [ecx + 0x54], 1
        xor    ecx, ecx
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        ret    0x3c
    }
}
