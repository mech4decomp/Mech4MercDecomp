/*
 * FUN_00760e86 (extent 0x760e86-0x760efe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00760e50(void);

__declspec(naked) void FUN_00760e86(void)
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        xor    ebx, ebx
        push    edi
        mov    dword ptr [esp + 0x10], 0
        xor    esi, esi
        mov    ebp, 0x40
L_0ea6:
        cmp    esi, ebx
        jb    L_0ece
        test    ebp, ebp
        jbe    L_0ec8
        mov    eax, dword ptr [esp + 0x18]
        lea    edi, [ebx + eax]
L_0eb5:
        push    ebp
        push    edi
        call    FUN_00760e50
        add    esp, 8
        test    ax, ax
        jne    L_0ec8
        shr    ebp, 1
        jne    L_0eb5
L_0ec8:
        add    ebx, ebp
        cmp    esi, ebx
        jae    L_0ee7
L_0ece:
        mov    ecx, dword ptr [esp + 0x18]
        cmp    byte ptr [esi + ecx], 0
        je    L_0edf
        inc    esi
        cmp    esi, ebx
        jb    L_0ece
        jmp    L_0ee7
L_0edf:
        mov    dword ptr [esp + 0x10], 1
L_0ee7:
        test    ebp, ebp
        jbe    L_0ef3
        cmp    word ptr [esp + 0x10], 0
        je    L_0ea6
L_0ef3:
        mov    ax, word ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
    }
}
