/*
 * FUN_0060d545 (extent 0x60d545-0x60d58e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416b60(void);

__declspec(naked) void FUN_0060d545(void)
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
        lea    eax, [esp + 4]
        push    eax
        add    ecx, 0x18
        call    FUN_00416b60
        test    eax, eax
        setne    al
        ret    4
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
        mov    edx, dword ptr [ecx]
        push    esi
        mov    esi, dword ptr [eax + 0xc]
        push    edi
        mov    edi, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 4]
        push    esi
        push    edi
        push    eax
        call    dword ptr [edx + 0x40]
        mov    eax, dword ptr [esi]
        pop    edi
        pop    esi
        ret    8
    }
}
