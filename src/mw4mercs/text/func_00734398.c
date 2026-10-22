/*
 * FUN_00734398 (extent 0x734398-0x7343cb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008aa288;
extern void __cdecl FUN_0075b040(void);

__declspec(naked) void FUN_00734398(void)
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
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_43ca
        mov    dl, byte ptr [g_008aa288]
        test    dl, dl
        jne    L_43ca
        mov    edx, 3
        push    0
        push    eax
        mov    dword ptr [ecx + 0xac], edx
        mov    dword ptr [ecx + 0xa8], edx
        call    FUN_0075b040
L_43ca:
        ret    
    }
}
