/*
 * FUN_004ec462 (extent 0x4ec462-0x4ec5c0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c10;
extern char   g_007dc7dc;
extern int    g_007dc7e0;
extern int    g_007dc868;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_0070f090(void);
extern void __cdecl FUN_007242d0(void);
extern void __cdecl FUN_00725080(void);

__declspec(naked) void FUN_004ec462(void)
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
        sub    esp, 0xc
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 0x18]
        push    edi
        call    FUN_007242d0
        sub    eax, 2
        je    L_c500
        sub    eax, 2
        jne    L_c498
        cmp    dword ptr [esi + 0x24], 1
        jne    L_c4ac
        push    1
        push    edi
        call    FUN_00725080
L_c498:
        mov    ecx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0xc]
        fstp    dword ptr [esi + 0x30]
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    8
L_c4ac:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 8]
        mov    esi, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [g_007dc868]
        lea    eax, [esi + esi*4]
        lea    ecx, [esi + eax*2]
        mov    eax, dword ptr [edx + 0x48]
        lea    eax, [eax + ecx*4]
        mov    cl, byte ptr [eax + 0x24]
        test    cl, cl
        je    L_c500
        add    eax, 0x10
        mov    dword ptr [esp + 0xc], eax
        mov    eax, dword ptr [eax]
        test    eax, eax
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 8], 0x774758
        je    L_c500
        mov    esi, dword ptr [eax]
        test    esi, esi
        je    L_c500
        lea    ecx, [esp + 8]
        call    FUN_00417ad0
        push    0
        mov    ecx, esi
        call    FUN_004ebe90
L_c500:
        pop    edi
        pop    esi
        add    esp, 0xc
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_c53b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x774758
        pop    esi
        ret    
L_c53b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_c56d
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x774784
        push    0x228
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc7e0], eax
        jmp    L_c577
L_c56d:
        mov    dword ptr [g_007dc7e0], 0
L_c577:
        push    0
        push    0
        push    0x4ec5b0
        push    0x4ec5a0
        push    0x77475c
        mov    byte ptr [g_007dc7dc], 0
        call    FUN_0070f090
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
        mov    al, byte ptr [g_007dc7dc]
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
        mov    al, byte ptr [g_007dc7dc]
        test    al, al
        sete    al
        mov    byte ptr [g_007dc7dc], al
        ret    
    }
}
