/*
 * FUN_00739c40 (862 B) — sound system initialization. Clears a large
 * table, lazily creates a "Sound" allocator context, allocates a small
 * object, registers a callback, and if sound is enabled performs a
 * multi-step init (critical section, buffer alloc, device test loop with
 * FPU timing comparisons).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_856a88[];    /* 0x00856a88 dword table (cleared) */
extern int    g_8aadc8;      /* 0x008aadc8 */
extern int    g_849300;      /* 0x00849300 */
extern int    g_856a80;      /* 0x00856a80 */
extern int    g_857f28;      /* 0x00857f28 */
extern char   g_87dd0a;      /* 0x0087dd0a */
extern char   g_858990;      /* 0x00858990 */
extern int    g_858998;      /* 0x00858998 */
extern int    g_856b8c;      /* 0x00856b8c */
extern int    g_856ba4;      /* 0x00856ba4 */
extern char   g_8589a0;      /* 0x008589a0 */
extern char   g_87dd0b;      /* 0x0087dd0b */
extern char   g_858ac8[];    /* 0x00858ac8 critical section */
extern double g_7a7150;      /* 0x007a7150 double constant */
extern double g_76d968;      /* 0x0076d968 double constant */
extern char   g_7a716c[];    /* 0x007a716c "Sound" */
extern char   g_7a7158[];    /* 0x007a7158 "Initialization Test" */
extern void*  g_76b108;      /* IAT InitializeCriticalSection */

