/*
 * FUN_004ae925 (extent 0x4ae925-0x4aebd0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004ae290(void);
extern void __cdecl FUN_004ae2b0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004ae925(void)
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
        sub    esp, 8
        mov    eax, dword ptr [g_007da920]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        mov    dword ptr [esp + 0x14], edi
        call    FUN_006f4950
        mov    ebx, dword ptr [edi + 8]
        mov    esi, dword ptr [esp + 0x1c]
        lea    ecx, [ebx - 1]
        cmp    esi, ecx
        jne    L_e9f8
        mov    ebp, ebx
        cmp    esi, ebp
        je    L_eb15
        test    esi, esi
        jbe    L_e9ef
        lea    edx, [esi + esi*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        mov    edx, dword ptr [edi + 4]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        mov    dword ptr [esp + 0x10], ebx
        je    L_eaea
        cmp    esi, ebp
        mov    ecx, esi
        jb    L_e994
        mov    ecx, ebp
L_e994:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_e9ce
        lea    eax, [ecx + ecx*2]
        sub    edx, ebx
        lea    eax, [ebx + eax*4]
        mov    dword ptr [esp + 0x1c], edx
        inc    ecx
        jmp    L_e9ae
L_e9aa:
        mov    edx, dword ptr [esp + 0x1c]
L_e9ae:
        add    edx, eax
        mov    ebp, dword ptr [edx]
        mov    ebx, eax
        mov    dword ptr [ebx], ebp
        mov    ebp, dword ptr [edx + 4]
        mov    dword ptr [ebx + 4], ebp
        mov    edx, dword ptr [edx + 8]
        dec    ecx
        sub    eax, 0xc
        test    ecx, ecx
        mov    dword ptr [ebx + 8], edx
        ja    L_e9aa
        mov    ebx, dword ptr [esp + 0x10]
L_e9ce:
        mov    eax, dword ptr [edi + 4]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + 4], ebx
        mov    dword ptr [edi + 8], esi
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    4
L_e9ef:
        mov    eax, dword ptr [edi + 4]
        push    eax
        jmp    L_eb03
L_e9f8:
        mov    edx, dword ptr [edi + 4]
        lea    ecx, [esi + esi*2]
        fld    dword ptr [edx + ecx*4 + 0xc]
        lea    ecx, [edx + ecx*4]
        fsub    dword ptr [ecx]
        lea    eax, [esi + 1]
        cmp    eax, ebx
        fmul    dword ptr [ecx + 4]
        fadd    dword ptr [ecx + 8]
        fstp    dword ptr [esp + 0x14]
        jge    L_ea46
        lea    esi, [eax + eax*2]
        lea    edx, [edx + esi*4]
        mov    esi, ebx
        lea    edi, [edx - 0xc]
        sub    esi, eax
L_ea25:
        mov    eax, edx
        mov    ebp, dword ptr [eax]
        mov    ebx, edi
        mov    dword ptr [ebx], ebp
        mov    ebp, dword ptr [eax + 4]
        mov    dword ptr [ebx + 4], ebp
        mov    eax, dword ptr [eax + 8]
        add    edx, 0xc
        add    edi, 0xc
        dec    esi
        mov    dword ptr [ebx + 8], eax
        jne    L_ea25
        mov    edi, dword ptr [esp + 0x10]
L_ea46:
        mov    edx, dword ptr [ecx - 0xc]
        fld    dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x14]
        sub    ecx, 0xc
        mov    dword ptr [esp + 0x1c], edx
        fsub    dword ptr [esp + 0x1c]
        mov    edx, dword ptr [ecx + 8]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    edx
        push    eax
        call    FUN_004ae2b0
        mov    eax, dword ptr [edi + 8]
        lea    esi, [eax - 1]
        mov    ebp, eax
        cmp    esi, ebp
        mov    dword ptr [esp + 0x1c], esi
        je    L_eb15
        test    esi, esi
        jbe    L_eaff
        lea    ecx, [esi + esi*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        mov    edx, dword ptr [edi + 4]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        mov    dword ptr [esp + 0x14], ebx
        je    L_eaea
        cmp    esi, ebp
        mov    ecx, esi
        jb    L_eaa9
        mov    ecx, ebp
L_eaa9:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_eade
        lea    eax, [ecx + ecx*2]
        sub    edx, ebx
        lea    eax, [ebx + eax*4]
        inc    ecx
L_eab9:
        lea    esi, [edx + eax]
        mov    ebp, dword ptr [esi]
        mov    ebx, eax
        mov    dword ptr [ebx], ebp
        mov    ebp, dword ptr [esi + 4]
        mov    dword ptr [ebx + 4], ebp
        mov    esi, dword ptr [esi + 8]
        dec    ecx
        sub    eax, 0xc
        test    ecx, ecx
        mov    dword ptr [ebx + 8], esi
        ja    L_eab9
        mov    esi, dword ptr [esp + 0x1c]
        mov    ebx, dword ptr [esp + 0x14]
L_eade:
        mov    eax, dword ptr [edi + 4]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_eaea:
        mov    dword ptr [edi + 4], ebx
        mov    dword ptr [edi + 8], esi
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    4
L_eaff:
        mov    ecx, dword ptr [edi + 4]
        push    ecx
L_eb03:
        call    FUN_004084e0
        mov    dword ptr [edi + 4], 0
        add    esp, 4
        mov    dword ptr [edi + 8], esi
L_eb15:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
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
        push    ecx
        mov    eax, dword ptr [g_007da920]
        push    ebx
        push    edi
        mov    edi, ecx
        push    eax
        mov    dword ptr [esp + 0xc], edi
        call    FUN_006f4950
        mov    ebx, dword ptr [edi + 8]
        cmp    ebx, 1
        je    L_ebb6
        push    esi
        push    0xc
        call    FUN_004084d0
        mov    edx, dword ptr [edi + 4]
        add    esp, 4
        test    edx, edx
        mov    esi, eax
        je    L_ebab
        cmp    ebx, 1
        mov    ecx, 1
        ja    L_eb6c
        mov    ecx, ebx
L_eb6c:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_eb9f
        lea    eax, [ecx + ecx*2]
        sub    edx, esi
        push    ebp
        lea    eax, [esi + eax*4]
        inc    ecx
L_eb7d:
        lea    edi, [edx + eax]
        mov    ebp, dword ptr [edi]
        mov    ebx, eax
        mov    dword ptr [ebx], ebp
        mov    ebp, dword ptr [edi + 4]
        mov    dword ptr [ebx + 4], ebp
        mov    edi, dword ptr [edi + 8]
        dec    ecx
        sub    eax, 0xc
        test    ecx, ecx
        mov    dword ptr [ebx + 8], edi
        ja    L_eb7d
        mov    edi, dword ptr [esp + 0x10]
        pop    ebp
L_eb9f:
        mov    eax, dword ptr [edi + 4]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ebab:
        mov    dword ptr [edi + 4], esi
        mov    dword ptr [edi + 8], 1
        pop    esi
L_ebb6:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [edi + 4]
        push    0
        call    FUN_004ae290
        call    FUN_006f49a0
        pop    edi
        pop    ebx
        pop    ecx
        ret    4
    }
}
