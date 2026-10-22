/*
 * FUN_006d2748 (extent 0x6d2748-0x6d27cf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006d2748(void)
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
        nop    
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_27ab
        mov    eax, dword ptr [esi - 4]
        push    edi
        lea    edi, [esi - 4]
        lea    esi, [esi + eax*8]
        dec    eax
        js    L_2795
        push    ebp
        lea    ebp, [eax + 1]
L_277e:
        mov    eax, dword ptr [esi - 8]
        sub    esi, 8
        test    eax, eax
        je    L_2791
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2791:
        dec    ebp
        jne    L_277e
        pop    ebp
L_2795:
        test    bl, 1
        je    L_27a3
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_27a3:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_27ab:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_27ba
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_27ba:
        test    bl, 1
        je    L_27c8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_27c8:
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    4
    }
}
