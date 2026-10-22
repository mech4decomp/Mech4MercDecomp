/*
 * FUN_006F7B10 (170 B) — Conditional value-setter with string matching.
 *
 * __fastcall (ECX = this), no stack params.
 * Checks this+0x0c (flag) and this+0x24 (name ptr). If both non-zero,
 * computes time delta and compares against this+0x4c. If delta >= threshold,
 * calls FUN_006f7840. On success, compares name against "GameVersion",
 * "Flags", then calls FUN_006f7bf0 with appropriate args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e90(void);
extern int __cdecl FUN_006f7840(void);
extern void __cdecl FUN_006f7bf0(const char *, int, int, int);

__declspec(naked) int __fastcall FUN_006F7B10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, [esi + 0x0c]
        test    al, al
        jz      l_return_false
        mov     eax, [esi + 0x24]
        test    eax, eax
        jz      l_return_false
        call    FUN_00707e90
        fsub    qword ptr [esi + 0x44]
        fcomp   qword ptr [esi + 0x4c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_return_false
        mov     ecx, esi
        call    FUN_006f7840
        test    al, al
        jz      l_return_false
        push    ebx
        _emit   0x8B
        _emit   0x1D
        _emit   0xAC
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        push    edi
        mov     edi, [esi + 0x24]
        push    0x79fa48
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     l_check_flags
        mov     ecx, [esi + 0x28]
        push    eax
        mov     eax, [esi + 0x2c]
        push    eax
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_006f7bf0
        pop     edi
        pop     ebx
        mov     al, 1
        pop     esi
        ret

    l_check_flags:
        push    0x79fae0
        push    edi
        call    ebx
        add     esp, 8
        test    eax, eax
        jnz     l_default
        mov     edx, [esi + 0x30]
        mov     eax, [esi + 0x2c]
        mov     ecx, [esi + 0x28]
        push    edx
        push    eax
        push    ecx
        push    edi
        mov     ecx, esi
        call    FUN_006f7bf0
        pop     edi
        pop     ebx
        mov     al, 1
        pop     esi
        ret

    l_default:
        mov     edx, [esi + 0x28]
        push    0
        push    0
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_006f7bf0
        pop     edi
        pop     ebx
        mov     al, 1
        pop     esi
        ret

    l_return_false:
        xor     al, al
        pop     esi
        ret
    }
}
