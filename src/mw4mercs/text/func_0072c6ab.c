/*
 * FUN_0072c6ab (extent 0x72c6ab-0x72c91c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ac;
extern int    g_0076b104;
extern int    g_0076b45c;
extern int    g_0076b560;
extern char   g_007b7120;
extern int    g_00858940;
extern int    g_00858944;
extern char   g_008816f4;
extern char   g_008816f5;
extern char   g_008816f6;
extern int    g_00881700;
extern int    g_00881704;
extern int    g_00881708;
extern int    g_0088170c;
extern int    g_00881710;
extern int    g_00881714;
extern char   g_00881718;
extern char   g_00881719;
extern char   g_0088171a;
extern int    g_0088171c;
extern int    g_00881720;
extern int    g_00881724;
extern int    g_00881728;
extern int    g_00882564;
extern int    g_008825c0;
extern int    g_008825c8;
extern int    g_008825cc;
extern char   g_008825dc;
extern char   g_008825e5;
extern int    g_008aad24;
extern int    g_008aad58;
extern int    g_008aad64;
extern int    g_008aad68;
extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_0072c940(void);
extern void __cdecl FUN_0072cf10(void);
extern void __cdecl FUN_0072cfc0(void);
extern void __cdecl FUN_0072d050(void);

__declspec(naked) void FUN_0072c6ab(void)
{
    __asm {
        /* __emit: alignment pad 90 (nop) */
        __emit 0x90
        /* __emit: in-function jump-table DATA (5 dword entries, relocated
           addresses of a prior function at ~0x72C194). Inline asm has no `dd`;
           emit the literal patched address bytes (one byte per __emit). */
        __emit 0x94
        __emit 0xC1
        __emit 0x72
        __emit 0x00
        __emit 0x2F
        __emit 0xC2
        __emit 0x72
        __emit 0x00
        __emit 0x49
        __emit 0xC2
        __emit 0x72
        __emit 0x00
        __emit 0x6B
        __emit 0xC2
        __emit 0x72
        __emit 0x00
        __emit 0x89
        __emit 0xC2
        __emit 0x72
        __emit 0x00
        mov    al, byte ptr [g_008825e5]
        sub    esp, 0x4c
        push    ebx
        push    esi
        xor    ebx, ebx
        cmp    al, bl
        push    edi
        mov    edi, dword ptr [esp + 0x5c]
        jne    L_c6f0
        push    edi
        mov    byte ptr [g_008825e5], 1
        call    dword ptr [g_008aad68]
        push    eax
        push    edi
        mov    dword ptr [g_00882564], eax
        call    dword ptr [g_008aad64]
L_c6f0:
        call    dword ptr [g_0076b45c]
        push    edi
        mov    dword ptr [g_008825cc], eax
        call    dword ptr [g_008aad24]
        cmp    eax, ebx
        je    L_c715
        push    ebx
        push    0x21
        push    0x283
        push    eax
        call    dword ptr [g_0076b560]
L_c715:
        lea    eax, [esp + 0x10]
        push    eax
        push    ebx
        call    dword ptr [g_0076b0ac]
        test    eax, eax
        mov    esi, 1
        je    L_c730
        cmp    dword ptr [esp + 0x10], esi
        je    L_c75f
L_c730:
        cmp    dword ptr [g_008825c0], ebx
        jne    L_c765
        push    esi
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0x64]
        push    edx
        push    0x7a5984
        mov    dword ptr [esp + 0x6c], ebx
        mov    dword ptr [esp + 0x1c], 4
        call    FUN_00708930
        cmp    dword ptr [esp + 0x5c], ebx
        je    L_c765
L_c75f:
        mov    dword ptr [g_008825c0], esi
L_c765:
        push    0x70
        call    FUN_0072c940
        push    0x72
        mov    dword ptr [esp + 0x28], eax
        call    FUN_0072c940
        push    0x6e
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_0072c940
        push    0x6f
        mov    byte ptr [esp + 0x30], al
        call    FUN_0072c940
        push    0x71
        mov    byte ptr [esp + 0x32], al
        call    FUN_0072c940
        push    0x65
        mov    byte ptr [esp + 0x31], al
        call    FUN_0072c940
        push    0x66
        mov    dword ptr [esp + 0x34], eax
        call    FUN_0072c940
        push    0x67
        mov    dword ptr [esp + 0x38], eax
        call    FUN_0072c940
        push    0x78
        mov    dword ptr [esp + 0x3c], eax
        call    FUN_0072c940
        push    0x79
        mov    dword ptr [esp + 0x40], eax
        call    FUN_0072c940
        push    0x7a
        mov    dword ptr [esp + 0x44], eax
        call    FUN_0072c940
        push    0x7b
        mov    dword ptr [esp + 0x48], eax
        call    FUN_0072c940
        push    0x7c
        mov    dword ptr [esp + 0x4c], eax
        call    FUN_0072c940
        push    0x7d
        mov    dword ptr [esp + 0x50], eax
        call    FUN_0072c940
        push    0x7e
        mov    byte ptr [esp + 0x54], al
        call    FUN_0072c940
        mov    dword ptr [esp + 0x54], eax
        lea    eax, [esp + 0x24]
        push    eax
        call    FUN_0072cfc0
        mov    ecx, dword ptr [g_00858940]
        mov    edx, dword ptr [g_00858944]
        mov    dword ptr [g_00881700], ebx
        mov    dword ptr [g_00881704], ebx
        mov    dword ptr [g_00881708], 0x41400000
        mov    dword ptr [g_0088170c], ebx
        mov    dword ptr [g_00881710], ebx
        mov    dword ptr [g_00881714], ebx
        mov    byte ptr [g_00881718], bl
        mov    byte ptr [g_00881719], bl
        mov    byte ptr [g_0088171a], bl
        mov    dword ptr [g_0088171c], ebx
        mov    dword ptr [g_00881724], ecx
        mov    dword ptr [g_00881720], ebx
        mov    dword ptr [g_00881728], edx
        call    dword ptr [g_0076b104]
        mov    dword ptr [g_008825c8], eax
        add    eax, 0xfffffc5c
        cmp    eax, 0x12
        ja    L_c8ca
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x72c92c]
        jmp    dword ptr [ecx*4 + 0x72c91c]
        mov    al, 0xa4
        mov    byte ptr [g_008816f4], al
        mov    byte ptr [g_008816f5], al
        jmp    L_c8d7
        mov    byte ptr [g_008816f4], 0xb0
        mov    byte ptr [g_008816f5], 0xa1
        mov    byte ptr [g_007b7120], bl
        jmp    L_c8d7
        mov    byte ptr [g_008816f4], 0x82
        mov    byte ptr [g_008816f5], 0xa0
        jmp    L_c8d7
L_c8ca:
        mov    byte ptr [g_008816f4], 0x41
        mov    byte ptr [g_008816f5], bl
L_c8d7:
        push    3
        mov    byte ptr [g_008816f6], bl
        call    FUN_0072cf10
        push    edi
        call    dword ptr [g_008aad68]
        mov    esi, eax
        cmp    esi, ebx
        je    L_c90b
        push    esi
        call    dword ptr [g_008aad58]
        test    eax, eax
        push    esi
        setne    dl
        push    edi
        mov    byte ptr [g_008825dc], dl
        call    dword ptr [g_008aad64]
L_c90b:
        call    FUN_0072d050
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x4c
        ret    4
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x0072C91C (0 relocated pointers)
    }
}
