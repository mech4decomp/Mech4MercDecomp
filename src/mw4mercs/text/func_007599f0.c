/*
 * FUN_007599f0 (extent 0x7599f0-0x759a1a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b320;

__declspec(naked) void FUN_007599f0(void)
{
    __asm {
        lea    eax, [ecx + 0xe]
        mov    cl, byte ptr [eax]
        neg    cl
        sbb    ecx, ecx
        and    eax, ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    0x800
        push    eax
        add    ecx, 0xe
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        ret    4
    }
}
