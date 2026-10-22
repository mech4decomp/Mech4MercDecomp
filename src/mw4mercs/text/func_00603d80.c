/*
 * FUN_00603d80 (extent 0x603d80-0x603dcf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_00603d80(void)
{
    __asm {
        add    ecx, 0x40
        call    FUN_0041fd80
        fld    dword ptr [eax + 0x2c]
        ret    
        nop    
        nop    
        nop    
        nop    
        add    ecx, 0x50
        call    FUN_0041fd80
        fld    dword ptr [eax + 0x2c]
        ret    
        nop    
        nop    
        nop    
        nop    
        add    ecx, 0x48
        call    FUN_0041fd80
        fld    dword ptr [eax + 0x2c]
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        lea    esi, [ecx + 0x40]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jne    L_3dc3
        mov    al, 1
        pop    esi
        ret    
L_3dc3:
        mov    ecx, esi
        call    FUN_0041fd80
        mov    al, byte ptr [eax + 0x28]
        pop    esi
        ret    
    }
}
