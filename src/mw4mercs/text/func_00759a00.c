/*
 * FUN_00759a00 (extent 0x759a00-0x759a47) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;
extern void __cdecl FUN_00759710(void);

__declspec(naked) void FUN_00759a00(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    0x800
        push    eax
        add    ecx, 0xe
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00759710
        xor    eax, eax
        mov    dword ptr [esi + 0x810], eax
        mov    dword ptr [esi + 0x814], eax
        mov    word ptr [esi + 0x818], ax
        mov    dword ptr [esi], 0x7aeed4
        mov    eax, esi
        pop    esi
        ret    
    }
}