extern void __cdecl FUN_006f4710(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_007579e0(void);
extern void __cdecl FUN_00756d00(void);
extern void __cdecl FUN_007570a0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00724350(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_0073a0e0(void);
extern void __cdecl FUN_007492f0(void);
extern void __cdecl FUN_00725660(void);
extern void __cdecl FUN_00725060(void);
extern void __cdecl FUN_00724a00(void);
extern void __cdecl FUN_00757f00(void);
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_00757cb0(void);
extern void __cdecl FUN_00725740(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_00739c40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x52b
        mov     edi, 0x856a88
        rep     stosd
        mov     eax, dword ptr [g_8aadc8]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L_39c7c
        mov     eax, dword ptr [g_849300]
        push    eax
        push    ebx
        push    0x7a716c
        call    FUN_006f4710
        mov     dword ptr [g_8aadc8], eax
    L_39c7c:
        push    eax
        push    0x8
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_39c97
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [g_856a80], eax
        jmp     L_39c9d
    L_39c97:
        mov     dword ptr [g_856a80], ebx
    L_39c9d:
        push    ebx
        push    0x73a470
        mov     dword ptr [g_857f28], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007579e0
        mov     eax, dword ptr [g_857f28]
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jz      L_39cca
        dec     eax
        mov     dword ptr [g_857f28], eax
    L_39cca:
        cmp     byte ptr [g_858990], 0x1
        jz      L_39f94
        cmp     dword ptr [g_858998], ebx
        jz      L_39f94
        mov     ecx, dword ptr [g_8aadc8]
        push    ecx
        push    0xec
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      L_39d04
        mov     ecx, eax
        call    FUN_00756d00
        jmp     L_39d06
    L_39d04:
        xor     eax, eax
    L_39d06:
        cmp     byte ptr [g_858990], 0x1
        mov     dword ptr [g_856b8c], eax
        jnz     L_39d3a
        mov     esi, eax
        cmp     esi, ebx
        jz      L_39d2a
        mov     ecx, esi
        call    FUN_007570a0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_39d2a:
        mov     dword ptr [g_856b8c], ebx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_39d3a:
        push    0x3f800000
        push    ebx
        push    ebx
        push    0x80
        push    -0x1
        call    FUN_00724350
        push    ebx
        push    0x3f800000
        push    ebx
        push    0x100
        push    -0x1
        call    FUN_00724350
        push    0x858ac8
        call    dword ptr [g_76b108]
        mov     edx, dword ptr [g_8aadc8]
        push    edx
        push    0x1000
        call    FUN_006f3c80
        mov     dword ptr [g_856ba4], eax
        call    FUN_0073a0e0
        call    FUN_007492f0
        cmp     byte ptr [g_8589a0], 0x1
        jnz     L_39f94
        cmp     dword ptr [g_856a88], ebx
        jz      L_39f94
        cmp     byte ptr [g_858990], bl
        jnz     L_39f94
        mov     eax, dword ptr [g_856b8c]
        cmp     dword ptr [eax + 0x3c], ebx
        jz      L_39f94
        xor     ecx, ecx
        mov     dword ptr [esp + 0x3c], ecx
        mov     dword ptr [esp + 0x40], ecx
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x48], ecx
        push    ebx
        mov     esi, 0x1
        push    0x8000
        mov     word ptr [esp + 0x54], cx
        mov     word ptr [esp + 0x44], si
        mov     word ptr [esp + 0x46], si
        mov     dword ptr [esp + 0x48], 0x2b11
        mov     word ptr [esp + 0x52], 0x10
        mov     word ptr [esp + 0x50], 0x2
        mov     dword ptr [esp + 0x4c], 0x5622
        call    FUN_006f3c80
        push    ebx
        mov     edx, eax
        push    0x8000
        push    edx
        mov     edi, edx
        mov     dword ptr [esp + 0x28], edx
        lea     edx, [esp + 0x48]
        push    edx
        xor     eax, eax
        push    0x7a7158
        mov     ecx, 0x2000
        rep     stosd
        push    esi
        lea     eax, [esp + 0x2c]
        push    eax
        call    FUN_00725660
        mov     eax, dword ptr [g_856a88]
        xor     esi, esi
        cmp     eax, ebx
        jle     L_39e77
        mov     edi, 0x856a8c
    L_39e4a:
        push    0x20
        push    esi
        call    FUN_00725060
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        push    esi
        call    FUN_00724a00
        mov     edx, dword ptr [edi]
        mov     eax, dword ptr [edx]
        push    ebx
        push    ebx
        push    ebx
        push    eax
        call    FUN_00757f00
        mov     eax, dword ptr [g_856a88]
        inc     esi
        add     edi, 0x4
        cmp     esi, eax
        jl      L_39e4a
    L_39e77:
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], ebx
        fild    qword ptr [esp + 0x28]
        mov     ebp, eax
        mov     byte ptr [esp + 0x13], bl
        fdivr   qword ptr [g_7a7150]
        fstp    qword ptr [esp + 0x30]
        call    FUN_00707e90
        fstp    qword ptr [esp + 0x28]
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x20], 0x0
        mov     dword ptr [esp + 0x24], 0x0
        jz      L_39f45
    L_39eb8:
        cmp     byte ptr [esp + 0x13], bl
        /* __emit: MSVC6 miscomputes backward jnz rel32 (off-by-8); emit exact ref bytes */
        __emit 0x0F
        __emit 0x85
        __emit 0x83
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_39ec2:
        call    FUN_00707e90
        fst     qword ptr [esp + 0x20]
        fsub    qword ptr [esp + 0x28]
        fcomp   qword ptr [g_76d968]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_39f1f
        mov     eax, dword ptr [g_856a88]
        xor     ebp, ebp
        xor     esi, esi
        cmp     eax, ebx
        jle     L_39f1f
        mov     edi, 0x856a8c
        mov     byte ptr [g_87dd0b], 0x1
    L_39eee:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        push    ecx
        call    FUN_00757cb0
        mov     byte ptr [g_87dd0b], bl
        test    byte ptr [esp + 0x18], 0x1
        jz      L_39f12
        inc     ebp
    L_39f12:
        mov     eax, dword ptr [g_856a88]
        inc     esi
        add     edi, 0x4
        cmp     esi, eax
        /* __emit: MSVC6 miscomputes backward jl rel8 (off-by-7); emit exact ref bytes */
        __emit 0x7C
        __emit 0xCF
    L_39f1f:
        fld     qword ptr [esp + 0x28]
        fadd    qword ptr [esp + 0x30]
        fadd    qword ptr [g_76d968]
        fcomp   qword ptr [esp + 0x20]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 01 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_39f3d
        mov     byte ptr [esp + 0x13], 0x1
    L_39f3d:
        cmp     ebp, ebx
        /* __emit: MSVC6 miscomputes backward jnz rel32 (off-by-8); emit exact ref bytes */
        __emit 0x0F
        __emit 0x85
        __emit 0x73
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    L_39f45:
        mov     eax, dword ptr [g_856a88]
        xor     esi, esi
        cmp     eax, ebx
        jle     L_39f61
    L_39f50:
        push    ebx
        push    esi
        call    FUN_00724a00
        mov     eax, dword ptr [g_856a88]
        inc     esi
        cmp     esi, eax
        jl      L_39f50
    L_39f61:
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_00725740
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_006f4230
        cmp     byte ptr [esp + 0x13], bl
        jnz     L_39f8e
        fld     qword ptr [esp + 0x28]
        fadd    qword ptr [esp + 0x30]
        fcomp   qword ptr [esp + 0x20]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; emit F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_39f94
    L_39f8e:
        mov     byte ptr [g_8589a0], bl
    L_39f94:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
