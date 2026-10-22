/*
 * FUN_0075db86 (extent 0x75db86-0x75dbbe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2e8;
extern int    g_0076b2ec;
extern int    g_0076b324;
extern int    g_008bd678;
extern void __cdecl FUN_0075df90(void);

__declspec(naked) void FUN_0075db86(void)
{
    __asm {
        jmp    dword ptr [g_0076b2e8]
        jmp    dword ptr [g_0076b2ec]
        cmp    dword ptr [g_008bd678], -1
        jne    L_dba7
        push    dword ptr [esp + 4]
        call    dword ptr [g_0076b324]
        pop    ecx
        ret    
L_dba7:
        push    0x8bd674
        push    0x8bd678
        push    dword ptr [esp + 0xc]
        call    FUN_0075df90
        add    esp, 0xc
        ret    
    }
}
