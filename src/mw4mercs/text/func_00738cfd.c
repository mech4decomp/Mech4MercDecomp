/*
 * FUN_00738cfd (extent 0x738cfd-0x738db1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_008aaca0;
extern int    g_008aaca4;
extern int    g_008aacac;

__declspec(naked) void FUN_00738cfd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    dword ptr [ecx], 0x7a70fc
        mov    ecx, dword ptr [ecx + 0x50]
        test    ecx, ecx
        je    L_8d14
        push    ecx
        call    dword ptr [g_0076b0ec]
L_8d14:
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
        sub    esp, 0x10
        push    ebx
        push    esi
        push    edi
        push    0x11
        push    2
        push    2
        mov    esi, ecx
        xor    ebx, ebx
        call    dword ptr [g_008aaca0]
        mov    edi, eax
        cmp    edi, -1
        mov    dword ptr [esi + 0x20], edi
        je    L_8da8
        push    0x7080
        mov    dword ptr [esi + 0x24], 1
        call    dword ptr [g_008aaca4]
        mov    word ptr [esp + 0xe], ax
        push    0x10
        lea    eax, [esp + 0x10]
        push    eax
        push    edi
        mov    word ptr [esp + 0x18], 2
        mov    dword ptr [esp + 0x1c], ebx
        call    dword ptr [g_008aacac]
        cmp    eax, -1
        jne    L_8d9c
L_8d75:
        cmp    dword ptr [esi + 0x24], ebx
        je    L_8da8
        push    ebx
        mov    dword ptr [esi + 0x24], ebx
        call    dword ptr [g_008aaca4]
        push    0x10
        lea    ecx, [esp + 0x10]
        push    ecx
        push    edi
        mov    word ptr [esp + 0x1a], ax
        call    dword ptr [g_008aacac]
        cmp    eax, -1
        je    L_8d75
L_8d9c:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        add    esp, 0x10
        ret    
L_8da8:
        pop    edi
        pop    esi
        mov    eax, ebx
        pop    ebx
        add    esp, 0x10
        ret    
    }
}
