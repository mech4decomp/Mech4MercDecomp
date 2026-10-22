/*
 * FUN_007479d0 (extent 0x7479d0-0x747abd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008b2804;
extern int    g_008b2838;
extern int    g_008b287c;
extern void __cdecl FUN_007357d0(void);
extern void __cdecl FUN_00735e30(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00749190(void);
extern void __cdecl FUN_007492a0(void);
extern void __cdecl FUN_0075c060(void);

__declspec(naked) void FUN_007479d0(void)
{
    __asm {
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008b287c]
        test    esi, esi
        je    L_7a20
        mov    bl, byte ptr [esp + 0xc]
L_79e0:
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        je    L_79ee
        mov    ecx, esi
        call    FUN_00749190
L_79ee:
        test    bl, bl
        je    L_7a00
        mov    eax, dword ptr [esi + 0xc]
        test    eax, eax
        je    L_7a00
        mov    ecx, esi
        call    FUN_00735e30
L_7a00:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_7a20
        and    eax, 0xffff
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    esi, [esi + ecx*8]
        test    esi, esi
        jne    L_79e0
L_7a20:
        call    FUN_007492a0
        mov    eax, dword ptr [g_008b2838]
        test    eax, eax
        pop    esi
        pop    ebx
        je    L_7a3a
        mov    ecx, 0x8b2830
        call    FUN_0075c060
L_7a3a:
        mov    eax, dword ptr [g_008b2804]
        test    eax, eax
        je    L_7a4d
        mov    ecx, 0x8b27f8
        call    FUN_00735e30
L_7a4d:
        ret    4
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
    }
}
