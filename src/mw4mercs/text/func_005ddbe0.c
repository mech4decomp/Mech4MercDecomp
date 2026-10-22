/*
 * FUN_005ddbe0 (14 B) — __thiscall, RET 0.
 *
 * If *this != 0, calls FUN_004084e0(*this) to free it.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __cdecl func_005ddbe0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      LED
        push    eax
        call    FUN_004084e0
        pop     ecx
LED:
        ret
    }
}
