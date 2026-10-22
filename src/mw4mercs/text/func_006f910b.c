/*
 * FUN_006f910b (extent 0x6f910b-0x6f9161) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f9160(void);
extern void __cdecl FUN_006f9170(void);

__declspec(naked) void FUN_006f910b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x34
        push    eax
        lea    ecx, [esp + 4]
        push    0x76b9a8
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        call    FUN_006f89f0
        mov    edx, dword ptr [eax]
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    ecx, dword ptr [esp + 0x44]
        push    0x79fac0
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 8]
        add    esp, 0x34
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        call    FUN_006f9160
        jmp    FUN_006f9170
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
