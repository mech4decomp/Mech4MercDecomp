/*
 * FUN_00750720 (66 B) — EAX property-name lookup.
 *
 * If param_1 == 0x7A3310, returns a string selected by param_2 via a
 * jump table (0x750764); otherwise returns "Unknown" (0x79E7F8).
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char * __stdcall FUN_00750720(void)
{
    __asm {
        cmp     dword ptr [esp + 4], 0x7A3310
        jnz     unknown
        mov     eax, dword ptr [esp + 8]
        cmp     eax, 4
        ja      unknown
        jmp     dword ptr [eax*4 + 0x750764]
        mov     eax, 0x7ACEA4
        ret     8
        mov     eax, 0x7ACE98
        ret     8
        mov     eax, 0x7ACE88
        ret     8
        mov     eax, 0x7ACE80
        ret     8
unknown:
        mov     eax, 0x79E7F8
        ret     8
    }
}
