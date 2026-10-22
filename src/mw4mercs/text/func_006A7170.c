/*
 * In-.text data block 0x6A7169 (436 B) — two functions.
 *
 *   FUN_006A7170 (RET 4): __thiscall ctor — sets vtable 0x795450, optionally
 *     frees via FUN_004084E0, returns this.
 *   FUN_006A7190 (RET 0xc): __thiscall — copies a 0xc-dword matrix from one
 *     of several sources (vtable[0xb0/4], vtable[0x34/4], or a pair of
 *     vtable[0x3c/4] calls), then computes a squared distance against a
 *     reference point and returns a clamped angle/result (0x76d064 /
 *     0x76c5b0 thresholds).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_0040D560(void);
extern unsigned char g_82DB28;
extern int g_799E2C;
extern float g_76C5B0;
extern float g_76D064;

__declspec(naked) void FUN_006A7170(void)
{
    __asm {
        /* ---- FUN_006A7170 ---- */
        test    byte ptr [esp + 4], 1
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x795450
        je      L6A7189
        push    esi
        call    FUN_004084E0
        add     esp, 4
L6A7189:
        mov     eax, esi
        pop     esi
        ret     4

        /* alignment pad */
        nop

        /* ---- FUN_006A7190 ---- */
        sub     esp, 0x54
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 4]
        test    eax, eax
        push    esi
        push    edi
        jne     L6A71E4
        mov     al, byte ptr [g_82DB28]
        mov     ecx, dword ptr [esp + 0x64]
        cmp     al, 1
        mov     eax, dword ptr [ecx]
        jne     L6A71C8
        lea     edx, [esp + 0x30]
        push    edx
        call    dword ptr [eax + 0xb0]
        mov     ecx, 0xc
        mov     esi, eax
        lea     edi, [esp + 0x30]
        rep     movsd
        jmp     L6A7241
L6A71C8:
        call    dword ptr [eax + 0x34]
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x30]
        rep     movsd
        jmp     L6A7241
L6A71E4:
        push    ebp
        mov     ebp, dword ptr [esp + 0x68]
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [edx + 0x3c]
        mov     esi, dword ptr [eax + 0xd8]
        mov     eax, dword ptr [ebp]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [esp + 0x34]
        rep     movsd
        mov     ecx, ebp
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [g_799E2C]
        mov     edx, dword ptr [eax]
        push    0
        push    ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x40], edx
        mov     dword ptr [esp + 0x50], eax
        mov     dword ptr [esp + 0x60], ecx
        pop     ebp
L6A7241:
        mov     eax, dword ptr [esp + 0x6c]
        fld     dword ptr [eax]
        fsub    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [eax + 4]
        fsub    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x5c]
        fst     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        faddp   st(1), st(0)
        fcomp   dword ptr [g_76C5B0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        test    ah, 0x40
        je      L6A7299
        fld     dword ptr [g_76D064]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x54
        ret     0xc
L6A7299:
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_0040D560
        fld     dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x48]
        fld     dword ptr [esp + 0x58]
        fld     dword ptr [esp + 0x2c]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x28]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fxch    st(3)
        fmul    dword ptr [esp + 0x24]
        faddp   st(3), st(0)
        __emit  0xDD            /* fstp st(0): MSVC6 emits wrong form */
        __emit  0xD8
        __emit  0xDD            /* fstp st(0): MSVC6 emits wrong form */
        __emit  0xD8
        fcom    dword ptr [g_76C5B0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        test    ah, 1
        je      L6A72DC
        fchs
L6A72DC:
        cmp     byte ptr [ebx + 8], 1
        jne     L6A72E8
        fsubr   dword ptr [g_76D064]
L6A72E8:
        fcom    dword ptr [g_76D064]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        test    ah, 0x41
        jne     L6A7306
        pop     edi
        __emit  0xDD            /* fstp st(0): MSVC6 emits wrong form */
        __emit  0xD8
        fld     dword ptr [g_76D064]
        pop     esi
        pop     ebx
        add     esp, 0x54
        ret     0xc
L6A7306:
        fcom    dword ptr [g_76C5B0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        test    ah, 1
        je      L6A731B
        __emit  0xDD            /* fstp st(0): MSVC6 emits wrong form */
        __emit  0xD8
        fld     dword ptr [g_76C5B0]
L6A731B:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
