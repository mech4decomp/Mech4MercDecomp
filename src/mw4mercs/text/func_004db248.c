/*
 * FUN_004db248 (extent 0x4db248-0x4db31e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dc574;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_004db248(void)
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
        mov    eax, dword ptr [ecx + 0xe0]
        cmp    dword ptr [eax + 0x14], 1
        sete    al
        ret    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x34]
        sub    esp, 0x44
        add    ecx, 0x34
        push    esi
        call    dword ptr [eax + 4]
        mov    esi, eax
        test    esi, esi
        je    L_b2ba
        mov    ecx, dword ptr [g_007dc574]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0xc]
        test    eax, eax
        jbe    L_b2ba
        push    edi
        mov    edi, eax
L_b285:
        mov    ax, word ptr [esi]
        cmp    ax, word ptr [g_007db0ac]
        jne    L_b29e
        mov    cx, word ptr [esi + 2]
        cmp    cx, word ptr [g_007db0ae]
        je    L_b2b3
L_b29e:
        push    1
        push    esi
        lea    ecx, [esp + 0x10]
        call    FUN_004d1f80
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
L_b2b3:
        add    esi, 4
        dec    edi
        jne    L_b285
        pop    edi
L_b2ba:
        pop    esi
        add    esp, 0x44
        ret    
        nop    
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b2f1
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x773400
        pop    esi
        ret    
L_b2f1:
        xor    eax, eax
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
        push    esi
        mov    esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_b318
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_b318:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
