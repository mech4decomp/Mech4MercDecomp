/*
 * FUN_00709c3b (extent 0x709c3b-0x709c94) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00858ac0;
extern int    g_00859ae8;
extern char   g_00859af5;
extern void __cdecl FUN_007098a0(void);

__declspec(naked) void FUN_00709c3b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_00858ac0], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    cl, byte ptr [g_00859af5]
        xor    eax, eax
        test    cl, cl
        sete    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_00859ae8]
        mov    eax, dword ptr [esp + 4]
        inc    edx
        push    eax
        mov    dword ptr [g_00859ae8], edx
        call    FUN_007098a0
        mov    edx, dword ptr [g_00859ae8]
        mov    ecx, dword ptr [g_00858ac0]
        dec    edx
        xor    eax, eax
        test    ecx, ecx
        mov    dword ptr [g_00859ae8], edx
        setne    al
        ret    4
    }
}
