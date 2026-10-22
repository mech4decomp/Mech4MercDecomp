/*
 * FUN_1001b180 (128 B) — __thiscall, RET 0x8.
 * Copies a string + short array into this (offset 0x0 / 0x84), with
 * length bounds checks. Returns 0 on success, 0x80004003 on null args,
 * 0xc1120005 if a length exceeds 0x80.
 *
 * CFLAGS: /O1
 */

extern void *g_100491b4;                 /* IAT: lstrlenA */
extern void __cdecl FUN_1003791a(void);
extern void __cdecl FUN_10037f30(void);  /* _strncpy */
extern void __cdecl FUN_10037ef1(void);

__declspec(naked) void FUN_1001b180(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        jz      loc_b1f4
        mov     ebp, dword ptr [esp + 0x18]
        test    ebp, ebp
        jz      loc_b1f4
        push    eax
        call    dword ptr [g_100491b4]
        mov     edi, eax
        push    ebp
        inc     edi
        call    FUN_1003791a
        add     esp, 0x4
        mov     esi, eax
        inc     esi
        cmp     edi, 0x80
        ja      loc_b1e8
        cmp     esi, 0x80
        ja      loc_b1e8
        mov     eax, dword ptr [esp + 0x14]
        push    edi
        push    eax
        push    ebx
        call    FUN_10037f30
        push    esi
        lea     ecx, [ebx + 0x84]
        push    ebp
        push    ecx
        call    FUN_10037ef1
        add     esp, 0x18
        pop     edi
        mov     dword ptr [ebx + 0x80], esi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x8
    loc_b1e8:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120005
        pop     ebx
        ret     0x8
    loc_b1f4:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80004003
        pop     ebx
        ret     0x8
    }
}
