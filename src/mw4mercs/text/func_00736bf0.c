/*
 * FUN_00736bf0 (extent 0x736bf0-0x736cca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b214;
extern int    g_0076b23c;
extern int    g_0076b4f8;
extern int    g_008aa600;
extern int    g_008aa604;
extern int    g_008aa608;
extern int    g_008aa60c;
extern int    g_008aa9fc;

__declspec(naked) void FUN_00736bf0(void)
{
    __asm {
        mov    eax, dword ptr [g_008aa9fc]
        test    eax, eax
        push    esi
        je    L_6c44
        mov    eax, dword ptr [g_008aa604]
        mov    ecx, dword ptr [g_008aa60c]
        mov    esi, dword ptr [esp + 8]
        push    0
        push    eax
        push    ecx
        push    0x736b40
        push    0
        push    esi
        call    dword ptr [g_0076b214]
        push    eax
        call    dword ptr [g_0076b23c]
        push    eax
        push    0x14c
        call    dword ptr [g_008aa608]
        test    eax, eax
        je    L_6c44
        mov    ecx, dword ptr [esi]
        cmp    ecx, 0x400000
        sbb    eax, eax
        not    eax
        and    eax, ecx
        pop    esi
        ret    4
L_6c44:
        xor    eax, eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008aa9fc]
        push    ebx
        push    ebp
        push    esi
        xor    esi, esi
        cmp    eax, esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    dword ptr [edi], esi
        mov    dword ptr [edi], 0x14
        mov    dword ptr [esp + 0x14], esi
        je    L_6c9a
        mov    ebx, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [g_0076b23c]
L_6c79:
        push    edi
        lea    eax, [esp + 0x18]
        mov    ecx, ebx
        push    eax
        sub    ecx, esi
        push    ecx
        call    ebp
        push    eax
        call    dword ptr [g_008aa600]
        test    eax, eax
        jne    L_6ca6
        inc    esi
        cmp    esi, 0x400
        jl    L_6c79
L_6c9a:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0x76b768
        pop    ebx
        ret    0xc
L_6ca6:
        mov    edx, dword ptr [edi + 8]
        mov    eax, dword ptr [edi + 0xc]
        mov    esi, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    0x7a68ec
        push    esi
        call    dword ptr [g_0076b4f8]
        add    esp, 0x10
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
    }
}
