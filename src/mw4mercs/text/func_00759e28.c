/*
 * FUN_00759e28 (extent 0x759e28-0x759e57) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b7870;
extern void __cdecl FUN_00759d10(void);

__declspec(naked) void FUN_00759e28(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edx, ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, esi
        repne scasb
        mov    eax, dword ptr [g_007b7870]
        not    ecx
        push    ecx
        push    esi
        push    eax
        mov    ecx, edx
        call    FUN_00759d10
        pop    edi
        pop    esi
        ret    4
    }
}
