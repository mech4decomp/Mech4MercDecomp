/*
 * FUN_10011f30 (34 B, __thiscall RET 0x4) - Initializes a small object:
 * stores a byte param at this+0x18, zeroes this+0x1c/0x20/0x24, calls a
 * method via IAT 0x1002103c, and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002103c;   /* IAT/function pointer */

__declspec(naked) void * __cdecl FUN_10011f30(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    esi
        mov     byte ptr [esi + 0x18], al
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        call    dword ptr [g_1002103c]
        mov     eax, esi
        pop     esi
        ret     4
    }
}
