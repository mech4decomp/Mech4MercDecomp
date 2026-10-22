/*
 * FUN_00492740 (extent 0x492740-0x49279e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00492750(void);

__declspec(naked) void FUN_00492740(void)
{
    __asm {
        mov    eax, ecx
        mov    dword ptr [eax], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        test    esi, esi
        mov    ebx, ecx
        je    L_2799
        push    edi
L_275d:
        mov    eax, dword ptr [esi + 0xc]
        push    eax
        mov    ecx, ebx
        call    FUN_00492750
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov    edi, dword ptr [esi + 8]
        je    L_2785
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2785
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2785:
        test    esi, esi
        je    L_2792
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_2792:
        test    edi, edi
        mov    esi, edi
        jne    L_275d
        pop    edi
L_2799:
        pop    esi
        pop    ebx
        ret    4
    }
}
