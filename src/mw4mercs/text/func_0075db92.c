/*
 * FUN_0075db92 (extent 0x75db92-0x75dbd0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b324;
extern int    g_008bd678;
extern void __cdecl FUN_0075db92(void);
extern void __cdecl FUN_0075df90(void);

__declspec(naked) void FUN_0075db92(void)
{
    __asm {
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
        push    dword ptr [esp + 4]
        call    FUN_0075db92
        neg    eax
        sbb    eax, eax
        pop    ecx
        neg    eax
        dec    eax
        ret    
    }
}
