/*
 * FUN_00507B30 (651 B) — GameData physics-parameter validation.
 *
 * __cdecl, 5 args: (param_1, param_2, param_3, param_4, param_5).
 * Calls FUN_00502370, then dispatches on param_2[4] via a 7-entry jump
 * table (cases 6..0xc). Each case optionally calls a virtual method
 * (vtable[1]) to fill defaults, then validates a set of floats against
 * 0.0f (0x0076C5B0). On failure it formats an error string via _snprintf
 * (IAT 0x0076B424) and returns 0; on success returns the value from
 * FUN_00502370.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00502370(void);

extern float g_0076c5b0;   /* 0x0076C5B0 — 0.0f constant */
extern int   DAT_007b8d68; /* 0x007B8D68 */
extern int   DAT_007b8d6c; /* 0x007B8D6C */
extern int   DAT_007b8d70; /* 0x007B8D70 */
extern void *g_0076b424;   /* 0x0076B424 — _snprintf IAT entry */

__declspec(naked) void __cdecl FUN_00507b30(void)
{
    
__asm {
mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x10]
        sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        mov     bl, byte ptr [ebp]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        push    ebp
        push    esi
        test    bl, bl
        push    edi
        setnz   bl
        call    FUN_00502370
        mov     cl, al
        mov     eax, dword ptr [esi + 0x10]
        add     eax, -0x6
        add     esp, 0x14
        cmp     eax, 0x6
        ja      l_epilogue
        jmp     dword ptr [eax*4 + 0x507dbc]

    l_case6:
        test    bl, bl
        jnz     l_case6_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x28]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case6_skip:
        fld     dword ptr [edi + 0x1c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
        push    ebp
        push    0x7771c0
        jmp     l_snprintf

    l_case7:
        test    bl, bl
        jnz     l_case7_skip
        mov     eax, dword ptr [DAT_007b8d70]
        mov     ecx, dword ptr [DAT_007b8d68]
        mov     edx, dword ptr [DAT_007b8d6c]
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case7_skip:
        fld     dword ptr [edi + 0x20]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jnz     l_case7_err
        fld     dword ptr [edi + 0x24]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jnz     l_case7_err
        fld     dword ptr [edi + 0x28]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
    l_case7_err:
        push    ebp
        push    0x777188
        jmp     l_snprintf

    l_case8:
        test    bl, bl
        jnz     l_case8_skip
        mov     eax, dword ptr [DAT_007b8d70]
        mov     ecx, dword ptr [DAT_007b8d68]
        mov     edx, dword ptr [DAT_007b8d6c]
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case8_skip:
        fld     dword ptr [edi + 0x2c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jnz     l_case8_err
        fld     dword ptr [edi + 0x30]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jnz     l_case8_err
        fld     dword ptr [edi + 0x34]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
    l_case8_err:
        push    ebp
        push    0x77714c
        jmp     l_snprintf

    l_case9:
        test    bl, bl
        jnz     l_case9_skip
        mov     eax, dword ptr [DAT_007b8d70]
        mov     ecx, dword ptr [DAT_007b8d68]
        mov     edx, dword ptr [DAT_007b8d6c]
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x10]
        push    eax
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case9_skip:
        fld     dword ptr [edi + 0x38]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jnz     l_case9_err
        fld     dword ptr [edi + 0x3c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jnz     l_case9_err
        fld     dword ptr [edi + 0x40]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
    l_case9_err:
        push    ebp
        push    0x77710c
        jmp     l_snprintf

    l_case10:
        test    bl, bl
        jnz     l_case10_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x28]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case10_skip:
        fld     dword ptr [edi + 0x44]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
        push    ebp
        push    0x7770d0
        jmp     l_snprintf

    l_case0b:
        test    bl, bl
        jnz     l_case0b_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x28]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case0b_skip:
        fld     dword ptr [edi + 0x48]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
        push    ebp
        push    0x777094
        jmp     l_snprintf

    l_case0c:
        test    bl, bl
        jnz     l_case0c_skip
        mov     edx, dword ptr [esi]
        lea     eax, [esp + 0x28]
        push    eax
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0
        call    dword ptr [edx + 4]
        mov     cl, 1
    l_case0c_skip:
        fld     dword ptr [edi + 0x4c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw ax
        test    ah, 1
        jz      l_epilogue
        push    ebp
        push    0x77705c
        ; fall through into l_snprintf (reference has no JMP here)

    l_snprintf:
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_0076b424]
        add     esp, 0x10
        xor     cl, cl

    l_epilogue:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, cl
        pop     ebx
        add     esp, 0xc
        ret
    }

}
