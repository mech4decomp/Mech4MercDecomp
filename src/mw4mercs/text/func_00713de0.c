/*
 * FUN_00713de0 (extent 0x713de0-0x714040) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b70b8;
extern int    g_007b70bc;
extern int    g_0085a248;
extern int    g_0087c1d4;
extern char   g_0087c254;
extern int    g_0087c2a8;
extern int    g_0087c2ac;
extern void __cdecl FUN_00714040(void);
extern void __cdecl FUN_0074a670(void);

__declspec(naked) void FUN_00713de0(void)
{
    __asm {
        mov    al, byte ptr [g_0087c254]
        test    al, al
        je    L_3e24
        push    esi
        push    edi
        mov    esi, 0x20
        mov    edi, 0x87c250
L_3df5:
        mov    al, byte ptr [esi + 0x87c0d0]
        test    al, al
        je    L_3e0f
        mov    eax, dword ptr [edi]
        push    eax
        push    esi
        mov    byte ptr [esi + 0x87c0d0], 0
        call    FUN_00714040
L_3e0f:
        sub    edi, 4
        dec    esi
        cmp    edi, 0x87c1d0
        jne    L_3df5
        pop    edi
        mov    byte ptr [g_0087c254], 0
        pop    esi
L_3e24:
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
        mov    eax, dword ptr [esp + 4]
        push    ebx
        mov    ebx, 1
        cmp    eax, ebx
        push    esi
        mov    esi, 2
        jne    L_3ee8
        mov    eax, dword ptr [g_0087c2ac]
        test    eax, eax
        je    L_3ef0
        mov    eax, dword ptr [g_0087c1d4]
        test    eax, eax
        mov    eax, dword ptr [g_007b70bc]
        je    L_3ea4
        cmp    eax, ebx
        je    L_3e7c
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    ebx
        push    0
        push    eax
        call    FUN_0074a670
        mov    dword ptr [g_007b70bc], ebx
L_3e7c:
        cmp    dword ptr [g_007b70b8], ebx
        je    L_403b
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    4
        push    0
        push    ecx
        call    FUN_0074a670
        pop    esi
        mov    dword ptr [g_007b70b8], ebx
        pop    ebx
        ret    4
L_3ea4:
        cmp    eax, esi
        je    L_3ebf
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    ebx
        push    0
        push    edx
        call    FUN_0074a670
        mov    dword ptr [g_007b70bc], esi
L_3ebf:
        mov    eax, dword ptr [g_007b70b8]
L_3ec4:
        cmp    eax, esi
        je    L_403b
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    4
        push    0
        push    eax
        call    FUN_0074a670
        mov    dword ptr [g_007b70b8], esi
        pop    esi
        pop    ebx
        ret    4
L_3ee8:
        cmp    eax, esi
        je    L_3f9b
L_3ef0:
        mov    eax, dword ptr [g_0087c2a8]
        test    eax, eax
        je    L_3f9b
        mov    eax, dword ptr [g_0087c1d4]
        test    eax, eax
        mov    eax, dword ptr [g_007b70bc]
        je    L_3f58
        test    eax, eax
        je    L_3f2a
        mov    ecx, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    0
        push    ecx
        call    FUN_0074a670
        mov    dword ptr [g_007b70bc], 0
L_3f2a:
        mov    eax, dword ptr [g_007b70b8]
        test    eax, eax
        je    L_403b
        mov    edx, dword ptr [g_0085a248]
        push    4
        push    4
        push    0
        push    edx
        call    FUN_0074a670
        pop    esi
        mov    dword ptr [g_007b70b8], 0
        pop    ebx
        ret    4
L_3f58:
        cmp    eax, esi
        je    L_3f72
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    ebx
        push    0
        push    eax
        call    FUN_0074a670
        mov    dword ptr [g_007b70bc], esi
L_3f72:
        cmp    dword ptr [g_007b70b8], esi
        je    L_403b
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    4
        push    0
        push    ecx
        call    FUN_0074a670
        mov    dword ptr [g_007b70b8], esi
        pop    esi
        pop    ebx
        ret    4
L_3f9b:
        mov    eax, dword ptr [g_0087c1d4]
        test    eax, eax
        mov    eax, dword ptr [g_007b70bc]
        je    L_4000
        test    eax, eax
        je    L_3fc8
        mov    edx, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    0
        push    edx
        call    FUN_0074a670
        mov    dword ptr [g_007b70bc], 0
L_3fc8:
        mov    eax, dword ptr [g_0087c1d4]
        mov    cl, byte ptr [eax + 4]
        mov    eax, dword ptr [g_007b70b8]
        shr    cl, 3
        test    cl, bl
        je    L_3ec4
        cmp    eax, ebx
        je    L_403b
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    4
        push    0
        push    edx
        call    FUN_0074a670
        pop    esi
        mov    dword ptr [g_007b70b8], ebx
        pop    ebx
        ret    4
L_4000:
        cmp    eax, esi
        je    L_401b
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    ebx
        push    0
        push    ecx
        call    FUN_0074a670
        mov    dword ptr [g_007b70bc], esi
L_401b:
        cmp    dword ptr [g_007b70b8], esi
        je    L_403b
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    4
        push    0
        push    edx
        call    FUN_0074a670
        mov    dword ptr [g_007b70b8], esi
L_403b:
        pop    esi
        pop    ebx
        ret    4
    }
}
