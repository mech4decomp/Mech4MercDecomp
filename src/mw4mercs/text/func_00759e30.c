/*
 * FUN_00759e30 (extent 0x759e30-0x75a01e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b7838;
extern int    g_007b783c;
extern int    g_007b7840;
extern int    g_007b7844;
extern int    g_007b7848;
extern int    g_007b784c;
extern int    g_007b7850;
extern int    g_007b7854;
extern int    g_007b7858;
extern int    g_007b785c;
extern int    g_007b7860;
extern int    g_007b7864;
extern int    g_007b7868;
extern int    g_007b786c;
extern int    g_007b7870;
extern void __cdecl FUN_00759d10(void);
extern void __cdecl FUN_00759da0(void);

__declspec(naked) void FUN_00759e30(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edx, ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, esi
        repne scasb
        mov    eax, dword ptr [g_007b7870]
        not    ecx
        push    ecx
        push    esi
        push    eax
        mov    ecx, edx
        call    FUN_00759d10
        pop    edi
        pop    esi
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
        mov    edx, dword ptr [g_007b783c]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi + 0x1c]
        mov    esi, ecx
        mov    ecx, dword ptr [eax*4 + 0x7b7874]
        push    0x20
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9e8c
        pop    edi
        pop    esi
        ret    4
L_9e8c:
        mov    eax, dword ptr [edi + 4]
        mov    ecx, dword ptr [g_007b7840]
        push    0x20
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9ea9
        pop    edi
        pop    esi
        ret    4
L_9ea9:
        mov    edx, dword ptr [edi]
        mov    eax, dword ptr [g_007b7838]
        push    0xff
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9ec7
        pop    edi
        pop    esi
        ret    4
L_9ec7:
        mov    ecx, dword ptr [edi + 0x20]
        mov    edx, dword ptr [ecx*4 + 0x7b7880]
        mov    eax, dword ptr [g_007b7844]
        push    0x20
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9eea
        pop    edi
        pop    esi
        ret    4
L_9eea:
        mov    ecx, dword ptr [edi + 0x30]
        mov    edx, dword ptr [g_007b7848]
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_00759da0
        test    al, al
        jne    L_9f05
        pop    edi
        pop    esi
        ret    4
L_9f05:
        mov    eax, dword ptr [edi + 0x34]
        mov    ecx, dword ptr [g_007b784c]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00759da0
        test    al, al
        jne    L_9f20
        pop    edi
        pop    esi
        ret    4
L_9f20:
        mov    edx, dword ptr [edi + 0x24]
        mov    eax, dword ptr [edx*4 + 0x7b7914]
        mov    ecx, dword ptr [g_007b7850]
        push    0x20
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9f44
        pop    edi
        pop    esi
        ret    4
L_9f44:
        mov    edx, dword ptr [edi + 8]
        mov    eax, dword ptr [g_007b7854]
        push    0xff
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9f63
        pop    edi
        pop    esi
        ret    4
L_9f63:
        mov    ecx, dword ptr [edi + 0xc]
        mov    edx, dword ptr [g_007b7858]
        push    0x20
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9f80
        pop    edi
        pop    esi
        ret    4
L_9f80:
        mov    eax, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [g_007b785c]
        push    0x14
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9f9d
        pop    edi
        pop    esi
        ret    4
L_9f9d:
        mov    edx, dword ptr [edi + 0x28]
        mov    eax, dword ptr [edx*4 + 0x7b78a4]
        mov    ecx, dword ptr [g_007b7860]
        push    0x20
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9fc1
        pop    edi
        pop    esi
        ret    4
L_9fc1:
        mov    edx, dword ptr [edi + 0x14]
        mov    eax, dword ptr [g_007b7864]
        push    0x20
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_9fdd
        pop    edi
        pop    esi
        ret    4
L_9fdd:
        mov    ecx, dword ptr [edi + 0x2c]
        mov    edx, dword ptr [ecx*4 + 0x7b78cc]
        mov    eax, dword ptr [g_007b7868]
        push    0x20
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        jne    L_a000
        pop    edi
        pop    esi
        ret    4
L_a000:
        mov    ecx, dword ptr [edi + 0x18]
        mov    edx, dword ptr [g_007b786c]
        push    0x20
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_00759d10
        test    al, al
        pop    edi
        setne    al
        pop    esi
        ret    4
    }
}
