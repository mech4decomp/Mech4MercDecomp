/*
 * FUN_005b6791 (extent 0x5b6791-0x5b6845) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041acb0(void);

__declspec(naked) void FUN_005b6791(void)
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
        mov    eax, dword ptr [ecx + 0xe0]
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, 0x14
        jl    L_67f6
        cmp    eax, 0x16
        jg    L_67f6
        mov    eax, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [esp + 4]
        add    eax, 0x80
        push    esi
        mov    esi, dword ptr [eax + 0xc]
        mov    dword ptr [edx], esi
        mov    esi, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [edx + 4], esi
        mov    dword ptr [edx + 8], eax
        mov    edx, dword ptr [ecx + 0x598]
        mov    eax, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 0x594]
        mov    ecx, dword ptr [ecx + 0x59c]
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 8], ecx
        pop    esi
        ret    8
L_67f6:
        mov    ecx, dword ptr [ecx + 0xd8]
        mov    edx, dword ptr [ecx + 0x8c]
        lea    eax, [ecx + 0x80]
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 0x2c]
        mov    dword ptr [ecx + 8], edx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        call    FUN_0041acb0
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [ecx]
        mov    ecx, dword ptr [esp + 8]
        mov    byte ptr [eax], dl
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        ret    8
    }
}
