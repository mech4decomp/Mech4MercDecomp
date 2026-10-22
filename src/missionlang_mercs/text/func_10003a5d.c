/*
 * FUN_10003a5d (27 B) — __stdcall wrapper around __local_unwind2
 * (FUN_100038ea). Reads a context struct: pushes [ECX+0x1c] then
 * [ECX+0x18] (reversed for __cdecl), calls FUN_100038ea, cleans 8 bytes.
 * EBP is loaded from [ECX] but unused (transcribed verbatim).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100038ea(int a, int b);

__declspec(naked) void __stdcall FUN_10003a5d(void)
{
    __asm {
        push    ebp
        mov     ecx, dword ptr [esp + 8]
        mov     ebp, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x1c]
        push    eax
        mov     eax, dword ptr [ecx + 0x18]
        push    eax
        call    FUN_100038ea
        add     esp, 8
        pop     ebp
        ret     4
    }
}
