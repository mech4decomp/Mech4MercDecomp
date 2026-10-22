/*
 * FUN_0042980e (extent 0x42980e-0x42984e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9678;
extern void __cdecl FUN_00487830(void);

__declspec(naked) void FUN_0042980e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007b9678]
        push    esi
        push    edi
        push    eax
        xor    edi, edi
        mov    esi, ecx
        push    edi
        call    FUN_00487830
        mov    dword ptr [esi + 0x34], edi
        mov    dword ptr [esi + 0x38], edi
        mov    dword ptr [esi + 0x20], edi
        mov    dword ptr [esi + 0x24], edi
        pop    edi
        mov    dword ptr [esi], 0x76dfec
        mov    dword ptr [esi + 0x2c], 0x42480000
        mov    dword ptr [esi + 0x30], 0x42a00000
        mov    dword ptr [esi + 0x28], 0x42e40000
        mov    eax, esi
        pop    esi
        ret    
    }
}
