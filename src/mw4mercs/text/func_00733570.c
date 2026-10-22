/*
 * FUN_00733570 (extent 0x733570-0x7335f0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00857f38;
extern char   g_008aa280;
extern char   g_008aa288;
extern void __cdecl FUN_007343d0(void);
extern void __cdecl FUN_00734410(void);

__declspec(naked) void FUN_00733570(void)
{
    __asm {
        mov    al, byte ptr [g_008aa288]
        test    al, al
        jne    L_35b3
        push    esi
        mov    esi, dword ptr [g_00857f38]
L_3580:
        test    esi, esi
        mov    eax, esi
        je    L_35ab
        mov    ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_35ab
        mov    eax, dword ptr [ecx + 0xa8]
        test    eax, eax
        je    L_35a4
        cmp    eax, 1
        je    L_35a4
        cmp    eax, 2
        jne    L_3580
L_35a4:
        call    FUN_007343d0
        jmp    L_3580
L_35ab:
        mov    byte ptr [g_008aa280], 1
        pop    esi
L_35b3:
        ret    
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
        mov    al, byte ptr [g_008aa288]
        test    al, al
        jne    L_35ef
        push    esi
        mov    esi, dword ptr [g_00857f38]
L_35d0:
        test    esi, esi
        mov    eax, esi
        je    L_35e7
        mov    ecx, dword ptr [eax + 0xc]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_35e7
        call    FUN_00734410
        jmp    L_35d0
L_35e7:
        mov    byte ptr [g_008aa280], 0
        pop    esi
L_35ef:
        ret    
    }
}
