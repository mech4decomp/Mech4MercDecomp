/*
 * FUN_00760e90 (extent 0x760e90-0x760f8b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00760e50(void);

__declspec(naked) void FUN_00760e90(void)
{
    __asm {
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
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        xor    esi, esi
        xor    ecx, ecx
        push    edi
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x10], ecx
        mov    ebp, 0x80
L_0f1c:
        lea    ebx, [ecx + ecx]
        cmp    ebx, esi
        jb    L_0f4b
        test    ebp, ebp
        jbe    L_0f45
        mov    eax, dword ptr [esp + 0x1c]
        lea    edi, [esi + eax]
L_0f2e:
        push    ebp
        push    edi
        call    FUN_00760e50
        add    esp, 8
        test    ax, ax
        jne    L_0f41
        shr    ebp, 1
        jne    L_0f2e
L_0f41:
        mov    ecx, dword ptr [esp + 0x10]
L_0f45:
        add    esi, ebp
        cmp    ebx, esi
        jae    L_0f72
L_0f4b:
        mov    eax, ebx
L_0f4d:
        mov    edx, dword ptr [esp + 0x1c]
        cmp    word ptr [edx + eax], 0
        je    L_0f66
        add    eax, 2
        inc    ecx
        cmp    eax, esi
        jb    L_0f4d
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_0f72
L_0f66:
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], 1
L_0f72:
        test    ebp, ebp
        jbe    L_0f7e
        cmp    word ptr [esp + 0x14], 0
        je    L_0f1c
L_0f7e:
        mov    ax, word ptr [esp + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    
    }
}
