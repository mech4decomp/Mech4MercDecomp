/*
 * FUN_00709d40 (311 B) — Build a 256-entry lookup table.
 *
 * If global 0x0085a220 is non-null, fills a local 256-word table via
 * _CIpow/_ftol and calls a virtual method (vtable+0x10). Otherwise fills
 * the global byte table 0x00859c2c and updates globals 0x0085a268/0x0085a26c
 * /0x0087c0e2, calling FUN_00717d80.
 *
 * __cdecl, RET 4 (one float param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;
extern float g_7a1678;
extern double g_7a1670;
extern double g_7a1668;
extern float g_85a268;
extern char g_85a26c;
extern char g_87c0e2;
extern char g_859c2c[];
extern void *g_85a220;
extern float g_7b7010;
extern void __cdecl FUN_0075db86(void);   /* _CIpow */
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00717d80(void);

__declspec(naked) void __cdecl FUN_00709d40(float param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     esp, 0x608
        push    ebx
        mov     ebx, dword ptr [g_85a220]
        test    ebx, ebx
        push    esi
        mov     dword ptr [g_7b7010], eax
        jz      loc_709dd2
        fld     dword ptr [g_76d064]
        push    edi
        fdiv    dword ptr [esp + 0x618]
        xor     edi, edi
        mov     dword ptr [esp + 0xc], edi
        lea     esi, [esp + 0x414]
        fstp    dword ptr [esp + 0x10]
loc_709d7a:
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_7a1678]
        fld     dword ptr [esp + 0x10]
        call    FUN_0075db86
        fmul    qword ptr [g_7a1670]
        call    FUN_0075db4a
        mov     word ptr [esi - 0x400], ax
        mov     word ptr [esi], ax
        inc     edi
        mov     word ptr [esi - 0x200], ax
        add     esi, 2
        cmp     edi, 0x100
        mov     dword ptr [esp + 0xc], edi
        jl      loc_709d7a
        mov     ecx, dword ptr [ebx]
        lea     edx, [esp + 0x14]
        push    edx
        push    0
        push    ebx
        call    dword ptr [ecx + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x608
        ret     4
loc_709dd2:
        fld     dword ptr [esp + 0x614]
        fcomp   dword ptr [g_85a268]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8; ref is F6 C4 40 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x40
        jnz     loc_709e6c
        fld     dword ptr [g_76d064]
        xor     esi, esi
        fdiv    dword ptr [esp + 0x614]
        mov     dword ptr [esp + 0x8], esi
        fstp    dword ptr [esp + 0xc]
loc_709e01:
        fild    dword ptr [esp + 0x8]
        fmul    dword ptr [g_7a1678]
        fld     dword ptr [esp + 0xc]
        call    FUN_0075db86
        fmul    qword ptr [g_7a1668]
        call    FUN_0075db4a
        mov     byte ptr [esi + g_859c2c], al
        inc     esi
        cmp     esi, 0x100
        mov     dword ptr [esp + 0x8], esi
        jl      loc_709e01
        fld     dword ptr [esp + 0x614]
        mov     eax, dword ptr [esp + 0x614]
        fcomp   dword ptr [g_76d064]
        mov     dword ptr [g_85a268], eax
        mov     cl, 1
        mov     byte ptr [g_85a26c], cl
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit  0xDF
        __emit  0xE0
        /* __emit: MSVC6 rejects test ah, imm8; ref is F6 C4 40 */
        __emit  0xF6
        __emit  0xC4
        __emit  0x40
        jz      loc_709e61
        mov     byte ptr [g_85a26c], 0
loc_709e61:
        mov     byte ptr [g_87c0e2], cl
        call    FUN_00717d80
loc_709e6c:
        pop     esi
        pop     ebx
        add     esp, 0x608
        ret     4
    }
}
