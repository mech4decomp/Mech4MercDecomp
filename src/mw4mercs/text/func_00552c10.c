/*
 * FUN_00552c10 (2147 B) — terrain/geometry object setup/update (__thiscall,
 * RET 0x8). Builds a player.abl path string (via _mbsrchr IAT + repne
 * scasb/rep movsd copies), loads a script, sets up three "site" objects
 * (FUN_004e1800(0/1/2)) with FPU trig (fptan/fpatan) heading/pitch math,
 * and calls a chain of helpers ending in FUN_0054fdb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dd234;   /* 0x007dd234 */
extern int g_007dab44;   /* 0x007dab44 */
extern int g_007dab40;   /* 0x007dab40 */
extern short g_007db0ac; /* 0x007db0ac */
extern short g_007db0ae; /* 0x007db0ae */
extern int g_0076b2a0;   /* 0x0076b2a0 (IAT _mbsrchr) */
extern float g_0076d070; /* 0x0076d070 */
extern float g_0076d048; /* 0x0076d048 */
extern int g_007dc6e0;   /* 0x007dc6e0 */
extern int g_007f1f84;   /* 0x007f1f84 */
extern int g_007b8d88;   /* 0x007b8d88 */
extern int g_007b8d8c;   /* 0x007b8d8c */
extern int g_007b8d90;   /* 0x007b8d90 */
extern float g_007b220c; /* 0x007b220c */
extern float g_0077d0fc; /* 0x0077d0fc */
extern int g_007db090;   /* 0x007db090 */

extern void __cdecl FUN_00559b60(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00553610(void);
extern void __cdecl FUN_0054bba0(void);
extern void __cdecl FUN_006270d0(void);
extern void __cdecl FUN_00630900(void);
extern void __cdecl FUN_0063b9c0(void);
extern void __cdecl FUN_005537f0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_00553480(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_005c0080(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_004e1800(void);
extern void __cdecl FUN_004c4140(void);
extern void __cdecl FUN_004c40e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005f8ed0(void);
extern void __cdecl FUN_00548f40(void);
extern void __cdecl FUN_00557230(void);
extern void __cdecl FUN_00557f60(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_006f17b0(void);
extern void __cdecl FUN_0054fdb0(void);

__declspec(naked) void FUN_00552c10(void)
{
    __asm {
        sub     esp, 0x2b8
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        mov     dword ptr [ebp + 0x368], 0x3
        call    FUN_00559b60
        mov     eax, dword ptr [g_007dd234]
        mov     esi, dword ptr [esp + 0x2cc]
        push    eax
        mov     dword ptr [ebp + 0x384], esi
        call    FUN_006f4950
        push    ecx
        mov     ecx, esp
        push    0x77d12c
        call    FUN_00412570
        mov     ecx, ebp
        call    FUN_00553610
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [ebp + 0x58c], eax
        cmp     dword ptr [ecx], 0x4bf
        mov     dword ptr [esi + 0x3b0], ebp
        jnz     L552c75
        mov     ecx, ebp
        call    FUN_0054bba0
L552c75:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ebp + 0x55c]
        mov     ebx, 0x0
        jz      L552d26
        cmp     ecx, ebx
        jnz     L552d2a
        cmp     byte ptr [ebp + 0x5ac], bl
        push    0x1
        jnz     L552d10
        mov     ecx, dword ptr [eax]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_006270d0
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x50]
        call    FUN_00630900
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x54]
        call    FUN_0063b9c0
        mov     byte ptr [ebp + 0x32d], 0x1
        mov     byte ptr [ebp + 0x330], 0x1
        jmp     L552d47
L552d10:
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_006270d0
        mov     byte ptr [ebp + 0x32d], bl
        jmp     L552d41
L552d26:
        cmp     ecx, ebx
        jz      L552d53
L552d2a:
        mov     ecx, dword ptr [eax]
        push    0x1
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_006270d0
        mov     byte ptr [ebp + 0x32d], 0x1
L552d41:
        mov     byte ptr [ebp + 0x330], bl
L552d47:
        mov     byte ptr [ebp + 0x32e], bl
        mov     byte ptr [ebp + 0x32f], bl
L552d53:
        mov     ecx, ebp
        call    FUN_005537f0
        call    FUN_006f49a0
        mov     edx, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [edx + 0x4]
        mov     cx, word ptr [eax + 0x88]
        mov     dword ptr [esp + 0x34], eax
        add     eax, 0x88
        cmp     cx, word ptr [g_007db0ac]
        jnz     L552d92
        mov     dx, word ptr [eax + 0x2]
        cmp     dx, word ptr [g_007db0ae]
        jz      L553040
L552d92:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x17], bl
        jnz     L553040
        cmp     byte ptr [ebp + 0x5ac], bl
        jnz     L553040
        push    eax
        call    FUN_004da920
        mov     ecx, dword ptr [ebp + 0x2d0]
        add     esp, 0x4
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x18], eax
        jnz     L553040
        cmp     eax, 0x570
        jz      L553040
        cmp     dword ptr [esp + 0x2d0], ebx
        jz      L553040
        mov     edx, dword ptr [g_007dab44]
        xor     eax, eax
        mov     ecx, 0xa
        lea     edi, [esp + 0x1a0]
        rep     stosd
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax + 0x20]
        xor     eax, 0x85739531
        lea     edi, [eax + 0x1f8]
        push    0x5c
        push    edi
        call    dword ptr [g_0076b2a0]
        mov     edx, eax
        add     esp, 0x8
        cmp     edx, ebx
        jnz     L552e55
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77d118
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     edx, [esp + 0x1c8]
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        jmp     L552eb0
L552e55:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     byte ptr [edx], bl
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [esp + 0x1c8]
        mov     dword ptr [esp + 0x1c], esi
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1c]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x77d10c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     byte ptr [edx], 0x5c
        mov     esi, edi
        lea     edx, [esp + 0x1c8]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne   scasb
        mov     ecx, edx
        dec     edi
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, edx
L552eb0:
        mov     eax, dword ptr [esp + 0x2d0]
        and     ecx, 0x3
        push    -0x1
        rep     movsb
        mov     ecx, dword ptr [eax + 0x30]
        mov     esi, dword ptr [esp + 0x2d0]
        mov     edx, dword ptr [esi + 0xd8]
        mov     eax, dword ptr [esp + 0x38]
        push    ebx
        and     ecx, 0xffffff
        add     ecx, 0xb000000
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    0x2
        push    ebx
        add     edx, 0x80
        push    edx
        add     eax, 0x88
        push    eax
        push    ebx
        push    ecx
        push    ebx
        push    0x2
        push    0x140
        lea     ecx, [esp + 0x90]
        call    FUN_00553480
        mov     edx, dword ptr [esi + 0x30]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x1c8]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esp + 0xc4], edx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0xc8]
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, 0xa
        lea     esi, [esp + 0x1a0]
        lea     edi, [esp + 0x148]
        rep     movsd
        mov     ecx, dword ptr [esp + 0x60]
        mov     eax, 0x64
        push    ebx
        push    ecx
        lea     edx, [esp + 0x68]
        push    edx
        lea     ecx, [esp + 0x4c]
        mov     dword ptr [esp + 0x17c], 0xc8
        mov     dword ptr [esp + 0x180], eax
        mov     dword ptr [esp + 0x184], eax
        mov     dword ptr [esp + 0x188], ebx
        mov     dword ptr [esp + 0x18c], eax
        mov     dword ptr [esp + 0x190], 0x2
        mov     dword ptr [esp + 0x194], eax
        mov     dword ptr [esp + 0x198], eax
        mov     dword ptr [esp + 0x19c], eax
        mov     dword ptr [esp + 0x1a0], ebx
        mov     dword ptr [esp + 0x1a4], ebx
        mov     dword ptr [esp + 0x1a8], ebx
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    ebx
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        add     esp, 0xc
        mov     esi, eax
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0x1c]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        mov     dword ptr [ebp + 0x2d0], esi
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [esi]
        and     eax, 0xffffffef
        or      eax, 0x8
        push    0x1
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], eax
        call    dword ptr [edx + 0x48]
        mov     ecx, esi
        call    FUN_005c0080
        lea     ecx, [esp + 0x40]
        call    FUN_0041e710
