/*
 * FUN_0062727f (extent 0x62727f-0x6272cd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006290a0(void);

__declspec(naked) void FUN_0062727f(void)
{
    __asm {
        nop    
        push    0xc
        call    FUN_006290a0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx + 0x134]
        and    edx, 0xff
        mov    dword ptr [ecx + 0x80], edx
        je    L_72c7
        mov    ecx, dword ptr [eax + 0x7c]
        test    ecx, ecx
        jne    L_72c7
        mov    dword ptr [eax + 0x70], 1
        mov    dword ptr [eax + 0xb8], 0x64
        mov    dword ptr [eax + 0x6c], 0x40c00000
L_72c7:
        mov    dword ptr [eax + 0x7c], edx
        ret    4
    }
}
