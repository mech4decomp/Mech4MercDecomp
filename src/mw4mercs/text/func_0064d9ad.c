/*
 * FUN_0064d9ad (extent 0x64d9ad-0x64db38) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9b4;
extern int    g_0080d9bc;
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064d7e0(void);

__declspec(naked) void FUN_0064d9ad(void)
{
    __asm {
        /* jump-table + data table bytes (0x64D9AD-0x64D9EC), emitted raw */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x97
        __emit 0xD8
        __emit 0x64
        __emit 0x00
        __emit 0xDB
        __emit 0xD8
        __emit 0x64
        __emit 0x00
        __emit 0x5B
        __emit 0xD9
        __emit 0x64
        __emit 0x00
        __emit 0x9B
        __emit 0xD9
        __emit 0x64
        __emit 0x00
        __emit 0x00
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x01
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x02
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x03
        __emit 0x02
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805908]
        push    ebx
        push    esi
        mov    esi, 9
        cmp    eax, esi
        push    edi
        je    L_da06
        cmp    eax, 8
        jne    L_da1c
L_da06:
        mov    esi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
L_da1c:
        call    FUN_0064d7e0
        cmp    esi, 8
        jne    L_da42
        cmp    eax, dword ptr [g_0080d9bc]
        mov    ecx, dword ptr [g_0080592c]
        jne    L_da3c
        mov    edx, dword ptr [ecx]
        neg    edx
        mov    dword ptr [ecx], edx
        jmp    L_da42
L_da3c:
        fld    dword ptr [ecx]
        fchs    
        fstp    dword ptr [ecx]
L_da42:
        mov    esi, dword ptr [g_00805908]
        cmp    esi, 9
        je    L_da5b
        cmp    esi, 8
        je    L_da5b
        cmp    esi, 0x33
        jne    L_db34
L_da5b:
        push    eax
        call    FUN_0064c950
        mov    edi, eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d7e0
        push    eax
        call    FUN_0064c950
        mov    edx, dword ptr [g_0080592c]
        add    esp, 8
        cmp    esi, 0x33
        lea    ecx, [edx - 4]
        jne    L_dac2
        cmp    dword ptr [ecx], 0
        jne    L_daae
        cmp    dword ptr [edx], 0
        jne    L_daae
        xor    eax, eax
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_0080592c], ecx
        jmp    L_da42
L_daae:
        mov    eax, 1
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_0080592c], ecx
        jmp    L_da42
L_dac2:
        mov    ebx, dword ptr [g_0080d9bc]
        cmp    edi, ebx
        jne    L_dafb
        cmp    eax, ebx
        jne    L_daf7
        cmp    esi, 9
        jne    L_dae6
        mov    edx, dword ptr [edx]
        add    dword ptr [ecx], edx
        mov    eax, ebx
        mov    dword ptr [g_0080592c], ecx
        jmp    L_da42
L_dae6:
        mov    eax, dword ptr [edx]
        sub    dword ptr [ecx], eax
        mov    eax, ebx
        mov    dword ptr [g_0080592c], ecx
        jmp    L_da42
L_daf7:
        fild    dword ptr [ecx]
        fstp    dword ptr [ecx]
L_dafb:
        cmp    eax, ebx
        jne    L_db03
        fild    dword ptr [edx]
        fstp    dword ptr [edx]
L_db03:
        cmp    esi, 9
        jne    L_db1e
        fld    dword ptr [edx]
        mov    eax, dword ptr [g_0080d9b4]
        fadd    dword ptr [ecx]
        mov    dword ptr [g_0080592c], ecx
        fstp    dword ptr [ecx]
        jmp    L_da42
L_db1e:
        fld    dword ptr [ecx]
        mov    eax, dword ptr [g_0080d9b4]
        fsub    dword ptr [edx]
        mov    dword ptr [g_0080592c], ecx
        fstp    dword ptr [ecx]
        jmp    L_da42
L_db34:
        pop    edi
        pop    esi
        pop    ebx
        ret    
    }
}
