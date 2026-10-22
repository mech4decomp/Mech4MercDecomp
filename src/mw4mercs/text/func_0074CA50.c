/*
 * FUN_0074CA50 (132 B) — __stdcall RET 0x8 (2 params). Jump-table
 * dispatcher on the arg (value-0xf0, 4 cases) that selects a format
 * string and calls sprintf (IAT 0x76b420) into buffer 0x8baab4,
 * returning the buffer. Jump table at 0x74CAC4 (4 relocated dwords).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b420;   /* IAT: sprintf */

__declspec(naked) void FUN_0074CA50(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        cmp     ecx, 0xf0
        jbe     L74caa6
        lea     eax, [ecx - 0xf0]
        cmp     eax, 3
        ja      L74ca8a
        jmp     dword ptr [eax*4 + 0x74cac4]
    L74ca6e:
        push    0x7ab7b4
        jmp     L74caab
    L74ca75:
        push    0x7ab7a4
        jmp     L74caab
    L74ca7c:
        push    0x7ab798
        jmp     L74caab
    L74ca83:
        push    0x7ab790
        jmp     L74caab
    L74ca8a:
        push    ecx
        push    0x7a27b0
        push    0x8baab4
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        mov     eax, 0x8baab4
        ret     8
    L74caa6:
        push    0x7ab780
    L74caab:
        push    0x8baab4
        call    dword ptr [g_0076b420]
        add     esp, 8
        mov     eax, 0x8baab4
        ret     8
        __emit 0x8D  /* alignment pad lea ecx,[ecx] (8D 49 00) */
        __emit 0x49
        __emit 0x00
        /* jump-table data @ 0x74CAC4 (4 relocated dwords, literal bytes) */
        __emit 0x6E  /* 0x0074CA6E */
        __emit 0xCA
        __emit 0x74
        __emit 0x00
        __emit 0x75  /* 0x0074CA75 */
        __emit 0xCA
        __emit 0x74
        __emit 0x00
        __emit 0x7C  /* 0x0074CA7C */
        __emit 0xCA
        __emit 0x74
        __emit 0x00
        __emit 0x83  /* 0x0074CA83 */
        __emit 0xCA
        __emit 0x74
        __emit 0x00
    }
}
