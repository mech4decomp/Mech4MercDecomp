/*
 * FUN_0066afa0 (250 B) — __stdcall, RET 4, one param (char*).
 *
 * String-to-enum lookup: compares param_1 against a series of type-name
 * strings via an indirect call through the global function pointer
 * DAT_0076b2ac (a _stricmp-like helper). Returns a small enum value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_0076b2ac;                       /* function pointer (stricmp-like) */
extern int __cdecl FUN_006fab90(char *fmt, char *arg);

__declspec(naked) int __stdcall FUN_0066afa0(char *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [DAT_0076b2ac]
        push    0x796c4c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066afc8
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret     0x4

    label_0066afc8:
        push    0x796c40
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066afe2
        pop     edi
        mov     eax, 0x3
        pop     esi
        pop     ebp
        ret     0x4

    label_0066afe2:
        push    0x796c30
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066affc
        pop     edi
        mov     eax, 0x4
        pop     esi
        pop     ebp
        ret     0x4

    label_0066affc:
        push    0x796c20
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066b016
        pop     edi
        mov     eax, 0x5
        pop     esi
        pop     ebp
        ret     0x4

    label_0066b016:
        push    0x796c00
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066b030
        pop     edi
        mov     eax, 0x6
        pop     esi
        pop     ebp
        ret     0x4

    label_0066b030:
        push    0x796be4
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066b04a
        pop     edi
        mov     eax, 0x7
        pop     esi
        pop     ebp
        ret     0x4

    label_0066b04a:
        push    0x796bcc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066b064
        pop     edi
        mov     eax, 0x8
        pop     esi
        pop     ebp
        ret     0x4

    label_0066b064:
        push    0x796bb0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     label_0066b07e
        pop     edi
        mov     eax, 0x2
        pop     esi
        pop     ebp
        ret     0x4

    label_0066b07e:
        push    esi
        push    0x796b70
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      label_0066b091
        int     3

    label_0066b091:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        pop     ebp
        ret     0x4
    }
}
