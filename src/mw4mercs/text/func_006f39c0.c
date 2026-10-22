/*
 * FUN_006f39c0 (21 B) — __fastcall constructor: call FUN_00707e70(0), store double at +0x08 and +0x00, set byte +0x10 = 1
 *
 * Disassembly:
 *   56                push esi
 *   6A 00             push 0
 *   8B F1             mov esi, ecx
 *   E8 A6 44 01 00    call 0x00707e70
 *   DD 56 08          fst qword ptr [esi + 8]
 *   DD 1E             fstp qword ptr [esi]
 *   C6 46 10 01       mov byte ptr [esi + 0x10], 1
 *   5E                pop esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006f39c0(void)
{
    __asm {
        push esi
        push 0
        mov esi, ecx
        _emit 0xE8
        _emit 0xA6
        _emit 0x44
        _emit 0x01
        _emit 0x00
        fst qword ptr [esi + 8]
        fstp qword ptr [esi]
        mov byte ptr [esi + 0x10], 1
        pop esi
        ret
    }
}
