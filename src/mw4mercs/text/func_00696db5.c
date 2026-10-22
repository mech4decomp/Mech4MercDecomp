/*
 * FUN_00696db5 (extent 0x696db5-0x696e42) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00694ce0(void);

__declspec(naked) void FUN_00696db5(void)
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
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_6e0b
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax*8]
        sub    ecx, eax
        dec    eax
        lea    esi, [esi + ecx*8]
        js    L_6df5
        push    edi
        lea    edi, [eax + 1]
L_6de7:
        sub    esi, 0x38
        mov    ecx, esi
        call    FUN_00694ce0
        dec    edi
        jne    L_6de7
        pop    edi
L_6df5:
        test    bl, 1
        je    L_6e03
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_6e03:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_6e0b:
        mov    ecx, esi
        call    FUN_00694ce0
        test    bl, 1
        je    L_6e20
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6e20:
        mov    eax, esi
        pop    esi
        pop    ebx
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        and    edx, 0xfffffffe
        mov    dword ptr [ecx], edx
        ret    4
    }
}
