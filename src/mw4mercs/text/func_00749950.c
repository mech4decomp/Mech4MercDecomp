/*
 * FUN_00749950 (extent 0x749950-0x7499b2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_00858990;
extern char   g_008b79ec;
extern void __cdecl FUN_0075b040(void);

__declspec(naked) void FUN_00749950(void)
{
    __asm {
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
        push    esi
        mov    esi, ecx
        je    L_99b0
        mov    al, byte ptr [g_00858990]
        test    al, al
        jne    L_99b0
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_99b0
        cmp    dword ptr [esi + 0xc], 2
        je    L_99b0
        push    0
        push    eax
        call    FUN_0075b040
        mov    dword ptr [esi + 0xc], 2
L_99b0:
        pop    esi
        ret    
    }
}
