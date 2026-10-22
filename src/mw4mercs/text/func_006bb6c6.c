/*
 * FUN_006bb6c6 (extent 0x6bb6c6-0x6bb9a2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007b60a4;
extern int    g_0082e1d4;
extern int    g_0082e2a8;
extern int    g_0082e2ac;
extern int    g_0082e2b0;
extern int    g_0082e2b4;
extern int    g_0082e2b8;
extern int    g_0082e2bc;
extern int    g_0082e2c0;
extern char   g_0082e2d8;
extern char   g_0082e2d9;
extern int    g_0082e2dc;
extern char   g_0082e2e0;
extern int    g_00858950;
extern int    g_00858a30;

__declspec(naked) void FUN_006bb6c6(void)
{
    __asm {
        /* __emit: jump-table DATA of preceding function (reloc dwords),
           mis-decoded as code by gen_bigfunc; emit raw bytes */
        __emit 0x8B
        __emit 0xFF
        __emit 0x0F
        __emit 0xB6
        __emit 0x6B
        __emit 0x00
        __emit 0x0F
        __emit 0xB6
        __emit 0x6B
        __emit 0x00
        __emit 0x43
        __emit 0xB2
        __emit 0x6B
        __emit 0x00
        __emit 0x0F
        __emit 0xB6
        __emit 0x6B
        __emit 0x00
        __emit 0x4A
        __emit 0xB2
        __emit 0x6B
        __emit 0x00
        __emit 0x05
        __emit 0xB2
        __emit 0x6B
        __emit 0x00
        __emit 0x5B
        __emit 0xB2
        __emit 0x6B
        __emit 0x00
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
        mov    ecx, dword ptr [g_0082e2a8]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_0082e2a8]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete    al
        cmp    eax, ecx
        mov    dword ptr [g_0082e2a8], eax
        je    L_b736
        mov    dword ptr [g_0082e2ac], ecx
        mov    dword ptr [g_0082e2b4], ecx
        mov    dword ptr [g_0082e2b0], ecx
        mov    dword ptr [g_0082e2b8], ecx
        mov    dword ptr [g_0082e2bc], ecx
L_b736:
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
        mov    ecx, dword ptr [g_0082e2ac]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_0082e2ac]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete    al
        cmp    eax, ecx
        mov    dword ptr [g_0082e2ac], eax
        je    L_b786
        mov    dword ptr [g_0082e2a8], ecx
        mov    dword ptr [g_0082e2b4], ecx
        mov    dword ptr [g_0082e2b0], ecx
        mov    dword ptr [g_0082e2b8], ecx
        mov    dword ptr [g_0082e2bc], ecx
L_b786:
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
        mov    ecx, dword ptr [g_0082e2b0]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_0082e2b0]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete    al
        cmp    eax, ecx
        mov    dword ptr [g_0082e2b0], eax
        je    L_b7d6
        mov    dword ptr [g_0082e2a8], ecx
        mov    dword ptr [g_0082e2b4], ecx
        mov    dword ptr [g_0082e2ac], ecx
        mov    dword ptr [g_0082e2b8], ecx
        mov    dword ptr [g_0082e2bc], ecx
L_b7d6:
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
        mov    ecx, dword ptr [g_0082e2b4]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_0082e2b4]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete    al
        cmp    eax, ecx
        mov    dword ptr [g_0082e2b4], eax
        je    L_b826
        mov    dword ptr [g_0082e2a8], ecx
        mov    dword ptr [g_0082e2ac], ecx
        mov    dword ptr [g_0082e2b0], ecx
        mov    dword ptr [g_0082e2b8], ecx
        mov    dword ptr [g_0082e2bc], ecx
L_b826:
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
        mov    ecx, dword ptr [g_0082e2b8]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_0082e2b8]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete    al
        cmp    eax, ecx
        mov    dword ptr [g_0082e2b8], eax
        je    L_b876
        mov    dword ptr [g_0082e2a8], ecx
        mov    dword ptr [g_0082e2b4], ecx
        mov    dword ptr [g_0082e2ac], ecx
        mov    dword ptr [g_0082e2b0], ecx
        mov    dword ptr [g_0082e2bc], ecx
L_b876:
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
        mov    ecx, dword ptr [g_0082e2bc]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    edx, dword ptr [g_0082e2bc]
        xor    eax, eax
        xor    ecx, ecx
        cmp    edx, ecx
        sete    al
        cmp    eax, ecx
        mov    dword ptr [g_0082e2bc], eax
        je    L_b8c6
        mov    dword ptr [g_0082e2a8], ecx
        mov    dword ptr [g_0082e2b8], ecx
        mov    dword ptr [g_0082e2b4], ecx
        mov    dword ptr [g_0082e2ac], ecx
        mov    dword ptr [g_0082e2b0], ecx
L_b8c6:
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
        mov    ecx, dword ptr [g_0082e2c0]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_0082e2c0]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_0082e2c0], eax
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
        mov    al, byte ptr [g_0082e2d8]
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
        mov    al, byte ptr [g_0082e2d8]
        test    al, al
        sete    al
        mov    byte ptr [g_0082e2d8], al
        ret    
        mov    ecx, dword ptr [g_00858950]
        xor    eax, eax
        cmp    ecx, 3
        setne    al
        ret    
        nop    
        mov    al, byte ptr [g_0082e2d9]
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
        mov    al, byte ptr [g_0082e2d9]
        test    al, al
        sete    al
        mov    byte ptr [g_0082e2d9], al
        ret    
        mov    al, byte ptr [g_007b60a4]
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
        mov    al, byte ptr [g_007b60a4]
        test    al, al
        sete    al
        mov    byte ptr [g_007b60a4], al
        ret    
        mov    eax, dword ptr [g_0082e2dc]
        inc    eax
        cmp    eax, 1
        mov    dword ptr [g_0082e2dc], eax
        jne    L_b99f
        mov    ecx, dword ptr [g_00858a30]
        mov    al, byte ptr [esp + 4]
        mov    byte ptr [g_0082e2e0], al
        mov    dword ptr [g_0082e1d4], ecx
        mov    dword ptr [g_00858a30], 0x6bfb80
L_b99f:
        ret    4
    }
}
