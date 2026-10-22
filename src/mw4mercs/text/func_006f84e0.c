/*
 * FUN_006F84E0 (58 B) — Sorted array grow (realloc).
 *
 * Adds 100 to this->field_18, then reallocs this->field_10 to
 * (new_count * 8) bytes via realloc (import at 0x0076b310).
 * If realloc fails, calls FUN_006fabf0("Out of memory in GrowSorted.")
 * and INT3s if the result is non-zero.
 *
 * __fastcall (ECX = this), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(const char *msg);

__declspec(naked) void __fastcall FUN_006f84e0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi + 0x18]
        mov     ecx, dword ptr [esi + 0x10]
        add     edx, 100
        mov     eax, edx
        shl     eax, 3
        push    eax
        push    ecx
        mov     dword ptr [esi + 0x18], edx
        _emit   0xFF
        _emit   0x15
        _emit   0x10
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        add     esp, 8
        test    eax, eax
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        jnz     l_done
        push    0x0079FD38
        call    FUN_006fabf0
        add     esp, 4
        test    eax, eax
        jz      l_done
        int     3
    l_done:
        ret
    }
}
