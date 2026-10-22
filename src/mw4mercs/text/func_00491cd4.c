/*
 * FUN_00491cd4 (extent 0x491cd4-0x491d0f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00717b30(void);

__declspec(naked) void FUN_00491cd4(void)
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
        mov    eax, dword ptr [ecx + 0x28]
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
        mov    eax, dword ptr [ecx + 0x18]
        test    al, 2
        jne    L_1d0e
        or    eax, 2
        mov    dword ptr [ecx + 0x18], eax
        lea    eax, [ecx + 0x20]
        mov    ecx, dword ptr [ecx + 0x1c]
        push    eax
        push    0
        push    0
        push    ecx
        call    FUN_00717b30
L_1d0e:
        ret    
    }
}