L553040:
        mov     ecx, dword ptr [g_007dc6e0]
        push    ebx
        call    FUN_004e1800
        cmp     eax, ebx
        jz      L55307c
        mov     eax, dword ptr [eax + 0x24]
        mov     dword ptr [ebp + 0x6b0], eax
        mov     dword ptr [eax + 0x2d8], ebx
        mov     dword ptr [eax + 0x2dc], 0x3f800000
        mov     dword ptr [eax + 0x2e0], ebx
        mov     dword ptr [eax + 0x2e4], ebx
        mov     byte ptr [eax + 0x2e8], 0x1
L55307c:
        mov     ecx, dword ptr [g_007dc6e0]
        push    0x1
        call    FUN_004e1800
        cmp     eax, ebx
        mov     edi, 0x3e19999a
        jz      L5531e5
        mov     esi, dword ptr [eax + 0x24]
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x38]
        push    edx
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp + 0x6b4], esi
        call    FUN_004c4140
        mov     eax, dword ptr [g_007dc6e0]
        cmp     dword ptr [eax + 0x4c], ebx
        mov     dword ptr [ebp + 0x348], edi
        mov     dword ptr [ebp + 0x34c], edi
        mov     dword ptr [ebp + 0x350], edi
        mov     dword ptr [ebp + 0x354], edi
        jz      L5531e5
        mov     eax, dword ptr [eax + 0x4c]
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x24]
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_004c4140
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [g_0076d070]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        fptan
        fstp    st(0)
        fmul    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fpatan
        fld     dword ptr [esi + 0x2c8]
        fsub    dword ptr [g_0076d070]
        fmul    dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    st(0), st(1)
        fstp    dword ptr [ebp + 0x348]
        fld     dword ptr [esi + 0x2d0]
        fsub    dword ptr [g_0076d070]
        fmul    dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    st(0), st(1)
        fstp    dword ptr [ebp + 0x34c]
        fstp    st(0)
        fld     st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esi + 0x2cc]
        fsub    dword ptr [g_0076d070]
        fmul    st(0), st(1)
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    dword ptr [esp + 0x14]
        fstp    dword ptr [ebp + 0x350]
        fld     dword ptr [esi + 0x2d4]
        fsub    dword ptr [g_0076d070]
        fmulp   st(1), st(0)
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x14], ecx
        fstp    dword ptr [ebp + 0x354]
        fld     dword ptr [esp + 0x24]
        lea     eax, [esp + 0x14]
        fsub    dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x38]
        fmul    dword ptr [g_0076d048]
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, esi
        call    FUN_004c40e0
