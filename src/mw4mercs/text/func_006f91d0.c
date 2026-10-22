/*
 * FUN_006F91D0 (5797 B) - GameOS error/log output function.
 *
 * Called by FUN_006FAB90 (assert) and FUN_006BFA50 (error_log). Builds an
 * error report string (message + stack walk + system details), shows a
 * dialog, and handles the user's response (continue / exit / debugger).
 *
 * __stdcall (RET 0x8, 2 params: mode flags + message string).
 * CFLAGS: /O1
 */

#include <windows.h>

/* ---- data globals (dwords) ---- */
extern int DAT_00849eb8;
extern int DAT_00858c08;
extern int DAT_00849c40;
extern int DAT_007b6ed4;
extern int DAT_008498ac;
extern int DAT_008498b0;
extern int DAT_008498b8;
extern int DAT_00849b88;
extern int DAT_008aa718;
extern int DAT_008496e0;
extern int DAT_00849ebc;
extern int DAT_007b6ed8;
extern int DAT_008495dc;
extern int DAT_007b6edc;
extern int DAT_008494d8;
extern int DAT_0087dc00;
extern int DAT_0087dbf8;
extern int DAT_008493d8;
extern int DAT_0087dbfc;
extern int DAT_00849884;
extern int DAT_00849888;
extern int DAT_0085894c;
extern int DAT_0085a254;
extern int DAT_00858940;
extern int DAT_0085a1f0;
extern int DAT_00858944;
extern int DAT_00858948;
extern int DAT_00858bf8;
extern int DAT_00858950;
extern int DAT_0087c5a0;
extern int DAT_007b73cc;
extern int DAT_00849eb0;
extern int DAT_008aaa00;
extern int DAT_00858ac0;
extern int DAT_0087dbf0;
extern int DAT_0087dbf4;
extern int DAT_00849308;
extern int DAT_00896cb8;
extern int DAT_00858c04;
extern int DAT_008aaf44;
extern int DAT_007b70e0;
extern int DAT_008498a0;
extern int DAT_00849894;
extern int DAT_0084988c;
extern int DAT_008498a4;
extern int DAT_00849890;
extern int DAT_0084989c;
extern int DAT_00849898;
extern int DAT_00849784;   /* FPU save area (fnsave/frstor) */
extern int DAT_008498b4;

/* ---- byte globals ---- */
extern char DAT_0087dd0a;
extern char DAT_008aa9f4;
extern char DAT_00858954;
extern char DAT_00859afd;
extern char DAT_0087dd09;
extern char DAT_0087dd0b;

/* ---- import thunks (call dword ptr [addr]) ---- */
extern int *IAT_0076b598;   /* MessageBoxA */
extern int *IAT_0076b154;   /* FatalExit */
extern int *IAT_0076b38c;   /* exit */
extern int *IAT_0076b4f4;   /* ShowCursor */
extern int *IAT_0076b4f8;   /* wsprintfA */
extern int *IAT_0076b420;   /* sprintf */
extern int *IAT_0076b294;   /* malloc */
extern int *IAT_0076b2d4;   /* _itoa */
extern int *IAT_0076b158;   /* GetCurrentThreadId */
extern int *IAT_0076b2d0;   /* free */
extern int *IAT_0076b0fc;   /* OutputDebugStringA */

