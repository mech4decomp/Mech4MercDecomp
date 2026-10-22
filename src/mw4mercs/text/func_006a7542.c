/*
 * FUN_006a7542 (extent 0x6a7542-0x6a75b6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a7542(void)
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795458
        je    L_7569
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_7569:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], 4
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax + 0x10], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x14], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], edx
        mov    dword ptr [eax], 0x799e6c
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        mov    eax, 3
        ret    
    }
}