L5531e5:
        mov     ecx, dword ptr [g_007dc6e0]
        push    0x2
        call    FUN_004e1800
        cmp     eax, ebx
        jz      L553349
        mov     esi, dword ptr [eax + 0x24]
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        mov     ecx, esi
        mov     dword ptr [ebp + 0x6b8], esi
        call    FUN_004c4140
        mov     eax, dword ptr [g_007dc6e0]
        cmp     dword ptr [eax + 0x4c], ebx
        mov     dword ptr [ebp + 0x358], edi
        mov     dword ptr [ebp + 0x35c], edi
        mov     dword ptr [ebp + 0x360], edi
        mov     dword ptr [ebp + 0x364], edi
        jz      L553349
        mov     eax, dword ptr [eax + 0x4c]
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x40]
        push    ecx
        mov     ecx, dword ptr [eax + 0x24]
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_004c4140
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [g_0076d070]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x28], ecx
        fptan
        push    edx
        fstp    st(0)
        fmul    dword ptr [esp + 0x18]
        fst     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        fpatan
        fld     dword ptr [esi + 0x2c8]
        fsub    dword ptr [g_0076d070]
        fmul    dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    st(0), st(1)
        fstp    dword ptr [ebp + 0x358]
        fld     dword ptr [esi + 0x2d0]
        fsub    dword ptr [g_0076d070]
        fmul    dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    st(0), st(1)
        fstp    dword ptr [ebp + 0x35c]
        fstp    st(0)
        fld     st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esi + 0x2cc]
        fsub    dword ptr [g_0076d070]
        fmul    st(0), st(1)
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    dword ptr [esp + 0x1c]
        fstp    dword ptr [ebp + 0x360]
        fld     dword ptr [esi + 0x2d4]
        fsub    dword ptr [g_0076d070]
        fmulp   st(1), st(0)
        fadd    st(0), st(0)
        fld     dword ptr [esp + 0x18]
        fpatan
        fdiv    dword ptr [esp + 0x1c]
        fstp    dword ptr [ebp + 0x364]
        fld     dword ptr [esp + 0x24]
        lea     eax, [esp + 0x2c]
        fsub    dword ptr [esp + 0x20]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        fmul    dword ptr [g_0076d048]
        fadd    dword ptr [esp + 0x44]
        fstp    dword ptr [esp]
        push    ecx
        mov     ecx, esi
        call    FUN_004c40e0
L553349:
        mov     ecx, dword ptr [ebp + 0x384]
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0x48]
        mov     eax, dword ptr [g_007f1f84]
        mov     esi, dword ptr [ebp + 0x384]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        push    0x77d100
        mov     ecx, esi
        mov     byte ptr [ebp + 0x339], al
        call    FUN_005f8ed0
        mov     dword ptr [ebp + 0x33c], eax
        cmp     byte ptr [ebp + 0x5ac], bl
        jnz     L5533d8
        mov     ecx, ebp
        call    FUN_00548f40
        mov     eax, dword ptr [ebp + 0x368]
        push    eax
        mov     ecx, ebp
        call    FUN_00557230
        mov     ecx, dword ptr [ebp + 0x564]
        push    ebx
        push    ecx
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x338], 0x1
        call    FUN_00557f60
        mov     edx, dword ptr [g_007b8d88]
        mov     eax, dword ptr [g_007b8d8c]
        mov     ecx, dword ptr [g_007b8d90]
        mov     dword ptr [ebp + 0x674], edx
        mov     dword ptr [ebp + 0x678], eax
        mov     dword ptr [ebp + 0x67c], ecx
L5533d8:
        cmp     byte ptr [ebp + 0x339], bl
        mov     dword ptr [ebp + 0x324], ebx
        mov     dword ptr [ebp + 0x328], ebx
        mov     dword ptr [ebp + 0x334], ebx
        jz      L553436
        mov     eax, dword ptr [ebp + 0x384]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [esp + 0x34]
        fld     dword ptr [edx + 0x90]
        mov     ecx, eax
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L553436
        fld     dword ptr [ecx + 0x2d0]
        fmul    dword ptr [g_0077d0fc]
        fadd    dword ptr [edx + 0x90]
        fstp    dword ptr [ebp + 0x334]
L553436:
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [ebp + 0x64c]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x24]
        push    ebx
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_006f17b0
        mov     ecx, ebp
        call    FUN_0054fdb0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x2b8
        ret     0x8
    }
}
