/*
 * FUN_0055b1d0 (45 B) — Calls FUN_0054BCD0 with float params and ptr 0x0077DD1C.
 * Bytes: 68 CD CC 4C 3F 68 00 00 00 3F 68 00 00 80 3F 68 00 00 80 3F 68 1C DD 77 00 6A 03 E8 00 0B F9 FF 83 C4 18 6A 00 8B C8 E8 94 0C F9 FF C3
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055b1d0(void)
{
    

extern void __cdecl FUN_1004ebcda(void);
extern void __cdecl FUN_1004ebe6e(void);
__asm {
push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push 0x77dd1c
        push    3
        call FUN_1004ebcda
        add     esp, 0x18
        push    0
        mov     ecx, eax
        call FUN_1004ebe6e
        ret
    }


}
