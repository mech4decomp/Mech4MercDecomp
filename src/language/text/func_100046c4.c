/*
 * FUN_100046c4 (117 B, __thiscall) — character-type lookup with a
 * GetStringType wrapper fallback. For param_1+1 < 0x101, read the
 * character-type word directly from the table (g_100084e8). Otherwise
 * build a multibyte buffer and call FUN_10004437 (GetStringType wrapper)
 * to obtain the type flags, then AND with param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_100084e8;                     /* character-type table ptr */
extern int __cdecl FUN_10004437(void);       /* GetStringType wrapper */

__declspec(naked) unsigned int FUN_100046c4(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ebp + 8]
        lea     ecx, [eax + 1]
        cmp     ecx, 0x100
        ja      L_e2
        mov     ecx, dword ptr [g_100084e8]
        movzx   eax, word ptr [ecx + eax*2]
        jmp     L_34
L_e2:
        mov     ecx, eax
        push    esi
        mov     esi, dword ptr [g_100084e8]
        sar     ecx, 8
        movzx   edx, cl
        test    byte ptr [esi + edx*2 + 1], 0x80
        pop     esi
        jz      L_07
        and     byte ptr [ebp - 2], 0
        mov     byte ptr [ebp - 4], cl
        mov     byte ptr [ebp - 3], al
        push    2
        jmp     L_10
L_07:
        and     byte ptr [ebp - 3], 0
        mov     byte ptr [ebp - 4], al
        push    1
L_10:
        pop     eax
        lea     ecx, [ebp + 0xa]
        push    1
        push    0
        push    0
        push    ecx
        push    eax
        lea     eax, [ebp - 4]
        push    eax
        push    1
        call    FUN_10004437
        add     esp, 0x1c
        test    eax, eax
        jnz     L_30
        leave
        ret
L_30:
        movzx   eax, word ptr [ebp + 0xa]
L_34:
        and     eax, dword ptr [ebp + 0xc]
        leave
        ret
    }
}
