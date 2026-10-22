/*
 * FUN_0057bc9b (extent 0x57bc9b-0x57c20c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d5ec;
extern float  g_0077f674;
extern int    g_007b46c4;
extern int    g_007ddd74;
extern char   g_007dde2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern char   g_0080da78;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ca0(void);
extern void __cdecl FUN_00579270(void);
extern void __cdecl FUN_0057bbe0(void);
extern void __cdecl FUN_0057bea0(void);
extern void __cdecl FUN_005b9d60(void);
extern void __cdecl FUN_005cae40(void);
extern void __cdecl FUN_005faf20(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0057bc9b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_bd1d
        __emit 0xDB  /* fild dword ptr [esp+0] (MSVC6 drops disp8=0) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    ecx
        fmul    dword ptr [g_0077f674]
        __emit 0xD9  /* fstp dword ptr [esp] (no-disp form) */
        __emit 0x1C
        __emit 0x24
        push    eax
        call    FUN_0057bbe0
        add    esp, 8
L_bd1d:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        cmp    ecx, 1
        movsx    ecx, byte ptr [eax]
        sete    dl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    byte ptr [g_0080da78], dl
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_be2a
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_be2a
        mov    eax, dword ptr [eax + 0x3b0]
        test    eax, eax
        je    L_be2a
        mov    ecx, dword ptr [g_007ddd74]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_be2a
        dec    edi
        neg    edi
        sbb    edi, edi
        and    edi, 0xfffffffe
        add    edi, 2
        mov    dword ptr [g_007b46c4], edi
L_be2a:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, 4
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
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
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        push    0
        lea    eax, [esp + 8]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        call    FUN_00566ca0
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 0xc
        cmp    eax, ecx
        mov    edi, eax
        je    L_bf0f
        push    ebx
        mov    ebx, dword ptr [esp + 0x1c]
        push    esi
L_bee4:
        mov    ecx, dword ptr [edi]
        mov    esi, dword ptr [ecx + 0x3d4]
        test    esi, esi
        je    L_bf02
        call    FUN_005faf20
        mov    ecx, esi
        push    eax
        push    ebx
        call    FUN_005b9d60
        mov    eax, dword ptr [esp + 0xc]
L_bf02:
        mov    ecx, dword ptr [esp + 0x10]
        add    edi, 4
        cmp    edi, ecx
        jne    L_bee4
        pop    esi
        pop    ebx
L_bf0f:
        test    eax, eax
        pop    edi
        je    L_bf1d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_bf1d:
        add    esp, 0xc
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
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_bfa6
        push    edi
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0057bea0
        add    esp, 8
        jmp    L_bfcd
L_bfa6:
        push    esi
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_bfcd
        mov    esi, dword ptr [eax + 0x3d4]
        test    esi, esi
        je    L_bfcd
        mov    ecx, eax
        call    FUN_005faf20
        mov    ecx, esi
        push    eax
        push    edi
        call    FUN_005b9d60
L_bfcd:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_c066
        mov    ecx, dword ptr [eax + 0x3d4]
        test    ecx, ecx
        je    L_c066
        mov    edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx + 0x64]
        mov    esi, dword ptr [g_0080592c]
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c061
        push    0
        call    FUN_00563060
        add    esp, 4
L_c061:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_c095
L_c066:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_c08f
        push    0
        call    FUN_00563060
        add    esp, 4
L_c08f:
        mov    dword ptr [esi], 0
L_c095:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 8], ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_c12b
        __emit 0xDB  /* fild dword ptr [esp+0] (MSVC6 drops disp8=0) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        push    ecx
        mov     ecx, eax
        fmul    dword ptr [g_0076d5ec]
        __emit 0xD9  /* fstp dword ptr [esp] (no-disp form) */
        __emit 0x1C
        __emit 0x24
        call    FUN_005cae40
L_c12b:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ecx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        push    esi
        je    L_c199
        call    FUN_00566c30
        push    eax
        call    FUN_00579270
        add    esp, 8
        jmp    L_c1f4
L_c199:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_c1bf
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
L_c1bf:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_c1ea
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_c1ea
        push    0x781368
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c1ea
        int 3    
L_c1ea:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x128]
L_c1f4:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
    }
}
