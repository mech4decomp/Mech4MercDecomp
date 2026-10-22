/*
 * FUN_006495b0 (687 B) — Tokenizer switch-dispatch. Reads a char from
 * DAT_008058b0, appends it to the buffer at PTR_DAT_007b5a20, then
 * dispatches through a jump table (0x649860) indexed by a lookup table
 * (0x6498a8) to classify the char into a token id (DAT_008058ac).
 *
 * __cdecl, no params, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_007b5a20;      /* PTR_DAT_007b5a20 */
extern char g_008058b0;       /* DAT_008058b0 */
extern int g_008058ac;        /* DAT_008058ac */
extern void __cdecl FUN_00648fe0(void);
extern char g_6498a8[];       /* jump-table index lookup table */
extern int g_649860[];        /* jump table (data, outside function slice) */

__declspec(naked) void __cdecl FUN_006495b0(void)
{
    __asm {
        mov     ecx, dword ptr [g_007b5a20]
        mov     al, byte ptr [g_008058b0]
        mov     byte ptr [ecx], al
        movsx   eax, al
        inc     ecx
        add     eax, -0x23
        cmp     eax, 0x3a
        mov     dword ptr [g_007b5a20], ecx
        ja      L_default
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_6498a8]
        jmp     dword ptr [ecx*4 + g_649860]

    L_case5:                    /* '*' */
        mov     dword ptr [g_008058ac], 0x5
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case6:                    /* '(' */
        mov     dword ptr [g_008058ac], 0x6
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case7:                    /* ')' */
        mov     dword ptr [g_008058ac], 0x7
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case8:                    /* '-' */
        mov     dword ptr [g_008058ac], 0x8
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case9:                    /* '+' */
        mov     dword ptr [g_008058ac], 0x9
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_caseB:                    /* '[' */
        mov     dword ptr [g_008058ac], 0xb
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_caseC:                    /* ']' */
        mov     dword ptr [g_008058ac], 0xc
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_caseE:                    /* ';' */
        mov     dword ptr [g_008058ac], 0xe
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case39:                   /* '@' */
        mov     dword ptr [g_008058ac], 0x39
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case46:                   /* '#' */
        mov     dword ptr [g_008058ac], 0x46
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case11:                   /* ',' */
        mov     dword ptr [g_008058ac], 0x11
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case13:                   /* '/' */
        mov     dword ptr [g_008058ac], 0x13
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_case_lt:                  /* '<' */
        call    FUN_00648fe0
        cmp     byte ptr [g_008058b0], 0x3d
        jnz     L_lt_else
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], 0x3d
        inc     eax
        mov     dword ptr [g_007b5a20], eax
        mov     dword ptr [g_008058ac], 0x14
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret
    L_lt_else:
        mov     edx, dword ptr [g_007b5a20]
        mov     dword ptr [g_008058ac], 0xa
        mov     byte ptr [edx], 0
        ret

    L_case_eq:                  /* '=' */
        call    FUN_00648fe0
        mov     al, byte ptr [g_008058b0]
        cmp     al, 0x3d
        jnz     L_eq_gt
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], 0x3d
        inc     eax
        mov     dword ptr [g_007b5a20], eax
        mov     dword ptr [g_008058ac], 0x15
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret
    L_eq_gt:
        cmp     al, 0x3e
        jnz     L_eq_else
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], 0x3e
        inc     eax
        mov     dword ptr [g_007b5a20], eax
        mov     dword ptr [g_008058ac], 0x17
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret
    L_eq_else:
        mov     edx, dword ptr [g_007b5a20]
        mov     dword ptr [g_008058ac], 0xf
        mov     byte ptr [edx], 0
        ret

    L_case_gt:                  /* '>' */
        call    FUN_00648fe0
        cmp     byte ptr [g_008058b0], 0x3d
        jnz     L_gt_else
        mov     eax, dword ptr [g_007b5a20]
        mov     byte ptr [eax], 0x3d
        inc     eax
        mov     dword ptr [g_007b5a20], eax
        mov     dword ptr [g_008058ac], 0x16
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret
    L_gt_else:
        mov     edx, dword ptr [g_007b5a20]
        mov     dword ptr [g_008058ac], 0x10
        mov     byte ptr [edx], 0
        ret

    L_case12:                   /* '.' */
        mov     dword ptr [g_008058ac], 0x12
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_caseD:                    /* ':' */
        mov     dword ptr [g_008058ac], 0xd
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret

    L_default:
        mov     dword ptr [g_008058ac], 0x19
        call    FUN_00648fe0
        mov     edx, dword ptr [g_007b5a20]
        mov     byte ptr [edx], 0
        ret
    }
}
