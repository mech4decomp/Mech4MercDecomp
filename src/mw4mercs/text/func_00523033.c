/*
 * FUN_00523033 (extent 0x523033-0x5231ac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_00513c30(void);

__declspec(naked) void FUN_00523033(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        jne    L_307f
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, 0xd
        jae    L_30cd
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        je    L_30c6
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        xor    ecx, 0x85739531
        push    edx
        mov    edx, dword ptr [ecx]
        add    eax, 0x4e2
        jmp    L_30b8
L_307f:
        cmp    eax, 1
        jne    L_30d8
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, 0xd
        jae    L_30cd
        mov    esi, dword ptr [esp + 0x14]
        test    esi, esi
        je    L_30c6
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        xor    ecx, 0x85739531
        push    edx
        mov    edx, dword ptr [ecx]
        add    eax, 0x4b0
L_30b8:
        push    eax
        call    dword ptr [edx + 0x34]
        push    eax
        push    esi
        call    FUN_00513c30
        add    esp, 0xc
L_30c6:
        mov    eax, 1
        pop    esi
        ret    
L_30cd:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_30d8
        mov    byte ptr [eax], 0
L_30d8:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [edx + 8]
        mov    edx, dword ptr [edx + 4]
        push    esi
        lea    esi, [edx - 1]
        cmp    esi, 0x1f
        mov    dword ptr [eax], 0
        ja    L_31a3
        xor    edx, edx
        mov    dl, byte ptr [esi + 0x5231d0]
        jmp    dword ptr [edx*4 + 0x5231ac]
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x18]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x20]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x1c]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x24]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x28]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x2c]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x48]
        mov    dword ptr [eax], edx
        mov    eax, 1
        pop    esi
        ret    8
        mov    ecx, dword ptr [ecx + 0x40ee8]
        mov    edx, dword ptr [ecx + 0x4c]
        mov    dword ptr [eax], edx
L_31a3:
        mov    eax, 1
        pop    esi
        ret    8
        // jump-table data @ 0x005231AC (0 relocated pointers)
    }
}
