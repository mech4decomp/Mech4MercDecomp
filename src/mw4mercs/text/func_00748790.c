/*
 * FUN_00748790 (extent 0x748790-0x748898) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b2520;
extern int    g_008b287c;
extern int    g_008b28c0;
extern int    g_008b79e4;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_00749190(void);
extern void __cdecl FUN_00753930(void);

__declspec(naked) void FUN_00748790(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [g_008b287c]
        test    esi, esi
        je    L_87e2
L_879b:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov    dword ptr [esi + 0x2c], 0
        je    L_87c2
        mov    eax, dword ptr [g_008b28c0]
        inc    eax
        mov    ecx, esi
        mov    dword ptr [g_008b28c0], eax
        call    FUN_00749190
        mov    ecx, esi
        call    FUN_00753930
L_87c2:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_87e2
        and    eax, 0xffff
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    esi, [esi + ecx*8]
        test    esi, esi
        jne    L_879b
L_87e2:
        pop    esi
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
        test    dword ptr [g_008b2520], 0x400000
        mov    ecx, dword ptr [esp + 8]
        push    esi
        push    edi
        je    L_8853
        mov    eax, dword ptr [g_008b79e4]
        xor    edx, edx
        test    eax, eax
        je    L_8853
        mov    esi, dword ptr [ecx + 8]
L_8810:
        cmp    esi, dword ptr [eax + 0xc]
        jne    L_884b
        mov    edi, dword ptr [ecx + 0xc]
        cmp    edi, dword ptr [eax + 0x10]
        jne    L_884b
        mov    edi, dword ptr [ecx + 0x18]
        cmp    edi, dword ptr [eax + 0x1c]
        jne    L_884b
        mov    edi, dword ptr [eax + 0x6c]
        xor    edi, dword ptr [ecx + 0x68]
        test    edi, 0x30000800
        jne    L_884b
        mov    edi, dword ptr [ecx + 0x4c]
        cmp    edi, dword ptr [eax + 0x50]
        jne    L_884b
        mov    edi, dword ptr [ecx + 0x58]
        cmp    edi, dword ptr [eax + 0x5c]
        jne    L_884b
        mov    edi, dword ptr [ecx + 0x64]
        cmp    edi, dword ptr [eax + 0x68]
        je    L_886d
L_884b:
        mov    edx, eax
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_8810
L_8853:
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    FUN_00735230
        pop    edi
        pop    esi
        ret    0x10
L_886d:
        test    edx, edx
        je    L_8877
        mov    ecx, dword ptr [eax]
        mov    dword ptr [edx], ecx
        jmp    L_887f
L_8877:
        mov    edx, dword ptr [eax]
        mov    dword ptr [g_008b79e4], edx
L_887f:
        mov    ecx, dword ptr [eax + 0x80]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        mov    dword ptr [edx], ecx
        call    FUN_006f4230
        pop    edi
        pop    esi
        xor    eax, eax
        ret    0x10
    }
}
