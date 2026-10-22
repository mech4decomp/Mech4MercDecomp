/*
 * FUN_006fb000 (extent 0x6fb000-0x6fb20b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b168;
extern int    g_0076b2d0;
extern int    g_008566d4;
extern int    g_00856710;
extern int    g_00859278;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_006faca0(void);
extern void __cdecl FUN_006fb240(void);
extern void __cdecl FUN_006fbc60(void);

__declspec(naked) void FUN_006fb000(void)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        call    FUN_006fb240
        push    0
        push    0x124
        call    FUN_006f3c80
        mov    ebp, dword ptr [esp + 0x10]
        mov    esi, eax
        push    ebp
        lea    eax, [esi + 8]
        push    eax
        mov    dword ptr [esi], 0xeef546ad
        mov    dword ptr [esi + 4], 0
        call    FUN_006fbc60
        mov    edi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        cmp    dword ptr [g_00859278], 2
        mov    dword ptr [esi + 0x110], 0
        mov    dword ptr [edi], 0
        mov    dword ptr [eax], 0
        mov    dword ptr [esi + 0x10c], edi
        mov    dword ptr [esi + 0x114], eax
        mov    byte ptr [esi + 0x120], 0
        jne    L_b08a
        push    eax
        push    edi
        push    ebp
        call    FUN_006faca0
        mov    ecx, dword ptr [edi]
        pop    edi
        mov    dword ptr [esi + 0x110], ecx
        mov    byte ptr [esi + 0x120], 1
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x14
L_b08a:
        push    0x8566d8
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [g_00856710]
        test    eax, eax
        jne    L_b0a6
        mov    dword ptr [g_00856710], esi
        jmp    L_b0b8
L_b0a6:
        xor    ecx, ecx
        test    eax, eax
        je    L_b0b5
L_b0ac:
        mov    ecx, eax
        mov    eax, dword ptr [eax + 4]
        test    eax, eax
        jne    L_b0ac
L_b0b5:
        mov    dword ptr [ecx + 4], esi
L_b0b8:
        push    0x8566d8
        call    dword ptr [g_0076b100]
        mov    edx, dword ptr [g_008566d4]
        push    edx
        call    dword ptr [g_0076b168]
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        push    esi
        mov    esi, dword ptr [ebp + 8]
        test    esi, esi
        je    L_b0f3
        cmp    dword ptr [esi], 0xeef546ad
        je    L_b105
L_b0f3:
        push    0x7a020c
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_b105
        int 3    
L_b105:
        mov    al, byte ptr [esi + 0x120]
        test    al, al
        jne    L_b121
        push    0x7a01f4
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_b121
        int 3    
L_b121:
        cmp    dword ptr [g_00859278], 2
        jne    L_b191
        mov    eax, dword ptr [g_00856710]
        cmp    esi, eax
        jne    L_b156
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [g_00856710], eax
        mov    eax, dword ptr [esi + 0x110]
        test    eax, eax
        je    L_b14b
        push    eax
        call    FUN_006f4230
L_b14b:
        push    esi
        call    FUN_006f4230
        pop    esi
        pop    ebp
        ret    4
L_b156:
        test    eax, eax
        je    L_b206
L_b15e:
        mov    ecx, dword ptr [eax + 4]
        cmp    ecx, esi
        je    L_b170
        mov    eax, ecx
        test    eax, eax
        jne    L_b15e
        pop    esi
        pop    ebp
        ret    4
L_b170:
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax + 4], ecx
        mov    eax, dword ptr [esi + 0x110]
        test    eax, eax
        je    L_b186
        push    eax
        call    FUN_006f4230
L_b186:
        push    esi
        call    FUN_006f4230
        pop    esi
        pop    ebp
        ret    4
L_b191:
        push    0x8566d8
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [g_00856710]
        cmp    esi, eax
        jne    L_b1ba
        mov    eax, dword ptr [esi + 0x110]
        test    eax, eax
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [g_00856710], edx
        je    L_b1f5
        jmp    L_b1eb
L_b1ba:
        test    eax, eax
        je    L_b1fb
L_b1be:
        mov    ecx, dword ptr [eax + 4]
        cmp    ecx, esi
        je    L_b1db
        mov    eax, ecx
        test    eax, eax
        jne    L_b1be
        push    0x8566d8
        call    dword ptr [g_0076b100]
        pop    esi
        pop    ebp
        ret    4
L_b1db:
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax + 4], ecx
        mov    eax, dword ptr [esi + 0x110]
        test    eax, eax
        je    L_b1f5
L_b1eb:
        push    eax
        call    dword ptr [g_0076b2d0]
        add    esp, 4
L_b1f5:
        push    esi
        call    FUN_006f4230
L_b1fb:
        push    0x8566d8
        call    dword ptr [g_0076b100]
L_b206:
        pop    esi
        pop    ebp
        ret    4
    }
}
