/*
 * FUN_007314e0 (extent 0x7314e0-0x731518) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b104;
extern int    g_0076b130;
extern int    g_0076b134;

__declspec(naked) void FUN_007314e0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        add    eax, 3
        and    eax, 0xfffffffc
        ret    4
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    esi
        call    dword ptr [g_0076b134]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        push    eax
        push    esi
        push    1
        call    dword ptr [g_0076b104]
        push    eax
        call    dword ptr [g_0076b130]
        inc    eax
        pop    esi
        ret    8
    }
}
