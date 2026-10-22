/*
 * FUN_0075df62 (extent 0x75df62-0x75df7e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b33c;
extern void __cdecl FUN_0075df9c(void);

__declspec(naked) void FUN_0075df62(void)
{
    __asm {
        push    0x30000
        push    0x10000
        call    FUN_0075df9c
        pop    ecx
        pop    ecx
        ret    
        jmp    dword ptr [g_0076b33c]
        xor    eax, eax
        ret    
        ret    
    }
}
