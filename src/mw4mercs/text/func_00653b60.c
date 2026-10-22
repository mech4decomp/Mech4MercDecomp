/*
 * FUN_00653b60 (608 B) — ABL/vector math routine. Iterative FPU loop
 * (ray/step marching) with a virtual call through an obfuscated global
 * pointer chain (0x7dab44 ^ 0x7dab40), allocates a 0x18-byte scratch object,
 * and classifies a result value against several float thresholds.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007b8d08;
extern float g_007b8d0c;
extern float g_007b8d10;
extern float g_0077016c;
extern float g_00794954;
extern float g_00794958;
extern float g_0079495c;
extern int g_007dc728;
extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00653b60(void)
{
    __asm {
        sub     esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x64]
        mov     eax, 0x7f7fffff
        push    edi
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esp + 0x14], 0xc0a00000
        xor     ebx, ebx
        mov     ebp, 0x1000
L_653b90:
        fld     dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x68], 0xc0a00000
        fadd    dword ptr [esp + 0x60]
        fstp    dword ptr [esp + 0x18]
L_653ba4:
        fld     dword ptr [esp + 0x68]
        mov     eax, dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x64]
        mov     ecx, 0x7b8d08
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x20], 0x44480000
        fstp    dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x58], 0x447a0000
        call    FUN_0040cb00
        fsqrt
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x44]
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [g_007b8d08]
        fstp    dword ptr [esp + 0x50]
        fld     st(0)
        fmul    dword ptr [g_007b8d0c]
        fstp    dword ptr [esp + 0x54]
        fmul    dword ptr [g_007b8d10]
        fstp    dword ptr [esp + 0x58]
        call    FUN_0040c410
        push    0x18
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_653c32
        lea     edx, [esp + 0x40]
        lea     ecx, [esp + 0x34]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0x10], ebx
        mov     dword ptr [eax + 0x14], ebp
        mov     edi, eax
        jmp     L_653c34
L_653c32:
        xor     edi, edi
L_653c34:
        mov     ecx, dword ptr [g_007dc728]
        push    edi
        call    FUN_004e2f40
        test    eax, eax
        jz      L_653cf7
        fld     dword ptr [esp + 0x58]
        push    ecx
        lea     edx, [esp + 0x50]
        fstp    dword ptr [esp]
        push    edx
        lea     ecx, [esp + 0x30]
        call    FUN_0040ca40
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_0040c9e0
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esi], edx
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x34]
        fsub    dword ptr [esp + 0x20]
        fcomp   dword ptr [esp + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_653cd0
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x34]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x10]
L_653cd0:
        mov     ecx, dword ptr [edi + 0x4]
        fld     dword ptr [ecx + 0x4]
        mov     al, byte ptr [edi + 0xc]
        fcomp   dword ptr [esi + 0xc]
        mov     byte ptr [esi + 0x4], al
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_653cf7
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x10], ecx
L_653cf7:
        push    edi
        call    FUN_004084e0
        fld     dword ptr [esp + 0x6c]
        fadd    dword ptr [g_0076d064]
        add     esp, 0x4
        fst     dword ptr [esp + 0x68]
        fcomp   dword ptr [g_0077016c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_653ba4
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [g_0076d064]
        fst     dword ptr [esp + 0x14]
        fcomp   dword ptr [g_0077016c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L_653b90
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_00794954]
        fld     dword ptr [esp + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        fcomp   dword ptr [g_00794958]
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        jnz     L_653d73
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_653d78
        pop     edi
        mov     byte ptr [esi + 0x4], 0x19
        mov     dword ptr [esi + 0x18], 0xffffffff
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_653d73:
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_653d9c
L_653d78:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0079495c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L_653dad
        pop     edi
        mov     byte ptr [esi + 0x4], 0x1a
        mov     dword ptr [esi + 0x18], 0xffffffff
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_653d9c:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_0079495c]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jnz     L_653db1
L_653dad:
        mov     byte ptr [esi + 0x4], 0x1b
L_653db1:
        pop     edi
        mov     dword ptr [esi + 0x18], 0xffffffff
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
