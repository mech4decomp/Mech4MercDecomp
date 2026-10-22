/*
 * FUN_00493acc (extent 0x493acc-0x493e28) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00770120;
extern float  g_00770124;
extern float  g_00770128;
extern int    g_007b8c10;
extern int    g_007da928;
extern int    g_007da93c;
extern int    g_007da940;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_00493acc(void)
{
    __asm {
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
        __emit 0xE9  /* near jmp rel32; MSVC6 collapses to short EB form */
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_3af0:
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
        push    esi
        push    0x1c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_3b3e
        mov    eax, dword ptr [g_007b8c10]
        push    eax
        push    0x7b2638
        push    0x520
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x494170
        mov    dword ptr [esi + 0x18], 0x493830
        mov    dword ptr [g_007da93c], esi
        jmp    L_3b48
L_3b3e:
        mov    dword ptr [g_007da93c], 0
L_3b48:
        push    0
        push    0
        push    0x493da0
        push    0x493d40
        push    0x7b2648
        mov    dword ptr [g_007da940], 0
        mov    dword ptr [g_007da928], 0
        call    FUN_0070f090
        push    0
        push    0
        push    0x493dd0
        push    0x493d60
        push    0x7b2678
        call    FUN_0070f090
        push    0
        push    0
        push    0x493e00
        push    0x493d80
        push    0x7b26a8
        call    FUN_0070f090
        mov    ecx, dword ptr [esp + 8]
        test    ecx, ecx
        pop    esi
        je    L_3bce
        push    0x7b26d8
        call    FUN_0040ecc0
        test    eax, eax
        je    L_3bce
        push    0
        push    0x7da940
        push    0x7b26ec
        mov    ecx, eax
        call    FUN_00411d60
L_3bce:
        push    0
        push    0
        push    0x493e50
        push    0x493e30
        push    0x7b26f8
        call    FUN_0070f090
        push    0
        push    0
        push    0x493ea0
        push    0x493e90
        push    0x7b271c
        call    FUN_0070f090
        push    0
        push    0
        push    0x493ec0
        push    0x493eb0
        push    0x7b2740
        call    FUN_0070f090
        push    0
        push    0
        push    0x493ee0
        push    0x493ed0
        push    0x7b276c
        call    FUN_0070f090
        push    0
        push    0
        push    0x493f00
        push    0x493ef0
        push    0x7b2798
        call    FUN_0070f090
        push    0
        push    0
        push    0x493f20
        push    0x493f10
        push    0x7b27c4
        call    FUN_0070f090
        push    0
        push    0
        push    0x493f40
        push    0x493f30
        push    0x7b27f0
        call    FUN_0070f090
        push    0
        push    0
        push    0x493f60
        push    0x493f50
        push    0x7b281c
        call    FUN_0070f090
        push    0
        push    0
        push    0x493f80
        push    0x493f70
        push    0x7b2848
        call    FUN_0070f090
        push    0
        push    0
        push    0x493fa0
        push    0x493f90
        push    0x7b286c
        call    FUN_0070f090
        push    0
        push    0
        push    0x493fc0
        push    0x493fb0
        push    0x7b2894
        call    FUN_0070f090
        push    0
        push    0
        push    0x493fe0
        push    0x493fd0
        push    0x7b28b8
        call    FUN_0070f090
        push    0
        push    0
        push    0x494000
        push    0x493ff0
        push    0x7b28e4
        call    FUN_0070f090
        push    0
        push    0
        push    0x494020
        push    0x494010
        push    0x7b2910
        call    FUN_0070f090
        push    0
        push    0
        push    0x494040
        push    0x494030
        push    0x7b2938
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
        fld    dword ptr [g_007da940]
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x40
        je    L_3d59
        mov    eax, 1
        ret    
L_3d59:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        fcomp    dword ptr [g_00770124]
        fnstsw  ax
        test    ah, 0x40
        je    L_3d79
        mov    eax, 1
        ret    
L_3d79:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        fcomp    dword ptr [g_00770128]
        fnstsw  ax
        test    ah, 0x40
        je    L_3d99
        mov    eax, 1
        ret    
L_3d99:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        mov    dword ptr [g_007da940], 0
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3dc7
        mov    dword ptr [g_007da940], 0x461c4000
L_3dc7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        mov    dword ptr [g_007da940], 0
        fcomp    dword ptr [g_00770124]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3df7
        mov    dword ptr [g_007da940], 0x47742400
L_3df7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        mov    dword ptr [g_007da940], 0
        fcomp    dword ptr [g_00770128]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3e27
        mov    dword ptr [g_007da940], 0x48742400
L_3e27:
        ret    
    }
}
