/*
 * FUN_0072c940 (extent 0x72c940-0x72cb2d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b36c;
extern int    g_0076b588;
extern int    g_008825e8;
extern int    g_008825ec;
extern int    g_00896c88;
extern int    g_008aad20;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_0075e346(void);
extern void __cdecl FUN_0075e34c(void);
extern void __cdecl FUN_0075e352(void);

__declspec(naked) void FUN_0072c940(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [g_00896c88]
        push    0
        push    0
        push    eax
        push    ecx
        call    FUN_0072d830
        push    eax
        call    dword ptr [g_0076b36c]
        add    esp, 0xc
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
        nop    
        sub    esp, 0xc
        push    ebx
        push    esi
        push    edi
        push    0
        call    dword ptr [g_0076b588]
        cmp    dword ptr [g_008825ec], eax
        jne    L_c992
        mov    eax, dword ptr [g_008825e8]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
L_c992:
        cmp    eax, 0xe0080404
        mov    dword ptr [g_008825ec], eax
        je    L_c9a9
        cmp    eax, 0xe0090404
        jne    L_cb1a
L_c9a9:
        push    0x103
        push    0x881750
        push    eax
        call    dword ptr [g_008aad20]
        test    eax, eax
        jbe    L_cb1a
        mov    esi, 0x7a59b0
        mov    eax, 0x881750
L_c9cc:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_c9f4
        test    cl, cl
        je    L_c9f0
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_c9f4
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_c9cc
L_c9f0:
        xor    eax, eax
        jmp    L_c9f9
L_c9f4:
        sbb    eax, eax
        sbb    eax, -1
L_c9f9:
        test    eax, eax
        je    L_ca77
        mov    esi, 0x7a59a0
        mov    eax, 0x881750
L_ca07:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_ca2f
        test    cl, cl
        je    L_ca2b
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_ca2f
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_ca07
L_ca2b:
        xor    eax, eax
        jmp    L_ca34
L_ca2f:
        sbb    eax, eax
        sbb    eax, -1
L_ca34:
        test    eax, eax
        je    L_ca77
        mov    esi, 0x7a5990
        mov    eax, 0x881750
L_ca42:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_ca6a
        test    cl, cl
        je    L_ca66
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_ca6a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_ca42
L_ca66:
        xor    eax, eax
        jmp    L_ca6f
L_ca6a:
        sbb    eax, eax
        sbb    eax, -1
L_ca6f:
        test    eax, eax
        jne    L_cb1a
L_ca77:
        lea    eax, [esp + 0xc]
        push    eax
        push    0x881750
        call    FUN_0075e352
        mov    esi, eax
        test    esi, esi
        je    L_cb1a
        push    0
        push    esi
        call    FUN_006f3c80
        mov    edi, eax
        test    edi, edi
        je    L_cb14
        mov    ecx, dword ptr [esp + 0xc]
        push    edi
        push    esi
        push    ecx
        push    0x881750
        call    FUN_0075e34c
        test    eax, eax
        je    L_cb14
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        push    0x76c5a8
        push    edi
        call    FUN_0075e346
        test    eax, eax
        je    L_cb14
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 8]
        cmp    eax, 0x40002
        je    L_cafd
        cmp    eax, 0x40003
        je    L_cafd
        cmp    eax, 0x40004
        je    L_cafd
        cmp    eax, 0x50000
        je    L_cafd
        cmp    eax, 0x50001
        je    L_cafd
        cmp    eax, 0x50002
        jne    L_cb14
L_cafd:
        push    edi
        mov    dword ptr [g_008825e8], eax
        call    FUN_006f4230
        mov    eax, dword ptr [g_008825e8]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
L_cb14:
        push    edi
        call    FUN_006f4230
L_cb1a:
        pop    edi
        pop    esi
        mov    dword ptr [g_008825e8], 0
        xor    eax, eax
        pop    ebx
        add    esp, 0xc
        ret    
    }
}
