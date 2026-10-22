/*
 * FUN_10038141 (112 B) — __cdecl.
 * Wide-char string helper: builds a local buffer via FUN_1003a822, then
 * zero-fills up to param_2*2 bytes (falling back to FUN_1003a70a on
 * underflow). Returns the result of FUN_1003a822.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a822(void);
extern void __cdecl FUN_1003a70a(void);

__declspec(naked) void FUN_10038141(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x14], 0x42
        add     eax, eax
        mov     dword ptr [ebp - 0x1c], eax
        lea     eax, [ebp + 0x14]
        push    eax
        lea     eax, [ebp - 0x20]
        push    dword ptr [ebp + 0x10]
        push    eax
        call    FUN_1003a822
        add     esp, 0xc
        dec     dword ptr [ebp - 0x1c]
        mov     esi, eax
        js      L185
        mov     eax, dword ptr [ebp - 0x20]
        and     byte ptr [eax], 0
        inc     dword ptr [ebp - 0x20]
        jmp     L192
    L185:
        lea     eax, [ebp - 0x20]
        push    eax
        push    0
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
    L192:
        dec     dword ptr [ebp - 0x1c]
        js      L19f
        mov     eax, dword ptr [ebp - 0x20]
        and     byte ptr [eax], 0
        jmp     L1ac
    L19f:
        lea     eax, [ebp - 0x20]
        push    eax
        push    0
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
    L1ac:
        mov     eax, esi
        pop     esi
        leave
        ret
    }
}
