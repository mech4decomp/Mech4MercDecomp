/*
 * FUN_0074e280 (914 B) — texture-stage state to string (switch dispatch).
 * Maps a texture-stage parameter id (param_1) to a wsprintfA/sprintf
 * format string, optionally converting an enum via a helper, and returns
 * the formatted buffer at 0x008ba214.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8ba214[];      /* 0x008ba214 output buffer */
extern char g_7ac234[];      /* 0x007ac234 "COLOROP=%s" */
extern char g_7ac224[];      /* 0x007ac224 "COLORARG1=%s" */
extern char g_7ac214[];      /* 0x007ac214 "COLORARG2=%s" */
extern char g_7ac208[];      /* 0x007ac208 "ALPHAOP=%s" */
extern char g_7ac1f8[];      /* 0x007ac1f8 "ALPHAARG1=%s" */
extern char g_7ac1e8[];      /* 0x007ac1e8 "ALPHAARG2=%s" */
extern char g_7ac1d8[];      /* 0x007ac1d8 "BUMPENVMAT00=%f" */
extern char g_7ac1c8[];      /* 0x007ac1c8 "BUMPENVMAT01=%f" */
extern char g_7ac1b8[];      /* 0x007ac1b8 "BUMPENVMAT10=%f" */
extern char g_7ac1a8[];      /* 0x007ac1a8 "BUMPENVMAT11=%f" */
extern char g_7ac194[];      /* 0x007ac194 "TEXCOORDINDEX=%d" */
extern char g_7ac188[];      /* 0x007ac188 "ADDRESS=%s" */
extern char g_7ac17c[];      /* 0x007ac17c "ADDRESSU=%s" */
extern char g_7ac170[];      /* 0x007ac170 "ADDRESSV=%s" */
extern char g_7ac15c[];      /* 0x007ac15c "BORDERCOLOR=0x%x" */
extern char g_7ac14c[];      /* 0x007ac14c "MAGFILTER=%s" */
extern char g_7ac13c[];      /* 0x007ac13c "MINFILTER=%s" */
extern char g_7ac12c[];      /* 0x007ac12c "MIPFILTER=%s" */
extern char g_7ac118[];      /* 0x007ac118 "MIPMAPLODBIAS=%f" */
extern char g_7ac108[];      /* 0x007ac108 "MAXMIPLEVEL=%d" */
extern char g_7ac0f4[];      /* 0x007ac0f4 "MAXANISOTROPY=%d" */
extern char g_7ac0e0[];      /* 0x007ac0e0 "BUMPENVLSCALE=%f" */
extern char g_7ac0cc[];      /* 0x007ac0cc "BUMPENVLOFFSET=%f" */
extern char g_79e7f8[];      /* 0x0079e7f8 "Unknown" */

extern int *g_wsprintfA;     /* IAT 0x0076b4f8 */
extern int *g_sprintf;       /* IAT 0x0076b420 */

extern char *__cdecl FUN_0074e140(void);
extern char *__cdecl FUN_0074e060(void);
extern char *__cdecl FUN_0074df50(void);
extern char *__cdecl FUN_0074dfa0(void);
extern char *__cdecl FUN_0074e000(void);
extern char *__cdecl FUN_0074e030(void);

__declspec(naked) void FUN_0074e280(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x8
        mov     ecx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0xc]
        dec     ecx
        cmp     ecx, 0x16
        mov     dword ptr [esp + 0x4], eax
        ja      L_default
        /* __emit: jump-table dispatch FF 24 8D [ecx*4+0x74e614]; MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x14
        __emit 0xE6
        __emit 0x74
        __emit 0x00
    L_case1:
        push    eax
        call    FUN_0074e140
        push    eax
        push    offset g_7ac234
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case2:
        push    eax
        call    FUN_0074e060
        push    eax
        push    offset g_7ac224
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case3:
        push    eax
        call    FUN_0074e060
        push    eax
        push    offset g_7ac214
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case4:
        push    eax
        call    FUN_0074e140
        push    eax
        push    offset g_7ac208
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case5:
        push    eax
        call    FUN_0074e060
        push    eax
        push    offset g_7ac1f8
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case6:
        push    eax
        call    FUN_0074e060
        push    eax
        push    offset g_7ac1e8
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case7:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac1d8
        push    offset g_8ba214
        call    dword ptr [g_sprintf]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case8:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac1c8
        push    offset g_8ba214
        call    dword ptr [g_sprintf]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case9:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac1b8
        push    offset g_8ba214
        call    dword ptr [g_sprintf]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case10:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac1a8
        push    offset g_8ba214
        call    dword ptr [g_sprintf]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0xb:
        push    eax
        push    offset g_7ac194
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0xc:
        push    eax
        call    FUN_0074df50
        push    eax
        push    offset g_7ac188
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0xd:
        push    eax
        call    FUN_0074df50
        push    eax
        push    offset g_7ac17c
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0xe:
        push    eax
        call    FUN_0074df50
        push    eax
        push    offset g_7ac170
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0xf:
        push    eax
        push    offset g_7ac15c
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x10:
        push    eax
        call    FUN_0074dfa0
        push    eax
        push    offset g_7ac14c
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x11:
        push    eax
        call    FUN_0074e000
        push    eax
        push    offset g_7ac13c
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x12:
        push    eax
        call    FUN_0074e030
        push    eax
        push    offset g_7ac12c
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x13:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac118
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x14:
        push    eax
        push    offset g_7ac108
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x15:
        push    eax
        push    offset g_7ac0f4
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0xc
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x16:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac0e0
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_case0x17:
        fld     dword ptr [esp + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_7ac0cc
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0x10
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    L_default:
        push    offset g_79e7f8
        push    offset g_8ba214
        call    dword ptr [g_wsprintfA]
        add     esp, 0x8
        mov     eax, offset g_8ba214
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
