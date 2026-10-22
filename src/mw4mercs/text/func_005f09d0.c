/*
 * FUN_005f09d0 (18 B) — __thiscall. Virtual call: this->[0xe0] vtable slot
 * +4 with args (5, 0). Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_005f09d0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x5
        call    dword ptr [eax + 0x4]
        mov     al, 0x1
        ret
    }
}
