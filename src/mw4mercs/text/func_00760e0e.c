/*
 * FUN_00760e0e (extent 0x760e0e-0x760e42) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0075db62(void);
extern void __cdecl FUN_0075dc3c(void);

__declspec(naked) void FUN_00760e0e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_0075dc3c
        add    esp, 8
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_0e41
        push    eax
        call    FUN_0075db62
        add    esp, 4
L_0e41:
        ret    
    }
}
