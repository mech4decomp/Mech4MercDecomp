/*
 * FUN_0064c714 (extent 0x64c714-0x64c932) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_00805928;
extern int    g_0080593c;
extern int    g_00805940;
extern int    g_0080d970;
extern int    g_0080d97c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00562f10(void);

__declspec(naked) void FUN_0064c714(void)
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        push    4
        push    0x7f2998
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        push    0x80d97c
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esi]
        push    4
        push    0x80d96c
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [g_0080d97c]
        xor    ebx, ebx
        cmp    eax, ebx
        jle    L_c799
        push    ebp
        mov    dword ptr [esp + 0x14], ebx
L_c761:
        mov    ecx, dword ptr [g_0080d970]
        mov    edx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [edx + ecx]
        mov    ebp, dword ptr [esi]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    edx
        mov    ecx, esi
        call    dword ptr [ebp + 0x24]
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [g_0080d97c]
        inc    ebx
        add    ecx, 0x28
        cmp    ebx, eax
        mov    dword ptr [esp + 0x14], ecx
        jl    L_c761
        pop    ebp
L_c799:
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0x3e7
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [g_00805940]
        xor    edi, edi
        test    eax, eax
        jle    L_c7e9
L_c7ba:
        mov    eax, dword ptr [g_0080593c]
        mov    edx, dword ptr [g_00805928]
        mov    eax, dword ptr [eax + edi*4]
        test    eax, eax
        lea    ecx, [edx + edi*4]
        mov    edx, dword ptr [esi]
        jle    L_c7d7
        push    eax
        mov    eax, dword ptr [ecx]
        push    eax
        jmp    L_c7da
L_c7d7:
        push    4
        push    ecx
L_c7da:
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [g_00805940]
        inc    edi
        cmp    edi, eax
        jl    L_c7ba
L_c7e9:
        pop    edi
        pop    esi
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0x510
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x51c]
        mov    eax, dword ptr [esi]
        push    edi
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0xc]
        mov    ebx, dword ptr [g_0076b420]
        xor    edi, edi
        test    eax, eax
        jle    L_c879
L_c83a:
        mov    edx, dword ptr [esi]
        push    0
        push    0x400
        lea    eax, [esp + 0x124]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        test    al, al
        jne    L_c870
        push    edi
        lea    ecx, [esp + 0x20]
        push    0x792ca0
        push    ecx
        call    ebx
        lea    edx, [esp + 0x28]
        push    edx
        push    0
        call    FUN_00562f10
        add    esp, 0x14
L_c870:
        mov    eax, dword ptr [esp + 0xc]
        inc    edi
        cmp    edi, eax
        jl    L_c83a
L_c879:
        mov    ecx, dword ptr [esp + 0x10]
        sub    ecx, eax
        xor    edi, edi
        test    ecx, ecx
        jle    L_c8ca
L_c885:
        mov    edx, dword ptr [esi]
        push    0
        push    0x400
        lea    eax, [esp + 0x124]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        test    al, al
        jne    L_c8bb
        push    edi
        lea    ecx, [esp + 0x20]
        push    0x792ca0
        push    ecx
        call    ebx
        lea    edx, [esp + 0x28]
        push    edx
        push    0
        call    FUN_00562f10
        add    esp, 0x14
L_c8bb:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        inc    edi
        sub    eax, edx
        cmp    edi, eax
        jl    L_c885
L_c8ca:
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [g_00805940]
        xor    edi, edi
        test    eax, eax
        jle    L_c913
L_c8e3:
        mov    edx, dword ptr [g_0080593c]
        mov    eax, dword ptr [edx + edi*4]
        test    eax, eax
        mov    ecx, dword ptr [g_00805928]
        mov    edx, dword ptr [esi]
        lea    ecx, [ecx + edi*4]
        jle    L_c901
        push    eax
        mov    eax, dword ptr [ecx]
        push    eax
        jmp    L_c904
L_c901:
        push    4
        push    ecx
L_c904:
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [g_00805940]
        inc    edi
        cmp    edi, eax
        jl    L_c8e3
L_c913:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x510
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_c92f
        push    eax
        call    FUN_004084e0
        pop    ecx
L_c92f:
        ret    8
    }
}
