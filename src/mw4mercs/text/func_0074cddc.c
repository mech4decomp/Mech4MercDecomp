/*
 * FUN_0074cddc (extent 0x74cddc-0x74cfc8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern void __cdecl FUN_0074cd70(void);
extern void __cdecl FUN_0074cda0(void);

__declspec(naked) void FUN_0074cddc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    eax, dword ptr [eax]
        test    eax, eax
        push    esi
        jne    L_cfa3
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        cmp    eax, 0x104
        ja    L_cee6
        je    L_cedd
        cmp    eax, 0x31
        ja    L_ceb1
        je    L_cea8
        add    eax, -3
        cmp    eax, 0x1e
        ja    L_cf9a
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x74cfdc]
        jmp    dword ptr [ecx*4 + 0x74cfc8]
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi + 8]
        push    edx
        push    eax
        push    0x7abac0
        jmp    L_cfb0
        cmp    dword ptr [esi + 4], 1
        jne    L_ce5a
        mov    ecx, dword ptr [esi + 8]
        mov    edx, dword ptr [esi + 0x20]
        push    ecx
        push    edx
        push    0x7abaa4
        jmp    L_cfb0
L_ce5a:
        mov    eax, dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 0x20]
        push    eax
        push    ecx
        push    0x7aba88
        jmp    L_cfb0
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi + 8]
        push    edx
        push    eax
        push    0x7aba64
        jmp    L_cfb0
        cmp    dword ptr [esi + 4], 1
        jne    L_ce96
        mov    ecx, dword ptr [esi + 8]
        mov    edx, dword ptr [esi + 0x24]
        push    ecx
        push    edx
        push    0x7aba44
        jmp    L_cfb0
L_ce96:
        mov    eax, dword ptr [esi + 8]
        mov    ecx, dword ptr [esi + 0x24]
        push    eax
        push    ecx
        push    0x7aba28
        jmp    L_cfb0
L_cea8:
        mov    eax, 0x7aba18
        pop    esi
        ret    0xc
L_ceb1:
        sub    eax, 0x101
        je    L_ced4
        dec    eax
        je    L_cecb
        dec    eax
        jne    L_cf9a
        mov    eax, 0x7ab9fc
        pop    esi
        ret    0xc
L_cecb:
        mov    eax, 0x7ab9e0
        pop    esi
        ret    0xc
L_ced4:
        mov    eax, 0x7ab9d4
        pop    esi
        ret    0xc
L_cedd:
        mov    eax, 0x7ab9bc
        pop    esi
        ret    0xc
L_cee6:
        add    eax, 0xfffffefb
        cmp    eax, 8
        ja    L_cf9a
        jmp    dword ptr [eax*4 + 0x74cffc]
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi + 8]
        push    edx
        push    eax
        push    0x7ab998
        jmp    L_cfb0
        mov    ecx, dword ptr [esi + 0x14]
        mov    edx, dword ptr [ecx + 8]
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esi + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_0074cda0
        mov    edx, dword ptr [esi + 8]
        push    eax
        push    edx
        call    FUN_0074cd70
        push    eax
        push    0x7ab97c
        push    0x8ba814
        call    dword ptr [g_0076b420]
        add    esp, 0x14
        mov    eax, 0x8ba814
        pop    esi
        ret    0xc
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 8]
        push    eax
        push    ecx
        push    0x7ab954
        jmp    L_cfb0
        mov    eax, 0x7ab944
        pop    esi
        ret    0xc
        mov    eax, 0x7ab934
        pop    esi
        ret    0xc
        mov    edx, dword ptr [esi + 8]
        mov    eax, dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 4]
        push    edx
        push    eax
        push    ecx
        push    0x7ab8fc
        push    0x8ba814
        call    dword ptr [g_0076b420]
        add    esp, 0x14
        mov    eax, 0x8ba814
        pop    esi
        ret    0xc
        mov    eax, 0x7ab8ec
        pop    esi
        ret    0xc
L_cf9a:
        mov    eax, 0x79e7f8
        pop    esi
        ret    0xc
L_cfa3:
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [edx]
        push    ecx
        push    eax
        push    0x7ab8c8
L_cfb0:
        push    0x8ba814
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        mov    eax, 0x8ba814
        pop    esi
        ret    0xc
        nop    
        // jump-table data @ 0x0074CFC8 (13 relocated pointers)
        __emit 0x42
        __emit 0xCE
        __emit 0x74
        __emit 0x00
        __emit 0x7E
        __emit 0xCE
        __emit 0x74
        __emit 0x00
        __emit 0x30
        __emit 0xCE
        __emit 0x74
        __emit 0x00
        __emit 0x6C
        __emit 0xCE
        __emit 0x74
        __emit 0x00
        __emit 0x9A
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x00
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x02
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x03
        __emit 0x90
        // jump-table data @ 0x0074CFFC (9 relocated pointers)
        __emit 0xFB
        __emit 0xCE
        __emit 0x74
        __emit 0x00
        __emit 0x48
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x57
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x91
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x0D
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x69
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x9A
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x9A
        __emit 0xCF
        __emit 0x74
        __emit 0x00
        __emit 0x60
        __emit 0xCF
        __emit 0x74
        __emit 0x00
    }
}
