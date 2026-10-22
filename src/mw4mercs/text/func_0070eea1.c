/*
 * FUN_0070eea1 (extent 0x70eea1-0x70f068) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b2b0;
extern int    g_008aae18;
extern int    g_008aae1c;
extern int    g_008aae20;
extern int    g_008aae28;

__declspec(naked) void FUN_0070eea1(void)
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
        nop    
        nop    
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
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_008aae28]
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [g_0076b2b0]
        push    edi
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x7a1cec
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    0x7a1cec
        push    ebx
        mov    byte ptr [esp + 0x1f], 0
        call    esi
        add    esp, 0xc
        test    eax, eax
        jne    L_ef11
        mov    ebp, dword ptr [g_008aae18]
        or    ecx, 0xffffffff
        mov    edi, 0x7a1cec
        repne scasb
        not    ecx
        dec    ecx
        add    ebx, ecx
        jmp    L_ef7b
L_ef11:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x7a1ce0
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    0x7a1ce0
        push    ebx
        call    esi
        add    esp, 0xc
        test    eax, eax
        jne    L_ef47
        mov    ebp, dword ptr [g_008aae1c]
        or    ecx, 0xffffffff
        mov    edi, 0x7a1ce0
        repne scasb
        not    ecx
        dec    ecx
        add    ebx, ecx
        jmp    L_ef7b
L_ef47:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x7a1cd4
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        push    0x7a1cd4
        push    ebx
        call    esi
        add    esp, 0xc
        test    eax, eax
        jne    L_ef7b
        mov    ebp, dword ptr [g_008aae20]
        or    ecx, 0xffffffff
        mov    edi, 0x7a1cd4
        repne scasb
        not    ecx
        dec    ecx
        add    ebx, ecx
L_ef7b:
        test    ebp, ebp
        je    L_f047
        mov    edi, dword ptr [g_0076b2ac]
L_ef89:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_efd4
        mov    esi, dword ptr [ebp + 4]
        test    esi, esi
        je    L_f011
L_ef98:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_efc8
        mov    ecx, dword ptr [esi + 0x18]
        push    ecx
        push    ebx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_efb7
        mov    ebp, esi
        mov    byte ptr [esp + 0x13], 1
        jmp    L_efb9
L_efb7:
        mov    esi, dword ptr [esi]
L_efb9:
        test    esi, esi
        jne    L_ef98
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_efc8
L_efc5:
        mov    ebp, dword ptr [ebp]
L_efc8:
        test    ebp, ebp
        jne    L_ef89
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        je    L_f047
L_efd4:
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, 3
        ja    L_f047
        jmp    dword ptr [eax*4 + 0x70f068]
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_eff7
        mov    ecx, dword ptr [ebp + 0x18]
        push    1
        push    ecx
        call    eax
        test    eax, eax
        jne    L_f004
L_eff7:
        mov    ebp, dword ptr [ebp + 0x14]
L_effa:
        test    ebp, ebp
        je    L_f047
        call    ebp
        test    al, al
        je    L_f047
L_f004:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        pop    ecx
        ret    8
L_f011:
        mov    edx, dword ptr [ebp + 0x18]
        push    edx
        push    ebx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_efc5
        mov    byte ptr [esp + 0x13], 1
        jmp    L_efc8
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_f039
        mov    edx, dword ptr [ebp + 0x18]
        push    2
        push    edx
        call    eax
        test    eax, eax
        jne    L_f004
L_f039:
        mov    ebp, dword ptr [ebp + 0x10]
        jmp    L_effa
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je    L_f051
        call    eax
L_f047:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    8
L_f051:
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_f047
        mov    ecx, dword ptr [ebp + 0x18]
        push    3
        push    ecx
        call    eax
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
        // jump-table data @ 0x0070F068 (0 relocated pointers)
    }
}
