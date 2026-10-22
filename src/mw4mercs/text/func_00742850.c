/*
 * FUN_00742850 (192 B) — looks up a string by code via FUN_00701f20 and
 * copies it into a global buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8abcf2;
extern void __cdecl FUN_00701f20(void);

__declspec(naked) void FUN_00742850(void)
{
    __asm {
        push    esi
        push    0
        push    0
        push    5
        call    FUN_00701f20
        mov     esi, dword ptr [esp+8]
        cmp     esi, eax
        jne     L_286d
        mov     eax, 0x7a9b5c
        pop     esi
        ret     4
    L_286d:
        push    0
        push    0
        push    6
        call    FUN_00701f20
        cmp     esi, eax
        jne     L_2885
        mov     eax, 0x7a9b50
        pop     esi
        ret     4
    L_2885:
        push    0
        push    0
        push    4
        call    FUN_00701f20
        cmp     esi, eax
        jne     L_289d
        mov     eax, 0x7a9b44
        pop     esi
        ret     4
    L_289d:
        push    edi
        push    0
        push    0
        push    esi
        push    9
        call    FUN_00701f20
        push    eax
        push    7
        call    FUN_00701f20
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, 0x8abce8
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7a9b38
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8abce8
        repne scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     edi
        mov     byte ptr [g_8abcf2], al
        mov     eax, 0x8abce8
        pop     esi
        ret     4
    }
}
