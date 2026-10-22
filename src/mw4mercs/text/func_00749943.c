/*
 * FUN_00749943 (extent 0x749943-0x749978) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_00858990;
extern char   g_008b79ec;
extern void __cdecl FUN_0075b040(void);

__declspec(naked) void FUN_00749943(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008b79ec]
        test    al, al
        je    L_9977
        mov    al, byte ptr [g_00858990]
        test    al, al
        jne    L_9977
        mov    eax, dword ptr [ecx]
        test    eax, eax
        je    L_9977
        push    0
        push    eax
        mov    dword ptr [ecx + 0xc], 4
        call    FUN_0075b040
L_9977:
        ret    
    }
}
