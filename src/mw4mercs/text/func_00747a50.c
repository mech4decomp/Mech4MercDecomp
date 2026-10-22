/*
 * FUN_00747a50 (extent 0x747a50-0x747c16) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008a99a8;
extern int    g_008b287c;
extern int    g_008b2880;
extern int    g_008b2888;
extern int    g_008b2894;
extern int    g_008b2898;
extern int    g_008b289c;
extern int    g_008b28a0;
extern int    g_008b28b4;
extern void __cdecl FUN_007357d0(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_007539e0(void);

__declspec(naked) void FUN_00747a50(void)
{
    __asm {
        sub    esp, 0x10
        push    ebx
        mov    bx, word ptr [esp + 0x1c]
        test    bx, bx
        push    esi
        push    edi
        je    L_7ab0
        mov    di, word ptr [ecx]
        xor    eax, eax
        mov    dword ptr [esp + 0xc], eax
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], eax
        xor    esi, esi
        cmp    di, bx
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0xc], 0x401008
        je    L_7ab0
L_7a84:
        mov    eax, dword ptr [esp + 0x20]
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_007357d0
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        call    FUN_00740db0
        inc    esi
        mov    edx, edi
        mov    cx, si
        shr    dx, cl
        cmp    dx, bx
        jne    L_7a84
L_7ab0:
        mov    eax, dword ptr [esp + 0x20]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    8
        nop    
        nop    
        nop    
        mov    ax, word ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        cmp    ax, cx
        jbe    L_7ad5
        mov    dword ptr [esp + 8], ecx
        mov    ax, cx
L_7ad5:
        xor    ecx, ecx
        cmp    ax, 0x10
        jbe    L_7aea
L_7add:
        shr    ax, 4
        add    ecx, 4
        cmp    ax, 0x10
        ja    L_7add
L_7aea:
        test    ax, ax
        je    L_7af8
L_7aef:
        shr    ax, 1
        inc    ecx
        test    ax, ax
        jne    L_7aef
L_7af8:
        lea    eax, [ecx - 4]
        ret    8
        nop    
        nop    
        push    ebp
        push    esi
        mov    esi, dword ptr [g_008b287c]
        push    edi
        xor    edi, edi
        test    esi, esi
        je    L_7bcc
L_7b13:
        push    2
        push    1
        mov    ecx, esi
        call    FUN_007539e0
        push    1
        push    1
        mov    ecx, esi
        mov    ebp, eax
        call    FUN_007539e0
        mov    edx, dword ptr [g_008b28b4]
        mov    ecx, dword ptr [g_008b2880]
        add    ebp, eax
        mov    eax, dword ptr [esi + 0x24]
        sar    ebp, 0xa
        add    edx, ebp
        cmp    eax, ecx
        mov    dword ptr [g_008b28b4], edx
        jne    L_7ba8
        push    2
        push    1
        mov    ecx, esi
        inc    edi
        call    FUN_007539e0
        mov    ebp, dword ptr [g_008b2894]
        mov    cl, byte ptr [esi + 4]
        add    ebp, eax
        shr    cl, 3
        test    cl, 1
        mov    dword ptr [g_008b2894], ebp
        je    L_7b81
        push    2
        push    1
        mov    ecx, esi
        call    FUN_007539e0
        add    dword ptr [g_008b28a0], eax
L_7b81:
        push    3
        push    1
        mov    ecx, esi
        call    FUN_007539e0
        mov    edx, dword ptr [g_008b2898]
        mov    cl, byte ptr [esi + 6]
        add    edx, eax
        test    cl, 0x40
        mov    dword ptr [g_008b2898], edx
        je    L_7ba8
        add    dword ptr [g_008b289c], eax
L_7ba8:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_7bcc
        and    eax, 0xffff
        lea    edx, [eax*8]
        sub    edx, eax
        lea    esi, [esi + edx*8]
        test    esi, esi
        jne    L_7b13
L_7bcc:
        mov    eax, dword ptr [g_008b289c]
        mov    esi, dword ptr [g_008b2894]
        mov    edx, dword ptr [g_008b28a0]
        mov    ecx, dword ptr [g_008b2898]
        shr    eax, 0xa
        mov    dword ptr [g_008b289c], eax
        mov    eax, dword ptr [g_008b2888]
        shr    esi, 0xa
        mov    dword ptr [g_008a99a8], eax
        mov    eax, edi
        pop    edi
        mov    dword ptr [g_008b2894], esi
        shr    edx, 0xa
        shr    ecx, 0xa
        pop    esi
        mov    dword ptr [g_008b28a0], edx
        mov    dword ptr [g_008b2898], ecx
        pop    ebp
        ret    
    }
}
