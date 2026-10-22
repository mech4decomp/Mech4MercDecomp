/*
 * FUN_1003802e (111 B) — __cdecl.
 * WCHAR/char copy loop with a 0x7fffffff countdown; on underflow calls
 * FUN_1003a70a, else zeroes the byte and advances. Returns FUN_1003a822 result.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a822(void);
extern void __cdecl FUN_1003a70a(void);

__declspec(naked) void __cdecl func_1003802e(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        mov     eax, dword ptr [ebp + 0x8]
        push    esi
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x20], eax
        lea     eax, [ebp + 0x10]
        mov     dword ptr [ebp - 0x14], 0x42
        push    eax
        lea     eax, [ebp - 0x20]
        push    dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x1c], 0x7fffffff
        push    eax
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
