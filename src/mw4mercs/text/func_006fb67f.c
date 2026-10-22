/*
 * FUN_006fb67f (extent 0x6fb67f-0x6fb6d0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b180;
extern int    g_0076b188;

__declspec(naked) void FUN_006fb67f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        call    dword ptr [g_0076b188]
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0
        push    0
        lea    eax, [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        lea    edx, [esp + 0x14]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        push    edx
        call    dword ptr [g_0076b180]
        test    eax, eax
        setne    al
        ret    0xc
    }
}
