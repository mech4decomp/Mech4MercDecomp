/*
 * FUN_005585a9 (extent 0x5585a9-0x558753) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d5f0;
extern float  g_007748c8;
extern float  g_0077d040;
extern float  g_0077d044;
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_004da4f0(void);
extern void __cdecl FUN_004db210(void);
extern void __cdecl FUN_0054f2a0(void);

__declspec(naked) void FUN_005585a9(void)
{
    __asm {
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        sar    byte ptr [edi + 0x55], 1
        add    byte ptr [esi], dl
        adc    byte ptr [ebp], 0x5c
        adc    byte ptr [ebp], 0xf7
        test    byte ptr [ebp], dl
        sbb    eax, 0x3d005584
        test    dword ptr [ebp], edx
        test    dword ptr [ebp - 0x6f6fffab], eax
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        xor    ecx, ecx
        mov    dword ptr [esi + 0x564], eax
        dec    eax
        mov    dword ptr [esi + 0x344], ecx
        je    L_86f5
        sub    eax, 2
        je    L_86c2
        dec    eax
        jne    L_8749
        fld    dword ptr [esi + 0x520]
        mov    eax, dword ptr [esi + 0x384]
        fcomp    dword ptr [g_0077d040]
        mov    byte ptr [eax + 0x4a0], cl
        mov    byte ptr [eax + 0x4a1], 1
        fnstsw  ax
        test    ah, 0x41
        jne    L_862c
        mov    dword ptr [esi + 0x520], 0x42200000
L_862c:
        fld    dword ptr [esi + 0x520]
        mov    edx, 0x40000000
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 1
        je    L_864a
        mov    dword ptr [esi + 0x520], edx
L_864a:
        fld    dword ptr [esi + 0x518]
        fcomp    dword ptr [g_0077d044]
        fnstsw  ax
        test    ah, 1
        je    L_8667
        mov    dword ptr [esi + 0x518], 0xc1a00000
L_8667:
        fld    dword ptr [esi + 0x518]
        mov    ecx, 0x41a00000
        fcomp    dword ptr [g_007748c8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_8685
        mov    dword ptr [esi + 0x518], ecx
L_8685:
        fld    dword ptr [esi + 0x51c]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 1
        je    L_869e
        mov    dword ptr [esi + 0x51c], edx
L_869e:
        fld    dword ptr [esi + 0x51c]
        fcomp    dword ptr [g_007748c8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_86b7
        mov    dword ptr [esi + 0x51c], ecx
L_86b7:
        mov    ecx, esi
        call    FUN_0054f2a0
        pop    esi
        ret    8
L_86c2:
        mov    eax, dword ptr [esi + 0x384]
        mov    byte ptr [eax + 0x4a0], cl
        mov    byte ptr [eax + 0x4a1], cl
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax + 0x28]
        mov    dword ptr [esi + 0x518], ecx
        mov    ecx, dword ptr [eax + 0x2c]
        mov    dword ptr [esi + 0x51c], edx
        mov    dword ptr [esi + 0x520], ecx
        jmp    L_8726
L_86f5:
        mov    eax, dword ptr [esi + 0x384]
        mov    byte ptr [eax + 0x4a0], cl
        mov    byte ptr [eax + 0x4a1], cl
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [eax + 0x24]
        mov    ecx, dword ptr [eax + 0x28]
        mov    dword ptr [esi + 0x518], edx
        mov    edx, dword ptr [eax + 0x2c]
        mov    dword ptr [esi + 0x51c], ecx
        mov    dword ptr [esi + 0x520], edx
L_8726:
        add    eax, 0x54
        push    eax
        lea    ecx, [esi + 0x524]
        call    FUN_0041ac80
        mov    esi, dword ptr [esi + 0x384]
        mov    ecx, esi
        call    FUN_004da4f0
        mov    ecx, esi
        call    FUN_004db210
L_8749:
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        ret    4
    }
}
