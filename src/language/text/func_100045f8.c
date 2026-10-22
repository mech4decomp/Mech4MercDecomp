/*
 * FUN_100045f8 (204 B, __thiscall) — locale-aware single-character
 * case-mapping. If the default LCID (g_10008c24) is 0, do a fast ASCII
 * range check. Otherwise consult the character-type table (g_100084e8)
 * and, for characters needing full mapping, call the LCMapString wrapper
 * FUN_100041e8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008c24;                       /* default LCID */
extern int g_100086f4;                       /* table-mode flag */
extern char *g_100084e8;                     /* character-type table ptr */

extern void __cdecl FUN_100046c4(void);      /* thiscall table lookup */
extern int __cdecl FUN_100041e8(void);       /* LCMapString wrapper */

__declspec(naked) unsigned int FUN_100045f8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        cmp     dword ptr [g_10008c24], 0
        push    ebx
        jnz     L_23
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, 0x61
        jl      L_c1
        cmp     eax, 0x7a
        jg      L_c1
        sub     eax, 0x20
        jmp     L_c1
L_23:
        mov     ebx, dword ptr [ebp + 8]
        cmp     ebx, 0x100
        jge     L_56
        cmp     dword ptr [g_100086f4], 1
        jle     L_43
        push    2
        push    ebx
        call    FUN_100046c4
        pop     ecx
        pop     ecx
        jmp     L_4e
L_43:
        mov     eax, dword ptr [g_100084e8]
        mov     al, byte ptr [eax + ebx*2]
        and     eax, 2
L_4e:
        test    eax, eax
        jnz     L_56
L_52:
        mov     eax, ebx
        jmp     L_c1
L_56:
        mov     edx, dword ptr [g_100084e8]
        mov     eax, ebx
        sar     eax, 8
        movzx   ecx, al
        test    byte ptr [edx + ecx*2 + 1], 0x80
        jz      L_79
        and     byte ptr [ebp + 0xa], 0
        mov     byte ptr [ebp + 8], al
        mov     byte ptr [ebp + 9], bl
        push    2
        jmp     L_82
L_79:
        and     byte ptr [ebp + 9], 0
        mov     byte ptr [ebp + 8], bl
        push    1
L_82:
        pop     eax
        lea     ecx, [ebp - 4]
        push    1
        push    0
        push    3
        push    ecx
        push    eax
        lea     eax, [ebp + 8]
        push    eax
        push    0x200
        push    dword ptr [g_10008c24]
        call    FUN_100041e8
        add     esp, 0x20
        test    eax, eax
        jz      L_52
        cmp     eax, 1
        jnz     L_b4
        movzx   eax, byte ptr [ebp - 4]
        jmp     L_c1
L_b4:
        movzx   eax, byte ptr [ebp - 3]
        movzx   ecx, byte ptr [ebp - 4]
        shl     eax, 8
        or      eax, ecx
L_c1:
        pop     ebx
        leave
        ret
    }
}
