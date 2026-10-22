/*
 * FUN_004177ab (extent 0x4177ab-0x417801) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c1c;
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00417470(void);

__declspec(naked) void FUN_004177ab(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        cmp    dword ptr [esp + 4], 1
        jne    L_77d4
        mov    eax, dword ptr [esp + 8]
        cmp    eax, dword ptr [ecx + 0x10]
        jne    L_77d4
        mov    al, byte ptr [ecx + 0x14]
        test    al, al
        je    L_77cf
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x10]
        ret    8
L_77cf:
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
L_77d4:
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
        push    esi
        mov    esi, ecx
        call    FUN_00417470
        test    byte ptr [esp + 8], 1
        je    L_77fb
        mov    ecx, dword ptr [g_007b8c1c]
        push    esi
        call    FUN_00416130
L_77fb:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
