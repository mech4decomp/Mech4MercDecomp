/*
 * FUN_006f64df (extent 0x6f64df-0x6f651a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d0;
extern void __cdecl FUN_006f5230(void);

__declspec(naked) void FUN_006f64df(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
        nop    
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        mov    dword ptr [esi], 0x79fc50
        je    L_650a
        push    eax
        call    dword ptr [g_0076b2d0]
        add    esp, 4
L_650a:
        lea    ecx, [esi + 0x18]
        call    FUN_006f5230
        mov    dword ptr [esi], 0x79fc54
        pop    esi
        ret    
    }
}
