/*
 * FUN_0070d362 (extent 0x70d362-0x70d4f6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b004;
extern int    g_0076b024;
extern int    g_0076b028;
extern int    g_0076b02c;
extern int    g_0076b0e4;
extern int    g_0076b0e8;
extern int    g_0076b0ec;
extern int    g_0076b160;
extern int    g_0076b1f8;
extern int    g_0076b214;
extern int    g_0076b23c;
extern char   g_007b7018;

__declspec(naked) void FUN_0070d362(void)
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
        nop    
        nop    
        push    ecx
        push    esi
        push    0
        push    0
        push    4
        push    0
        push    0
        push    0x40000000
        push    0x7a1aec
        call    dword ptr [g_0076b0e8]
        mov    esi, eax
        cmp    esi, -1
        je    L_d3da
        push    edi
        push    2
        push    0
        push    0
        push    esi
        call    dword ptr [g_0076b160]
        push    0
        lea    eax, [esp + 0xc]
        push    eax
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x85a274
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    0x85a274
        push    esi
        call    dword ptr [g_0076b0e4]
        push    esi
        call    dword ptr [g_0076b0ec]
        pop    edi
        mov    byte ptr [g_007b7018], 1
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    4
L_d3da:
        mov    byte ptr [g_007b7018], 1
        xor    eax, eax
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x20c
        push    esi
        lea    eax, [esp + 4]
        push    eax
        push    1
        push    8
        mov    dword ptr [esp + 0x14], 0x200
        call    dword ptr [g_0076b214]
        push    eax
        call    dword ptr [g_0076b004]
        test    eax, eax
        mov    esi, dword ptr [g_0076b1f8]
        jne    L_d45a
        call    esi
        cmp    eax, 0x3f0
        jne    L_d4a3
        lea    ecx, [esp + 4]
        push    ecx
        push    8
        call    dword ptr [g_0076b23c]
        push    eax
        call    dword ptr [g_0076b02c]
        test    eax, eax
        jne    L_d45a
        pop    esi
        add    esp, 0x20c
        ret    0x10
L_d45a:
        mov    eax, dword ptr [esp + 8]
        lea    edx, [esp + 8]
        push    edx
        mov    edx, dword ptr [esp + 8]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        push    1
        push    edx
        call    dword ptr [g_0076b028]
        test    eax, eax
        jne    L_d4af
        call    esi
        cmp    eax, 0x7a
        jne    L_d498
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b0ec]
        xor    eax, eax
        pop    esi
        add    esp, 0x20c
        ret    0x10
L_d498:
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        call    dword ptr [g_0076b0ec]
L_d4a3:
        xor    eax, eax
        pop    esi
        add    esp, 0x20c
        ret    0x10
L_d4af:
        mov    edx, dword ptr [esp + 4]
        push    edx
        call    dword ptr [g_0076b0ec]
        mov    ecx, dword ptr [esp + 0x220]
        mov    edx, dword ptr [esp + 0x21c]
        lea    eax, [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0x21c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x21c]
        push    edx
        mov    edx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edx
        push    0
        call    dword ptr [g_0076b024]
        pop    esi
        add    esp, 0x20c
        ret    0x10
    }
}
