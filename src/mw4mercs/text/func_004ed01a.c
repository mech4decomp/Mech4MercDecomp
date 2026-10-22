/*
 * FUN_004ed01a (extent 0x4ed01a-0x4ed3a5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007748c8;
extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern int    g_007dc7ec;
extern int    g_007dc7f0;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004ecc50(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_007274d0(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004ed01a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        lea    ecx, [esp + 0xc]
        add    esi, 0x18
        push    ecx
        mov    ecx, esi
        call    FUN_00416b60
        mov    edi, eax
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_d05e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_d05e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_d05e:
        push    edi
        mov    ecx, esi
        call    FUN_00415ca0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x98
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0x18]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x7748cc
        call    FUN_00415cc0
        mov    esi, eax
        test    esi, esi
        je    L_d257
        push    0
        push    1
        call    FUN_00713cc0
        push    1
        push    0xd
        call    FUN_00713cc0
        push    0
        push    0xb
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    0xc
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    0
        push    7
        call    FUN_00713cc0
        push    0
        push    0x12
        call    FUN_00713cc0
        lea    eax, [esi + esi*2]
        lea    eax, [eax + eax*4]
        cmp    eax, 0x1d6
        mov    dword ptr [esp + 8], eax
        jle    L_d130
        mov    dword ptr [esp + 8], 0x1d6
L_d130:
        fild    dword ptr [esp + 8]
        mov    eax, 0xff000055
        push    4
        lea    ecx, [esp + 0x24]
        fadd    dword ptr [g_007748c8]
        push    ecx
        mov    dword ptr [esp + 0x34], 0x3f800000
        mov    dword ptr [esp + 0x54], 0x3f800000
        fst    dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x74], 0x3f800000
        fst    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x94], 0x3f800000
        fstp    dword ptr [esp + 0x8c]
        mov    dword ptr [esp + 0x28], 0x41200000
        mov    dword ptr [esp + 0x2c], 0x41200000
        mov    dword ptr [esp + 0x30], 0x3f666666
        mov    dword ptr [esp + 0x38], eax
        mov    dword ptr [esp + 0x48], 0x43960000
        mov    dword ptr [esp + 0x4c], 0x41200000
        mov    dword ptr [esp + 0x50], 0x3f666666
        mov    dword ptr [esp + 0x58], eax
        mov    dword ptr [esp + 0x68], 0x43960000
        mov    dword ptr [esp + 0x70], 0x3f666666
        mov    dword ptr [esp + 0x78], eax
        mov    dword ptr [esp + 0x88], 0x41200000
        mov    dword ptr [esp + 0x90], 0x3f666666
        mov    dword ptr [esp + 0x98], eax
        call    FUN_00713ae0
        fld    dword ptr [esp + 8]
        call    FUN_0075db4a
        push    eax
        push    0x12c
        push    0xa
        push    0xa
        call    FUN_00727630
        mov    edx, dword ptr [edi + 0x2c]
        push    0
        push    0
        push    0
        push    0
        push    1
        push    0
        push    0x3f800000
        push    -1
        push    edx
        call    FUN_007274d0
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_d257
        mov    edi, 0x14
L_d22e:
        cmp    edi, 0x15e
        jg    L_d257
        push    edi
        push    0x14
        call    FUN_007275f0
        mov    ecx, esi
        call    FUN_004ecc50
        lea    ecx, [esp + 0xc]
        add    edi, 0xf
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_d22e
L_d257:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    edi
        pop    esi
        add    esp, 0x98
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_d2d6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_d2cc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_d2d6
L_d2cc:
        mov    dword ptr [g_007b8ef4], 0
L_d2d6:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_d314
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_d314:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d347
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x7748cc
        mov    eax, esi
        pop    esi
        ret    
L_d347:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_d39f
        mov    ecx, dword ptr [g_007dc7f0]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007dc7ec]
        jne    L_d39f
        push    edi
        mov    edi, dword ptr [g_007dc7f0]
        test    edi, edi
        je    L_d38e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_d38e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007dc7f0], 0
        pop    esi
        ret    4
L_d39f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
