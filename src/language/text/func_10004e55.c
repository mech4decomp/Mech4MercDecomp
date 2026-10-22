/*
 * FUN_10004e55 (203 B, __thiscall) — locale-aware single-character
 * case-mapping (lowercase). If the default LCID (g_10008c24) is 0, do a
 * fast ASCII range check (0x41..0x5a -> +0x20). Otherwise consult the
 * character-type table (g_100084e8) and, for characters needing full
 * mapping, call the LCMapString wrapper FUN_100041e8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008c24;                       /* default LCID */
extern int g_100086f4;                       /* table-mode flag */
extern char *g_100084e8;                     /* character-type table ptr */

extern void __cdecl FUN_100046c4(void);      /* thiscall table lookup */
extern int __cdecl FUN_100041e8(void);       /* LCMapString wrapper */

__declspec(naked) unsigned int FUN_10004e55(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        cmp     dword ptr [g_10008c24], 0
        push    ebx
        push    esi
        push    edi
        jnz     L_e82
        mov     eax, dword ptr [ebp + 8]
        cmp     eax, 0x41
        jl      L_f1b
        cmp     eax, 0x5a
        jg      L_f1b
        add     eax, 0x20
        jmp     L_f1b
L_e82:
        mov     ebx, dword ptr [ebp + 8]
        mov     edi, 0x100
        push    1
        cmp     ebx, edi
        pop     esi
        jge     L_eb6
        cmp     dword ptr [g_100086f4], esi
        jle     L_ea4
        push    esi
        push    ebx
        call    FUN_100046c4
        pop     ecx
        pop     ecx
        jmp     L_eae
L_ea4:
        mov     eax, dword ptr [g_100084e8]
        mov     al, byte ptr [eax + ebx*2]
        and     eax, esi
L_eae:
        test    eax, eax
        jnz     L_eb6
L_eb2:
        mov     eax, ebx
        jmp     L_f1b
L_eb6:
        mov     edx, dword ptr [g_100084e8]
        mov     eax, ebx
        sar     eax, 8
        movzx   ecx, al
        test    byte ptr [edx + ecx*2 + 1], 0x80
        jz      L_eda
        and     byte ptr [ebp + 0xa], 0
        push    2
        mov     byte ptr [ebp + 8], al
        mov     byte ptr [ebp + 9], bl
        pop     eax
        jmp     L_ee3
L_eda:
        and     byte ptr [ebp + 9], 0
        mov     byte ptr [ebp + 8], bl
        mov     eax, esi
L_ee3:
        push    esi
        push    0
        lea     ecx, [ebp - 4]
        push    3
        push    ecx
        push    eax
        lea     eax, [ebp + 8]
        push    eax
        push    edi
        push    dword ptr [g_10008c24]
        call    FUN_100041e8
        add     esp, 0x20
        test    eax, eax
        jz      L_eb2
        cmp     eax, esi
        jnz     L_f0e
        movzx   eax, byte ptr [ebp - 4]
        jmp     L_f1b
L_f0e:
        movzx   eax, byte ptr [ebp - 3]
        movzx   ecx, byte ptr [ebp - 4]
        shl     eax, 8
        or      eax, ecx
L_f1b:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