/* ---- called functions (rel32) ---- */
extern void __cdecl FUN_00737cc0(void);
extern void __cdecl FUN_0070c960(void);
extern void __cdecl FUN_00736b90(void *);
extern void __cdecl FUN_00736bf0(void *);
extern void __cdecl FUN_00736cd0(void *, void *);
extern void __cdecl FUN_00736c50(void *, void *, void *);
extern void __cdecl FUN_0071ddd0(void *);
extern void __cdecl FUN_00721790(void *, void *, void *);
extern void __cdecl FUN_00721280(void *, void *);
extern void __cdecl FUN_00720a00(void *);
extern void __cdecl FUN_0071f310(void *);
extern void __cdecl FUN_007218f0(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_00733570(void);
extern void __cdecl FUN_007335c0(void);
extern void __cdecl FUN_0073a250(void);
extern void __cdecl FUN_0073a2e0(void);
extern void __cdecl FUN_0070d1f0(void);
extern void __cdecl FUN_00719b10(void *);
extern void __cdecl FUN_00722130(void *);
extern void __cdecl FUN_0070d3f0(void *);
extern void __cdecl FUN_00722470(void);
extern void __cdecl FUN_007301e0(void);
extern void __cdecl FUN_00730610(void);
extern void __cdecl FUN_007216b0(void);
extern void __cdecl FUN_006f3c80(int, void *);
extern void __cdecl FUN_00707dd0(void);
extern void __cdecl FUN_00707e00(void);
extern void __cdecl FUN_0070abe0(void);
extern void __cdecl FUN_00709120(void);
extern void *__fastcall FUN_006fa880(void *);
extern void *__fastcall FUN_006fa8f0(int);

__declspec(naked) void __stdcall FUN_006f91d0(int mode, const char *msg)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x158
        mov     al, byte ptr [DAT_0087dd0a]
        test    al, al
        push    ebx
        push    esi
        push    edi
        jnz     l_ret0_2
        mov     eax, dword ptr [DAT_00849eb8]
        inc     eax
        mov     dword ptr [DAT_00849eb8], eax
        mov     eax, dword ptr [DAT_00858c08]
        mov     edi, dword ptr [ebp+0xc]
        mov     ebx, dword ptr [IAT_0076b598]
        mov     esi, 0x5
        cmp     eax, esi
        jnz     l_921f
        push    0x0
        push    0x7a0110
        push    edi
        push    0x0
        call    ebx
        push    0x0
        call    dword ptr [IAT_0076b154]
    l_921f:
        mov     eax, dword ptr [DAT_00858c08]
        test    eax, eax
        jnz     l_9242
        push    0x0
        push    0x7a00f0
        push    edi
        push    0x0
        call    ebx
        push    0x1
        mov     dword ptr [DAT_00858c08], esi
        call    dword ptr [IAT_0076b38c]
    l_9242:
        cmp     dword ptr [DAT_00849eb8], esi
        jl      l_9258
        push    0x1
        mov     dword ptr [DAT_00858c08], esi
        call    dword ptr [IAT_0076b38c]
    l_9258:
        cmp     dword ptr [DAT_00849eb8], 0x4
        jnz     l_9274
        call    FUN_00737cc0
        push    0x1
        mov     dword ptr [DAT_00858c08], esi
        call    dword ptr [IAT_0076b38c]
    l_9274:
        cmp     dword ptr [DAT_00849eb8], 0x3
        jnz     l_9282
        call    FUN_0070c960
    l_9282:
        cmp     dword ptr [DAT_00849eb8], 0x2
        mov     esi, dword ptr [IAT_0076b4f4]
        jnz     l_933b
        mov     al, byte ptr [DAT_0087dd0a]
        test    al, al
        jnz     l_933b
        cmp     dword ptr [DAT_00849eb8], 0x1
        jnz     l_92d4
        test     dword ptr [DAT_0087dc00], 0x30e
        jz      l_92d4
        mov     ecx, dword ptr [DAT_007b6ed4]
        push    edi
        push    ecx
        push    0x7a00c0
        push    0x849804
        call    dword ptr [IAT_0076b4f8]
        add     esp, 0x10
        jmp     l_92f5
    l_92d4:
        mov     edx, dword ptr [DAT_00849c40]
        mov     eax, dword ptr [DAT_007b6ed4]
        push    edx
        push    edi
        push    eax
        push    0x7a0088
        push    0x849804
        call    dword ptr [IAT_0076b4f8]
        add     esp, 0x14
    l_92f5:
        push    0x1
        mov     dword ptr [DAT_007b6ed4], 0x7a007c
        call    esi
        push    0x0
        push    0x7a0070
        push    0x849804
        push    0x0
        call    ebx
        push    0x0
        call    esi
        mov     ebx, dword ptr [DAT_008498ac]
        mov     ecx, 0xb3
        mov     esi, 0x8498b8
        mov     edi, 0x849b88
        rep movsd
        mov     ecx, dword ptr [DAT_008498b0]
        mov     dword ptr [ebp+0xc], ecx
        mov     edi, ecx
        jmp     l_933e
    l_933b:
        mov     ebx, dword ptr [ebp+0x8]
    l_933e:
        fnsave   [DAT_00849784]
        mov     al, byte ptr [DAT_008aa9f4]
        test    al, al
        mov     dword ptr [DAT_0087dc00], ebx
        mov     dword ptr [DAT_008498b4], edi
        jz      l_9397
        push    0x849b88
        mov     ecx, 0xb3
        mov     esi, 0x8aa718
        mov     edi, 0x849b88
        push    0x8496e0
        rep movsd
        mov     dword ptr [DAT_007b6ed4], 0x7a005c
        call    FUN_00736b90
        mov     eax, dword ptr [DAT_00849c40]
        mov     edi, dword ptr [ebp+0xc]
        mov     byte ptr [DAT_008aa9f4], 0x0
        jmp     l_9469
    l_9397:
        cmp     dword ptr [DAT_00849eb8], 0x1
        jnz     l_93c6
        test    ebx, 0x30e
        jz      l_93c6
        mov     dword ptr [DAT_00849c40], 0x6f91d0
        push    eax
        ; __emit: lea eax,[imm32] absolute-address form (8D 05) not encodable in MSVC6 inline asm
        _emit 0x8D
        _emit 0x05
        _emit 0x88
        _emit 0x9B
        _emit 0x84
        _emit 0x00
        mov     dword ptr [eax+0xb4], ebp
        mov     dword ptr [eax+0xc4], esp
        pop     eax
    l_93c6:
        push    0x849b88
        push    0x8496e0
        mov     dword ptr [DAT_007b6ed4], 0x7a004c
        call    FUN_00736b90
        push    0x8496e0
        mov     dword ptr [DAT_007b6ed4], 0x7a0040
        call    FUN_00736bf0
        test     dword ptr [DAT_0087dc00], 0x32c
        jz      l_941a
        push    0x8496e0
        mov     dword ptr [DAT_007b6ed4], 0x7a0034
        call    FUN_00736bf0
        mov     dword ptr [DAT_00849c40], eax
        jmp     l_941f
    l_941a:
        mov     eax, dword ptr [DAT_00849c40]
    l_941f:
        test     dword ptr [DAT_0087dc00], 0x36c
        jz      l_9444
        push    0x8496e0
        mov     dword ptr [DAT_007b6ed4], 0x7a0028
        call    FUN_00736bf0
        mov     dword ptr [DAT_00849c40], eax
    l_9444:
        test     dword ptr [DAT_0087dc00], 0x480
        jz      l_9469
        push    0x8496e0
        mov     dword ptr [DAT_007b6ed4], 0x7a001c
        call    FUN_00736bf0
        mov     dword ptr [DAT_00849c40], eax
    l_9469:
        cmp     dword ptr [DAT_00849eb8], 0x1
        jnz     l_9494
        mov     edx, dword ptr [ebp+0xc]
        mov     ecx, 0xb3
        mov     esi, 0x849b88
        mov     edi, 0x8498b8
        rep movsd
        mov     dword ptr [DAT_008498b0], edx
        mov     dword ptr [DAT_008498ac], ebx
        mov     edi, edx
    l_9494:
        mov     ecx, dword ptr [DAT_00849ebc]
        test    ecx, ecx
        jz      l_94a9
    l_949e:
        cmp     dword ptr [ecx+0x4], eax
        jz      l_9507
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        jnz     l_949e
    l_94a9:
        push    eax
        push    0x8495dc
        mov     dword ptr [DAT_007b6ed4], 0x7a0004
        call    FUN_00736cd0
        mov     dword ptr [DAT_007b6ed8], eax
        mov     eax, dword ptr [DAT_00849c40]
        push    eax
        push    0x8494d8
        lea     ecx, [ebp-0x2c]
        push    ecx
        mov     dword ptr [DAT_007b6ed4], 0x79ffec
        call    FUN_00736c50
        mov     dword ptr [DAT_007b6edc], eax
        mov     eax, dword ptr [DAT_0087dc00]
        test    ah, 0x20
        jz      l_954a
        mov     eax, dword ptr [DAT_007b6ed8]
        test    eax, eax
        jz      l_9522
        cmp     byte ptr [eax], 0x0
        jz      l_9522
        push    eax
        push    edi
        push    0x79ffe0
        jmp     l_9535
    l_9507:
        mov     dword ptr [DAT_00849eb8], 0x0
        frstor   [DAT_00849784]
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    l_9522:
        mov     edx, dword ptr [DAT_00849c40]
        push    edx
        call    FUN_0071ddd0
        push    eax
        push    edi
        push    0x79ffd4
    l_9535:
        push    0x8493d8
        call    dword ptr [IAT_0076b420]
        add     esp, 0x10
        mov     dword ptr [ebp+0xc], 0x8493d8
    l_954a:
        mov     esi, dword ptr [IAT_0076b294]
        push    0x10000
        call    esi
        mov     dword ptr [ebp-0x4], eax
        mov     dword ptr [ebp-0xc], 0x10000
        mov     dword ptr [ebp-0x8], 0x0
        push    0x100
        mov     byte ptr [eax], 0x0
        call    esi
        mov     ebx, eax
        mov     al, byte ptr [DAT_0087dc00]
        xor     edx, edx
        add     esp, 0x8
        test    al, 0x20
        mov     dword ptr [ebp-0x30], ebx
        mov     byte ptr [ebx], dl
        jz      l_96a8
        mov     esi, dword ptr [DAT_0087dbf8]
        test    esi, esi
        jz      l_95c8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     edx, ecx
        inc     edx
        cmp     edx, 0x100
        jle     l_95b1
        mov     edx, 0x100
    l_95b1:
        mov     ecx, edx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        dec     edx
        rep movsb
        mov     byte ptr [edx+ebx*1], 0x0
    l_95c8:
        mov     ecx, 0x79ffd0
        test    ecx, ecx
        jz      l_9614
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_95f3
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_95f3:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x79ffd0
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9614:
        mov     edi, dword ptr [ebp+0xc]
        test    edi, edi
        jz      l_965a
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_963b
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_963b:
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_965a:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_96b2
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_9685
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_9685:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
        jmp     l_96b2
    l_96a8:
        mov     dword ptr [DAT_0087dbf8], 0x79ffc8
    l_96b2:
        mov     eax, dword ptr [DAT_0087dc00]
        test    al, 0x4
        jz      l_97b2
        mov     eax, 0x79ffb8
        test    eax, eax
        mov     dword ptr [DAT_0087dbf8], 0x79ffb0
        jz      l_9715
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_96f4
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_96f4:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x79ffb8
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9715:
        mov     eax, dword ptr [ebp+0xc]
        test    eax, eax
        jz      l_975d
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_973e
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_973e:
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_975d:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_9aef
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_978c
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_978c:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
        jmp     l_9aef
    l_97b2:
        test    al, 0x8
        jz      l_98ad
        mov     eax, 0x79ffa0
        test    eax, eax
        mov     dword ptr [DAT_0087dbf8], 0x79ff98
        jz      l_9810
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_97ef
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_97ef:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x79ffa0
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9810:
        mov     eax, dword ptr [ebp+0xc]
        test    eax, eax
        jz      l_9858
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_9839
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_9839:
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9858:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_9aef
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_9887
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_9887:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
        jmp     l_9aef
    l_98ad:
        test    al, 0x10
        jz      l_99a9
        mov     eax, 0x79ff88
        test    eax, eax
        mov     dword ptr [DAT_0087dbf8], 0x79ff7c
        jz      l_990b
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_98ea
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_98ea:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x79ff88
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_990b:
        mov     eax, dword ptr [ebp+0xc]
        test    eax, eax
        jz      l_9953
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_9934
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_9934:
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
    l_994b:
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9953:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_9aef
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        lea     ecx, [edx+eax*1]
        cmp     ecx, 0x100
        jle     l_9981
        mov     eax, 0x100
        sub     eax, edx
    l_9981:
        lea     edi, [edx+ebx*1]
        mov     ecx, eax
        mov     ebx, ecx
        shr     ecx, 0x2
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [ebp-0x30]
        and     ecx, 0x3
        lea     edx, [edx+eax*1-0x1]
        rep movsb
        mov     byte ptr [edx+ebx*1], 0x0
        jmp     l_9aef
    l_99a9:
        test    ah, 0x1
        jz      l_9a51
        mov     eax, 0x79ff6c
        test    eax, eax
        mov     dword ptr [DAT_0087dbf8], 0x79ff64
        jz      l_9a08
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_99e7
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_99e7:
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        mov     esi, 0x79ff6c
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9a08:
        mov     eax, dword ptr [ebp+0xc]
        test    eax, eax
        jz      l_9953
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_9a35
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_9a35:
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        jmp     l_994b
    l_9a51:
        test    ah, 0x2
        jz      l_9aef
        mov     eax, dword ptr [ebp+0xc]
        test    eax, eax
        jz      l_9aa2
        mov     edi, eax
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        lea     eax, [edx+ecx*1]
        cmp     eax, 0x100
        mov     dword ptr [ebp+0x8], ecx
        jle     l_9a83
        mov     ecx, 0x100
        sub     ecx, edx
        mov     dword ptr [ebp+0x8], ecx
    l_9a83:
        mov     esi, dword ptr [ebp+0xc]
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edi, [edx+ebx*1]
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp+0x8]
        lea     edx, [edx+ecx*1-0x1]
        mov     byte ptr [edx+ebx*1], 0x0
    l_9aa2:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_9aef
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        inc     eax
        lea     ecx, [edx+eax*1]
        cmp     ecx, 0x100
        jle     l_9acc
        mov     eax, 0x100
        sub     eax, edx
    l_9acc:
        mov     ecx, eax
        lea     edi, [edx+ebx*1]
        mov     ebx, ecx
        shr     ecx, 0x2
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, ebx
        mov     ebx, dword ptr [ebp-0x30]
        and     ecx, 0x3
        lea     eax, [edx+eax*1-0x1]
        rep movsb
        mov     byte ptr [eax+ebx*1], 0x0
    l_9aef:
        test    ebx, ebx
        jz      l_9b3b
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9b13
        sub     ecx, edx
        mov     eax, ecx
    l_9b13:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9b3b:
        mov     eax, dword ptr [DAT_0087dc00]
        test    ah, 0x4
        jz      l_9dc0
        mov     esi, dword ptr [DAT_00849888]
        test    esi, esi
        jz      l_a0ea
        cmp     byte ptr [esi], 0x0
        jz      l_a0ea
        mov     eax, 0x79ff54
        test    eax, eax
        jz      l_9bba
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9b89
        sub     ecx, edx
        mov     eax, ecx
    l_9b89:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x79ff54
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        mov     esi, dword ptr [DAT_00849888]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9bba:
        test    esi, esi
        jz      l_9c04
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     edi, [edx+eax*1]
        cmp     edi, ecx
        jle     l_9bde
        sub     ecx, edx
        mov     eax, ecx
    l_9bde:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9c04:
        mov     eax, 0x77e7dc
        test    eax, eax
        jz      l_9c58
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9c2d
        sub     ecx, edx
        mov     eax, ecx
    l_9c2d:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x77e7dc
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9c58:
        mov     ecx, dword ptr [DAT_00849884]
        push    0xa
        lea     eax, [ebp-0x58]
        push    eax
        push    ecx
        call    dword ptr [IAT_0076b2d4]
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 0xc
        lea     edi, [ebp-0x58]
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9c8f
        sub     ecx, edx
        mov     eax, ecx
    l_9c8f:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        lea     esi, [ebp-0x58]
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9cb8:
        mov     eax, 0x78851c
        test    eax, eax
        jz      l_9d0c
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9ce1
        sub     ecx, edx
        mov     eax, ecx
    l_9ce1:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x78851c
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9d0c:
        mov     eax, dword ptr [DAT_00849884]
        mov     ecx, dword ptr [DAT_00849888]
        push    eax
        push    ecx
        lea     edx, [ebp-0x158]
        push    edx
        call    FUN_00721790
        test    eax, eax
        jz      l_a0ea
        mov     eax, 0x79ff44
        test    eax, eax
        jz      l_9d81
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9d56
        sub     ecx, edx
        mov     eax, ecx
    l_9d56:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x79ff44
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9d81:
        lea     eax, [ebp-0x158]
        test    eax, eax
        jz      l_a0ea
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp-0x158]
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9db3
        sub     ecx, edx
        mov     eax, ecx
    l_9db3:
        mov     ecx, eax
        lea     esi, [ebp-0x158]
        jmp     l_a0c6
    l_9dc0:
        mov     eax, dword ptr [DAT_00849c40]
        test    eax, eax
        jz      l_9ecc
        mov     eax, 0x79ff34
        test    eax, eax
        jz      l_9e21
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9df6
        sub     ecx, edx
        mov     eax, ecx
    l_9df6:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x79ff34
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9e21:
        mov     eax, dword ptr [DAT_00849c40]
        push    eax
        call    FUN_0071ddd0
        mov     esi, eax
        test    esi, esi
        jz      l_9e78
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     edi, [edx+eax*1]
        cmp     edi, ecx
        jle     l_9e52
        sub     ecx, edx
        mov     eax, ecx
    l_9e52:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9e78:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_9ecc
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9ea1
        sub     ecx, edx
        mov     eax, ecx
    l_9ea1:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9ecc:
        mov     esi, dword ptr [DAT_007b6ed8]
        test    esi, esi
        jz      l_9fdb
        cmp     byte ptr [esi], 0x0
        jz      l_9fdb
        mov     eax, 0x79ff24
        test    eax, eax
        jz      l_9f3d
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9f0c
        sub     ecx, edx
        mov     eax, ecx
    l_9f0c:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x79ff24
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        mov     esi, dword ptr [DAT_007b6ed8]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9f3d:
        test    esi, esi
        jz      l_9f87
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     edi, [edx+eax*1]
        cmp     edi, ecx
        jle     l_9f61
        sub     ecx, edx
        mov     eax, ecx
    l_9f61:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9f87:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_9fdb
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_9fb0
        sub     ecx, edx
        mov     eax, ecx
    l_9fb0:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_9fdb:
        mov     esi, dword ptr [DAT_007b6edc]
        test    esi, esi
        jz      l_a0ea
        cmp     byte ptr [esi], 0x0
        jz      l_a0ea
        mov     eax, 0x79ff54
        test    eax, eax
        jz      l_a04c
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_a01b
        sub     ecx, edx
        mov     eax, ecx
    l_a01b:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x79ff54
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        mov     esi, dword ptr [DAT_007b6edc]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a04c:
        test    esi, esi
        jz      l_a096
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     edi, [edx+eax*1]
        cmp     edi, ecx
        jle     l_a070
        sub     ecx, edx
        mov     eax, ecx
    l_a070:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a096:
        mov     eax, 0x77a078
        test    eax, eax
        jz      l_a0ea
        mov     edx, dword ptr [ebp-0x8]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0xc]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_a0bf
        sub     ecx, edx
        mov     eax, ecx
    l_a0bf:
        mov     ecx, eax
        mov     esi, 0x77a078
    l_a0c6:
        mov     edi, dword ptr [ebp-0x4]
        add     edi, edx
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebp-0x4]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x8], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a0ea:
        mov     eax, dword ptr [DAT_0087dc00]
        test    ah, 0x10
        jz      l_a108
        push    eax
        lea     eax, [ebp-0xc]
        push    eax
        mov     dword ptr [DAT_007b6ed4], 0x79ff14
        call    FUN_00721280
    l_a108:
        push    0x200
        call    dword ptr [IAT_0076b294]
        mov     dword ptr [ebp-0x10], eax
        mov     dword ptr [ebp-0x18], 0x200
        mov     dword ptr [ebp-0x14], 0x0
        mov     byte ptr [eax], 0x0
        mov     eax, dword ptr [DAT_0087dc00]
        add     esp, 0x4
        test    al, 0x10
        jz      l_a295
        mov     ecx, 0x77a078
        test    ecx, ecx
        jz      l_a18b
        mov     edx, dword ptr [ebp-0x14]
        mov     edi, ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0x18]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_a160
        sub     ecx, edx
        mov     eax, ecx
    l_a160:
        mov     edi, dword ptr [ebp-0x10]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x77a078
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ebp-0x10]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x14], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a18b:
        mov     esi, dword ptr [DAT_007b6edc]
        test    esi, esi
        jz      l_a1db
        mov     edx, dword ptr [ebp-0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0x18]
        inc     eax
        lea     edi, [edx+eax*1]
        cmp     edi, ecx
        jle     l_a1b5
        sub     ecx, edx
        mov     eax, ecx
    l_a1b5:
        mov     edi, dword ptr [ebp-0x10]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ebp-0x10]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x14], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a1db:
        mov     eax, 0x79ffd0
        test    eax, eax
        jz      l_a22f
        mov     edx, dword ptr [ebp-0x14]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0x18]
        inc     eax
        lea     esi, [edx+eax*1]
        cmp     esi, ecx
        jle     l_a204
        sub     ecx, edx
        mov     eax, ecx
    l_a204:
        mov     edi, dword ptr [ebp-0x10]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, 0x79ffd0
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ebp-0x10]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x14], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a22f:
        mov     esi, dword ptr [DAT_0087dbf8]
        test    esi, esi
        jz      l_a27f
        mov     edx, dword ptr [ebp-0x14]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        mov     eax, ecx
        mov     ecx, dword ptr [ebp-0x18]
        inc     eax
        lea     edi, [edx+eax*1]
        cmp     edi, ecx
        jle     l_a259
        sub     ecx, edx
        mov     eax, ecx
    l_a259:
        mov     edi, dword ptr [ebp-0x10]
        add     edi, edx
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     ecx, dword ptr [ebp-0x14]
        mov     edx, dword ptr [ebp-0x10]
        lea     eax, [ecx+eax*1-0x1]
        mov     dword ptr [ebp-0x14], eax
        mov     byte ptr [eax+edx*1], 0x0
    l_a27f:
        mov     eax, dword ptr [ebp+0xc]
        push    0x794da8
        push    eax
        push    0x79ffd0
        lea     ecx, [ebp-0x18]
        jmp     l_a3b9
    l_a295:
        test    ah, 0x2
        jz      l_a2b0
        mov     ecx, dword ptr [ebp+0xc]
        push    0x794da8
        push    ecx
        push    0x77a078
        lea     ecx, [ebp-0x18]
        jmp     l_a3b9
    l_a2b0:
        test    ah, 0x4
        jz      l_a317
        mov     edx, dword ptr [DAT_00849888]
        test    edx, edx
        jz      l_a3cc
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        jz      l_a3cc
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [DAT_00849884]
        push    0x794da8
        push    eax
        push    0x79ff10
        push    ecx
        push    0x77e7dc
        push    edx
        push    0x77a078
        lea     ecx, [ebp-0x18]
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa8f0
        jmp     l_a3b7
    l_a317:
        mov     eax, dword ptr [DAT_007b6edc]
        test    eax, eax
        jz      l_a36f
        cmp     byte ptr [eax], 0x0
        jz      l_a36f
        mov     edx, dword ptr [ebp+0xc]
        mov     eax, dword ptr [DAT_0087dbf8]
        mov     ecx, dword ptr [DAT_00849c40]
        push    0x794da8
        push    edx
        push    0x79ffd0
        push    eax
        push    0x79ff08
        push    ecx
        call    FUN_0071ddd0
        mov     edx, dword ptr [DAT_007b6edc]
        push    eax
        push    0x79ff00
        push    edx
        push    0x77a078
        lea     ecx, [ebp-0x18]
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        jmp     l_a39d
    l_a36f:
        mov     eax, dword ptr [DAT_00849c40]
        push    0x79fefc
        push    eax
        call    FUN_0071ddd0
        mov     ecx, dword ptr [ebp+0xc]
        mov     edx, dword ptr [DAT_0087dbf8]
        push    eax
        push    0x79fef4
        push    ecx
        push    0x79ffd0
        push    edx
        push    0x77a078
        lea     ecx, [ebp-0x18]
    l_a39d:
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
    l_a3b7:
        mov     ecx, eax
    l_a3b9:
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
        mov     ecx, eax
        call    FUN_006fa880
    l_a3cc:
        mov     esi, 0x1
        cmp     dword ptr [DAT_00849eb8], esi
        jnz     l_a41a
        mov     al, byte ptr [DAT_0087dd0a]
        test    al, al
        jnz     l_a3f6
        mov     eax, dword ptr [ebp-0x10]
        push    eax
        mov     dword ptr [DAT_007b6ed4], 0x79fee0
        call    dword ptr [IAT_0076b0fc]
    l_a3f6:
        cmp     dword ptr [DAT_008aaf44], esi
        mov     dword ptr [DAT_007b6ed4], 0x79fed4
        jz      l_a411
        cmp     dword ptr [DAT_007b70e0], -0x1
        jz      l_a41a
    l_a411:
        mov     ecx, dword ptr [ebp-0x10]
        push    ecx
        call    FUN_0070d1f0
    l_a41a:
        mov     byte ptr [DAT_0087dd0b], 0x1
        call    FUN_00707dd0
        mov     eax, dword ptr [DAT_0085894c]
        mov     edx, dword ptr [DAT_0085a254]
        mov     ecx, dword ptr [DAT_00858940]
        mov     dword ptr [DAT_008498a0], eax
        mov     eax, dword ptr [DAT_0085a1f0]
        mov     dword ptr [DAT_00849894], eax
        mov     al, byte ptr [DAT_00858954]
        xor     esi, esi
        test    al, al
        mov     dword ptr [DAT_0084988c], edx
        mov     edx, dword ptr [DAT_00858944]
        mov     dword ptr [DAT_008498a4], ecx
        mov     ecx, dword ptr [DAT_00858948]
        mov     dword ptr [DAT_00849890], esi
        mov     dword ptr [DAT_0084989c], edx
        mov     dword ptr [DAT_00849898], ecx
        jz      l_a48d
        cmp     dword ptr [DAT_00858bf8], esi
        jz      l_a48d
        mov     dword ptr [DAT_00849890], 0x1
    l_a48d:
        mov     eax, dword ptr [DAT_0087dc00]
        test    ah, 0x4
        jnz     l_a4af
        lea     edx, [ebp-0xc]
        push    edx
        push    0x8496e0
        mov     dword ptr [DAT_007b6ed4], 0x79fec0
        call    FUN_00720a00
    l_a4af:
        lea     eax, [ebp-0xc]
        push    eax
        mov     dword ptr [DAT_007b6ed4], 0x79feac
        call    FUN_0071f310
        cmp     dword ptr [DAT_00849eb8], 0x1
        jnz     l_a510
        cmp     dword ptr [DAT_00858bf8], esi
        jz      l_a510
        cmp     dword ptr [DAT_00858950], 0x3
        jnz     l_a4e4
        cmp     dword ptr [DAT_0087c5a0], esi
        jnz     l_a510
    l_a4e4:
        mov     edi, dword ptr [DAT_007b73cc]
        mov     dword ptr [DAT_007b73cc], 0x1
        mov     dword ptr [DAT_007b6ed4], 0x79fe9c
        call    FUN_007218f0
        mov     dword ptr [DAT_00849eb0], eax
        mov     dword ptr [DAT_007b73cc], edi
        jmp     l_a516
    l_a510:
        mov     dword ptr [DAT_00849eb0], esi
    l_a516:
        cmp     dword ptr [DAT_00849890], esi
        jz      l_a52d
        mov     dword ptr [DAT_007b6ed4], 0x79fe8c
        call    FUN_0070a920
    l_a52d:
        push    0x1
        call    dword ptr [IAT_0076b4f4]
        mov     dword ptr [DAT_007b6ed4], 0x79fe80
        call    FUN_00733570
        mov     dword ptr [DAT_007b6ed4], 0x79fe74
        call    FUN_0073a250
        lea     ecx, [ebp-0xc]
        push    ecx
        mov     dword ptr [DAT_007b6ed4], 0x79fe60
        call    FUN_00719b10
        lea     edx, [ebp-0xc]
        push    edx
        mov     dword ptr [DAT_007b6ed4], 0x79fe44
        call    FUN_00722130
        mov     eax, dword ptr [DAT_0087dc00]
        test    ah, 0x10
        jnz     l_a597
        push    eax
        lea     eax, [ebp-0xc]
        push    eax
        mov     dword ptr [DAT_007b6ed4], 0x79ff14
        call    FUN_00721280
    l_a597:
        push    ebx
        mov     dword ptr [DAT_007b6ed4], 0x79fe3c
        call    FUN_0070d3f0
        mov     dword ptr [DAT_007b6ed4], 0x79fe2c
        call    FUN_00722470
        call    dword ptr [IAT_0076b158]
        cmp     dword ptr [DAT_008aaa00], eax
        jz      l_a5d6
        push    esi
        push    0x79fe24
        push    0x79fe08
        push    esi
        call    dword ptr [IAT_0076b598]
    l_a5d6:
        mov     al, byte ptr [DAT_00859afd]
        test    al, al
        mov     edi, dword ptr [IAT_0076b2d0]
        mov     esi, 0x79fe00
        jz      l_a659
        mov     eax, dword ptr [DAT_0087dc00]
        mov     ecx, eax
        and     ecx, 0x1
        test    cl, cl
        jnz     l_a601
        test    ah, 0x8
        jz      l_a75b
    l_a601:
        mov     eax, dword ptr [DAT_00849eb0]
        test    eax, eax
        mov     dword ptr [DAT_007b6ed4], esi
        jz      l_a620
        push    eax
        call    edi
        add     esp, 0x4
        mov     dword ptr [DAT_00849eb0], 0x0
    l_a620:
        call    dword ptr [IAT_0076b158]
        cmp     dword ptr [DAT_008aaa00], eax
        jz      l_a7fd
        mov     eax, dword ptr [ebp-0x10]
        push    eax
        mov     dword ptr [DAT_00858ac0], 0x1
        call    edi
        push    ebx
        call    edi
        mov     ecx, dword ptr [ebp-0x4]
        push    ecx
        call    edi
        add     esp, 0xc
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    l_a659:
        mov     edx, dword ptr [ebp-0x4]
        mov     dword ptr [DAT_0087dbf0], ebx
        mov     dword ptr [DAT_0087dbf4], edx
        mov     dword ptr [DAT_007b6ed4], 0x79fdf0
        call    FUN_007301e0
        mov     eax, dword ptr [DAT_0087dbfc]
        cmp     eax, -0x1
        jz      l_a601
        cmp     eax, 0x1
        jz      l_a760
        mov     dword ptr [DAT_007b6ed4], 0x79fddc
        call    FUN_00730610
        mov     eax, dword ptr [DAT_00849eb0]
        test    eax, eax
        mov     dword ptr [DAT_007b6ed4], esi
        jz      l_a6b8
        push    eax
        call    edi
        add     esp, 0x4
        mov     dword ptr [DAT_00849eb0], 0x0
    l_a6b8:
        mov     eax, dword ptr [DAT_0087dbfc]
        cmp     eax, 0x3
        jz      l_a760
        cmp     eax, 0x3f1
        jz      l_a760
        cmp     eax, 0x3eb
        jnz     l_a727
        mov     al, byte ptr [DAT_0087dd09]
        test    al, al
        jz      l_a6f0
        mov     dword ptr [DAT_007b6ed4], 0x79fdcc
        call    FUN_007216b0
    l_a6f0:
        mov     byte ptr [DAT_0087dd0b], 0x0
        mov     dword ptr [DAT_00849eb8], 0x0
        frstor   [DAT_00849784]
        mov     eax, dword ptr [ebp-0x10]
        push    eax
        call    edi
        push    ebx
        call    edi
        mov     ecx, dword ptr [ebp-0x4]
        push    ecx
        call    edi
        add     esp, 0xc
        mov     eax, 0x1
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    l_a727:
        cmp     eax, 0x4
        jnz     l_a601
        mov     byte ptr [DAT_0087dd0b], 0x0
        mov     edx, dword ptr [DAT_00849308]
        push    edx
        push    0x8
        call    FUN_006f3c80
        mov     edx, dword ptr [DAT_00849ebc]
        mov     ecx, dword ptr [DAT_00849c40]
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax], edx
        mov     dword ptr [DAT_00849ebc], eax
    l_a75b:
        mov     eax, dword ptr [DAT_0087dbfc]
    l_a760:
        mov     byte ptr [DAT_0087dd0b], 0x0
        mov     ecx, dword ptr [DAT_00849eb0]
        test    ecx, ecx
        mov     dword ptr [DAT_007b6ed4], esi
        jz      l_a78c
        push    ecx
        call    edi
        mov     eax, dword ptr [DAT_0087dbfc]
        add     esp, 0x4
        mov     dword ptr [DAT_00849eb0], 0x0
    l_a78c:
        cmp     eax, 0x3f1
        jz      l_a7b1
        mov     dword ptr [DAT_007b6ed4], 0x79fdbc
        call    FUN_007335c0
        mov     dword ptr [DAT_007b6ed4], 0x79fdac
        call    FUN_0073a2e0
    l_a7b1:
        call    FUN_00707e00
        frstor   [DAT_00849784]
        push    0x0
        call    dword ptr [IAT_0076b4f4]
        mov     dword ptr [DAT_00849eb8], 0x0
        mov     eax, dword ptr [DAT_00849890]
        test    eax, eax
        jz      l_a7dc
        call    FUN_0070abe0
    l_a7dc:
        cmp     dword ptr [DAT_0087dbfc], 0x3f1
        jnz     l_a858
        mov     eax, dword ptr [DAT_00896cb8]
        test    eax, eax
        jz      l_a853
        mov     dword ptr [DAT_00858c04], 0x1
        jmp     l_a858
    l_a7fd:
        cmp     dword ptr [DAT_00849eb8], 0x1
        jnz     l_a832
        mov     dword ptr [DAT_007b6ed4], 0x79fda4
        call    FUN_0070c960
        mov     edx, dword ptr [ebp-0x10]
        push    edx
        call    edi
        push    ebx
        call    edi
        mov     eax, dword ptr [ebp-0x4]
        push    eax
        call    edi
        add     esp, 0xc
        xor     eax, eax
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    l_a832:
        mov     dword ptr [DAT_007b6ed4], 0x79fd94
        call    FUN_00737cc0
        push    0x1
        mov     dword ptr [DAT_00858c08], 0x5
        call    dword ptr [IAT_0076b38c]
    l_a853:
        call    FUN_00709120
    l_a858:
        mov     ecx, dword ptr [ebp-0x10]
        push    ecx
        call    edi
        push    ebx
        call    edi
        mov     edx, dword ptr [ebp-0x4]
        push    edx
        call    edi
        add     esp, 0xc
    l_ret0_2:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
