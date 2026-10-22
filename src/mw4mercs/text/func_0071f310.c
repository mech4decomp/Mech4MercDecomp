/*
 * FUN_0071f310 (extent 0x71f310-0x7205e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b144;
extern int    g_0076b20c;
extern int    g_0076b258;
extern int    g_0076b368;
extern int    g_0076b420;
extern int    g_0076b478;
extern float  g_0076c5b0;
extern float  g_007a4d60;
extern int    g_007b6ed4;
extern int    g_007b6fac;
extern int    g_0084988c;
extern int    g_00849890;
extern int    g_00849894;
extern int    g_00849898;
extern int    g_0084989c;
extern int    g_008498a0;
extern int    g_008498a4;
extern int    g_00849ea8;
extern int    g_00858924;
extern int    g_00859278;
extern char   g_00859afe;
extern int    g_00859b94;
extern char   g_0085af74;
extern int    g_0085b4a0;
extern float  g_008b2728;
extern float  g_008b273c;
extern float  g_008b2740;
extern float  g_008b2744;
extern float  g_008b2748;
extern float  g_008b274c;
extern float  g_008b2750;
extern float  g_008b2754;
extern float  g_008b2758;
extern float  g_008b275c;
extern float  g_008b2760;
extern float  g_008b2764;
extern float  g_008b2768;
extern void __cdecl FUN_006fa880(void);
extern void __cdecl FUN_006fa8f0(void);
extern void __cdecl FUN_00704a80(void);
extern void __cdecl FUN_0071ddf0(void);
extern void __cdecl FUN_0071dec0(void);
extern void __cdecl FUN_0071df50(void);
extern void __cdecl FUN_0071e010(void);
extern void __cdecl FUN_0071e090(void);
extern void __cdecl FUN_0071e8f0(void);
extern void __cdecl FUN_0071edd0(void);
extern void __cdecl FUN_0071f230(void);
extern void __cdecl FUN_0071f2d0(void);
extern void __cdecl FUN_00738a40(void);
extern void __cdecl FUN_007461b0(void);
extern void __cdecl FUN_00754410(void);
extern void __cdecl FUN_007551d0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0071f310(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    -1
        push    0x7a4f70
        push    0x75ded2
        mov    eax, dword ptr fs:[0]
        push    eax
        mov    dword ptr fs:[0], esp
        sub    esp, 0x1e4
        push    ebx
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x18], esp
        mov    dword ptr [g_00849ea8], 1
        wait    
        mov    dword ptr [ebp - 4], 0
        lea    eax, [ebp - 0x168]
        push    eax
        call    dword ptr [g_0076b144]
        lea    ecx, [ebp - 0x134]
        push    ecx
        push    0x104
        call    dword ptr [g_0076b258]
        mov    dword ptr [ebp - 0x1c], 0x10
        lea    edx, [ebp - 0x1c]
        push    edx
        lea    eax, [ebp - 0x2c]
        push    eax
        call    dword ptr [g_0076b20c]
        mov    ecx, 0x7a4f48
        test    ecx, ecx
        je    L_f3e6
        mov    edi, ecx
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x170], eax
        mov    ebx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f3b6
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x170], eax
L_f3b6:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4f48
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
        jmp    L_f3e9
L_f3e6:
        mov    ebx, dword ptr [ebp + 8]
L_f3e9:
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_f5e0
        mov    eax, 0x7a4f30
        test    eax, eax
        je    L_f458
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x174], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f42a
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x174], eax
L_f42a:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4f30
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f458:
        mov    eax, 0x7a4f10
        test    eax, eax
        je    L_f4ba
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x178], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f48c
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x178], eax
L_f48c:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4f10
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f4ba:
        mov    eax, 0x85b260
        test    eax, eax
        je    L_f51c
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x17c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f4ee
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x17c], eax
L_f4ee:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x85b260
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f51c:
        mov    eax, 0x7a4ef0
        test    eax, eax
        je    L_f57e
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x180], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f550
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x180], eax
L_f550:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4ef0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f57e:
        mov    eax, 0x85b440
        test    eax, eax
        je    L_f5e0
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x184], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f5b2
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x184], eax
L_f5b2:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x85b440
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f5e0:
        mov    eax, 0x7a4ed0
        test    eax, eax
        je    L_f642
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x188], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f614
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x188], eax
L_f614:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4ed0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f642:
        call    dword ptr [g_0076b368]
        mov    esi, dword ptr [eax]
        mov    dword ptr [ebp - 0x190], esi
        test    esi, esi
        je    L_f6a8
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x18c], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_f67f
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x18c], eax
L_f67f:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f6a8:
        mov    eax, 0x7a4eb0
        test    eax, eax
        je    L_f70a
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x194], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f6dc
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x194], eax
L_f6dc:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4eb0
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f70a:
        call    FUN_0071e090
        mov    esi, eax
        mov    dword ptr [ebp - 0x19c], esi
        test    esi, esi
        je    L_f76f
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x198], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_f746
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x198], eax
L_f746:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f76f:
        mov    eax, 0x7a4e90
        test    eax, eax
        je    L_f7d1
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1a0], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f7a3
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1a0], eax
L_f7a3:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4e90
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f7d1:
        mov    esi, dword ptr [g_007b6fac]
        mov    dword ptr [ebp - 0x1a8], esi
        test    esi, esi
        je    L_f835
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1a4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_f80c
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1a4], eax
L_f80c:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f835:
        mov    eax, 0x7a4e70
        test    eax, eax
        je    L_f897
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1ac], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f869
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1ac], eax
L_f869:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4e70
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f897:
        lea    eax, [ebp - 0x134]
        test    eax, eax
        je    L_f8ff
        lea    edi, [ebp - 0x134]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1b0], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f8d0
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1b0], eax
L_f8d0:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x134]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f8ff:
        mov    eax, 0x7a4e50
        test    eax, eax
        je    L_f961
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1b4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f933
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1b4], eax
L_f933:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4e50
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f961:
        call    FUN_0071e010
        mov    esi, eax
        mov    dword ptr [ebp - 0x1bc], esi
        test    esi, esi
        je    L_f9c6
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1b8], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_f99d
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1b8], eax
L_f99d:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_f9c6:
        mov    eax, 0x7a4e30
        test    eax, eax
        je    L_fa28
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1c0], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_f9fa
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1c0], eax
L_f9fa:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4e30
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fa28:
        mov    eax, 0x7b70c8
        test    eax, eax
        je    L_fa8a
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1c4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fa5c
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1c4], eax
L_fa5c:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7b70c8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fa8a:
        cmp    dword ptr [g_00859278], 2
        je    L_fbb1
        mov    al, byte ptr [g_00859afe]
        test    al, al
        je    L_faea
        mov    eax, 0x7a4e08
        test    eax, eax
        je    L_fbb1
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1c8], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fad8
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1c8], eax
L_fad8:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4e08
        jmp    L_fb90
L_faea:
        mov    eax, 0x7a4de8
        test    eax, eax
        je    L_fb4c
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1cc], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fb1e
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1cc], eax
L_fb1e:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4de8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fb4c:
        call    FUN_0071f2d0
        mov    esi, eax
        mov    dword ptr [ebp - 0x1d4], esi
        test    esi, esi
        je    L_fbb1
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1d0], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_fb88
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1d0], eax
L_fb88:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
L_fb90:
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fbb1:
        mov    eax, 0x7a4dc8
        test    eax, eax
        je    L_fc13
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1d8], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fbe5
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1d8], eax
L_fbe5:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4dc8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fc13:
        call    FUN_0071f230
        mov    esi, eax
        mov    dword ptr [ebp - 0x1e0], esi
        test    esi, esi
        je    L_fc78
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1dc], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_fc4f
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1dc], eax
L_fc4f:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fc78:
        mov    eax, 0x7a4da8
        test    eax, eax
        je    L_fcda
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1e4], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fcac
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1e4], eax
L_fcac:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4da8
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fcda:
        lea    eax, [ebp - 0x2c]
        test    eax, eax
        je    L_fd39
        lea    edi, [ebp - 0x2c]
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1e8], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fd0d
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1e8], eax
L_fd0d:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        lea    esi, [ebp - 0x2c]
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fd39:
        mov    eax, 0x7a4d88
        test    eax, eax
        je    L_fd9b
        mov    edi, eax
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1ec], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    esi, [edx + eax]
        cmp    esi, ecx
        jle    L_fd6d
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1ec], eax
L_fd6d:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        mov    esi, 0x7a4d88
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fd9b:
        call    FUN_007461b0
        mov    esi, eax
        mov    dword ptr [ebp - 0x1f4], esi
        test    esi, esi
        je    L_fe00
        mov    edi, esi
        or    ecx, 0xffffffff
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    eax, ecx
        inc    eax
        mov    dword ptr [ebp - 0x1f0], eax
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        lea    edi, [edx + eax]
        cmp    edi, ecx
        jle    L_fdd7
        sub    ecx, edx
        mov    eax, ecx
        mov    dword ptr [ebp - 0x1f0], eax
L_fdd7:
        mov    edx, dword ptr [ebx + 8]
        mov    edi, dword ptr [ebx + 4]
        mov    ecx, eax
        add    edi, edx
        mov    edx, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, edx
        and    ecx, 3
        rep movsb
        mov    ecx, dword ptr [ebx + 4]
        lea    eax, [ecx + eax - 1]
        mov    dword ptr [ebx + 4], eax
        mov    ecx, dword ptr [ebx + 8]
        mov    byte ptr [eax + ecx], 0
L_fe00:
        push    0x8b26a4
        push    0x7a4d68
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        fld    dword ptr [g_008b2728]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_01c5
        fld    dword ptr [g_008b2728]
        fmul    qword ptr [g_007a4d60]
        push    0x7a4d58
        fld    dword ptr [g_008b2760]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2760]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b2764]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2764]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b2768]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2768]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d24
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        fld    dword ptr [g_008b2728]
        fmul    qword ptr [g_007a4d60]
        push    0x7a4d58
        fld    dword ptr [g_008b2754]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2754]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b2758]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2758]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b275c]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b275c]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d04
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        fld    dword ptr [g_008b2748]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_00d4
        fld    dword ptr [g_008b2728]
        fmul    qword ptr [g_007a4d60]
        push    0x7a4d58
        fld    dword ptr [g_008b2748]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2748]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b274c]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b274c]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b2750]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2750]
        call    FUN_0075db4a
        push    eax
        push    0x7a4ce4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
L_00d4:
        fld    dword ptr [g_008b273c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_01c5
        fld    dword ptr [g_008b2728]
        fmul    qword ptr [g_007a4d60]
        push    0x7a4d58
        fld    dword ptr [g_008b273c]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b273c]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b2740]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2740]
        call    FUN_0075db4a
        push    eax
        push    0x7a4d44
        fld    dword ptr [g_008b2744]
        fdivr st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    0x7a4d4c
        fld    dword ptr [g_008b2744]
        call    FUN_0075db4a
        push    eax
        push    0x7a4cc4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
L_01c5:
        push    0
        push    0
        push    0
        push    7
        call    FUN_00704a80
        push    eax
        push    0x7a4ca4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        call    FUN_00738a40
        push    eax
        push    0x7a4c84
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        call    FUN_0071dec0
        push    eax
        push    0x7a4c64
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    0
        call    FUN_0071df50
        push    eax
        push    0x7a4c44
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        call    FUN_0071df50
        push    eax
        push    0x7a4c24
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    eax, dword ptr [ebp - 0x160]
        push    eax
        call    FUN_0071ddf0
        push    eax
        push    0x7a4c04
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    ecx, dword ptr [ebp - 0x15c]
        push    ecx
        call    FUN_0071ddf0
        push    eax
        push    0x7a4be4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    edx, dword ptr [ebp - 0x158]
        push    edx
        call    FUN_0071ddf0
        push    eax
        push    0x7a4bc4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    eax, dword ptr [ebp - 0x154]
        push    eax
        call    FUN_0071ddf0
        push    eax
        push    0x7a4ba4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    ecx, dword ptr [ebp - 0x150]
        push    ecx
        call    FUN_0071ddf0
        push    eax
        push    0x7a4b84
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    1
        mov    edx, dword ptr [ebp - 0x14c]
        push    edx
        call    FUN_0071ddf0
        push    eax
        push    0x7a4b64
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [g_00859b94]
        test    eax, eax
        je    L_0354
        mov    dword ptr [ebp - 0x16c], esp
        push    0x7a4b5c
        mov    eax, dword ptr [g_00859b94]
        sub    eax, dword ptr [ebp - 0x16c]
        push    eax
        push    0x7a4b3c
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
L_0354:
        push    0x7a4b38
        mov    ecx, dword ptr [ebp - 0x164]
        push    ecx
        push    0x7a4b18
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        push    0x7a4b14
        push    0
        push    0
        push    0
        push    0x29
        call    FUN_00704a80
        push    eax
        push    0x76cb8c
        push    0
        push    0
        push    0
        push    0x28
        call    FUN_00704a80
        shr    eax, 0x10
        push    eax
        push    0x774288
        push    0
        push    0
        push    0
        push    0x28
        call    FUN_00704a80
        and    eax, 0xffff
        push    eax
        push    0x7a4af4
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    byte ptr [ebp - 0x148], 0
        mov    eax, dword ptr [g_00849894]
        test    eax, eax
        je    L_0417
        push    eax
        push    0x7a4ae4
        lea    edx, [ebp - 0x148]
        push    edx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
L_0417:
        mov    eax, dword ptr [g_0084988c]
        test    eax, eax
        mov    edx, 0x7a4ad4
        je    L_042a
        mov    edx, 0x76b768
L_042a:
        mov    eax, dword ptr [g_00849890]
        test    eax, eax
        mov    ecx, 0x7a4ac4
        jne    L_043d
        mov    ecx, 0x7a4ab8
L_043d:
        push    edx
        push    0x77e7d8
        neg    eax
        sbb    eax, eax
        and    eax, dword ptr [g_008498a0]
        mov    edx, eax
        shl    edx, 4
        add    edx, eax
        lea    eax, [eax + edx*8]
        lea    eax, [eax + eax*2]
        lea    edx, [eax*8 + 0x8ac070]
        push    edx
        push    0x78852c
        lea    eax, [ebp - 0x148]
        push    eax
        mov    edx, dword ptr [g_00849898]
        push    edx
        push    0x7a3d94
        mov    eax, dword ptr [g_0084989c]
        push    eax
        push    0x7a3d94
        mov    edx, dword ptr [g_008498a4]
        push    edx
        push    ecx
        push    0x7a4a98
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa8f0
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    al, byte ptr [g_0085af74]
        test    al, al
        mov    eax, 0x770d38
        jne    L_04f9
        mov    eax, 0x770d24
L_04f9:
        push    eax
        push    0x7a4a78
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        mov    eax, dword ptr [g_00858924]
        push    eax
        push    0x7a4a58
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        call    FUN_006fa880
        push    0x43
        call    dword ptr [g_0076b478]
        test    eax, eax
        je    L_053e
        push    0x7a4a44
        mov    ecx, ebx
        call    FUN_006fa880
L_053e:
        call    FUN_00754410
        mov    dword ptr [ebp - 0x30], eax
        cmp    byte ptr [eax], 0
        je    L_055c
        push    eax
        push    0x7a4a24
        mov    ecx, ebx
        call    FUN_006fa880
        mov    ecx, eax
        jmp    L_0563
L_055c:
        push    0x7a49fc
        mov    ecx, ebx
L_0563:
        call    FUN_006fa880
        push    0x77a078
        mov    ecx, ebx
        call    FUN_006fa880
        mov    dword ptr [g_007b6ed4], 0x7a49e8
        push    ebx
        call    FUN_0071edd0
        mov    dword ptr [g_007b6ed4], 0x7a49dc
        push    ebx
        call    FUN_0071e8f0
        mov    dword ptr [g_007b6ed4], 0x7a49cc
        push    ebx
        call    FUN_007551d0
        wait    
        jmp    L_05bd
        mov    eax, 1
        ret    
        mov    esp, dword ptr [ebp - 0x18]
        push    0x7a49a4
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_006fa880
L_05bd:
        mov    dword ptr [ebp - 4], 0xffffffff
        mov    dword ptr [g_00849ea8], 0
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr fs:[0], ecx
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
    }
}
