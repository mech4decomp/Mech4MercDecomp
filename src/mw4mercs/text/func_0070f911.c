/*
 * FUN_0070f911 (extent 0x70f911-0x70f96b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008aaeb8;
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_0070f911(void)
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
        nop    
        nop    
        push    edi
        mov    edi, dword ptr [esp + 8]
        test    edi, edi
        je    L_f950
        push    ebx
        push    esi
L_f92b:
        mov    esi, dword ptr [edi + 4]
        test    esi, esi
        mov    ebx, edi
        je    L_f942
L_f934:
        mov    eax, esi
        mov    esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_f934
L_f942:
        mov    edi, dword ptr [edi]
        push    ebx
        call    FUN_006f4230
        test    edi, edi
        jne    L_f92b
        pop    esi
        pop    ebx
L_f950:
        pop    edi
        ret    4
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
        mov    dword ptr [g_008aaeb8], 0
        ret    
    }
}
