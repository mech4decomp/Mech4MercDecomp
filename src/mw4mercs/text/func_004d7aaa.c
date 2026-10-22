/*
 * FUN_004d7aaa (extent 0x4d7aaa-0x4d7b4a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_007089b0(void);

__declspec(naked) void FUN_004d7aaa(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    0
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        push    0x772f94
        mov    dword ptr [esp + 0x14], 4
        call    FUN_00708930
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_7af2
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x772f94
        mov    dword ptr [esp + 0xc], 0x70e4
        call    FUN_007089b0
L_7af2:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    0
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        push    0x772fac
        mov    dword ptr [esp + 0x14], 4
        call    FUN_00708930
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_7b42
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x772fac
        mov    dword ptr [esp + 0xc], 0x6d2e
        call    FUN_007089b0
L_7b42:
        __emit 0x8B  // 139 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        add    esp, 8
        ret    
    }
}
