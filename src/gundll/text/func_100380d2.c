/*
 * FUN_100380d2 (111 B) — __cdecl.
 * WCHAR copy loop with countdown (param_2*2); on underflow calls
 * FUN_1003a70a, else zeroes the byte and advances. Returns FUN_1003a822 result.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a822(void);
extern void __cdecl FUN_1003a70a(void);

__declspec(naked) void __cdecl func_100380d2(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        push    dword ptr [ebp + 0x14]
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x20], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x10]
        add     eax, eax
        mov     dword ptr [ebp - 0x1c], eax
        lea     eax, [ebp - 0x20]
        push    eax
        mov     dword ptr [ebp - 0x14], 0x42
        call    FUN_1003a822
        add     esp, 0xc
        dec     dword ptr [ebp - 0x1c]
        mov     esi, eax
        js      under1
        mov     eax, dword ptr [ebp - 0x20]
        and     byte ptr [eax], 0
        inc     dword ptr [ebp - 0x20]
        jmp     next
    under1:
        lea     eax, [ebp - 0x20]
        push    eax
        push    0
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
    next:
        dec     dword ptr [ebp - 0x1c]
        js      under2
        mov     eax, dword ptr [ebp - 0x20]
        and     byte ptr [eax], 0
        jmp     done
    under2:
        lea     eax, [ebp - 0x20]
        push    eax
        push    0
        call    FUN_1003a70a
        pop     ecx
        pop     ecx
    done:
        mov     eax, esi
        pop     esi
        leave
        ret
    }
}
