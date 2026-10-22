/*
 * FUN_005fead0 (24 B) — __fastcall tiny member initializer.
 *
 * Reads a byte from the saved-ECX slot on the stack into [this], then
 * zeroes [this] and [this+4]. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005fead0(void)
{
    __asm {
        push    ecx
        mov     eax, ecx
        mov     cl, byte ptr [esp + 3]
        mov     byte ptr [eax], cl
        mov     dword ptr [eax], 0
        mov     dword ptr [eax + 4], 0
        pop     ecx
        ret
    }
}
