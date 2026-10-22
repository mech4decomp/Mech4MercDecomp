/*
 * FUN_007646f0 (extent 0x7646f0-0x76471e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008bd4f4;
extern void __cdecl FUN_0075db62(void);
extern void __cdecl FUN_00765f50(void);

__declspec(naked) void FUN_007646f0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    eax
        push    esi
        call    FUN_00765f50
        mov    ecx, dword ptr [esp + 0x10]
        add    esp, 8
        push    ecx
        call    FUN_0075db62
        mov    eax, dword ptr [g_008bd4f4]
        add    esp, 4
        sub    eax, esi
        mov    dword ptr [g_008bd4f4], eax
        pop    esi
        ret    
    }
}
