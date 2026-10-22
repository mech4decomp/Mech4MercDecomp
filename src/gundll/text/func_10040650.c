/*
 * FUN_10040650 (33 B) — __cdecl.
 * Counts leading alphabetic characters (A-Z, a-z) in a string.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10040650(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        xor     eax, eax
    again:
        mov     cl, byte ptr [edx]
        inc     edx
        cmp     cl, 0x41
        jl      lower
        cmp     cl, 0x5a
        jle     count
    lower:
        cmp     cl, 0x61
        jl      done
        cmp     cl, 0x7a
        jg      done
    count:
        inc     eax
        jmp     again
    done:
        ret
    }
}
