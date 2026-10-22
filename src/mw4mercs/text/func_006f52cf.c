/*
 * FUN_006f52cf (extent 0x6f52cf-0x6f52f1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b294;
extern int    g_0076b2d0;

__declspec(naked) void FUN_006f52cf(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b294]
        add    esp, 4
        ret    4
    }
}
