/*
 * FUN_006e2fb0 (21 B) — __fastcall: call FUN_006e2eb0(0), set dword at (*param_1 - 0xc) = -1
 *
 * Disassembly:
 *   56                push esi
 *   8B F1             mov esi, ecx
 *   6A 00             push 0
 *   E8 F6 FE FF FF    call 0x006e2eb0
 *   8B 0E             mov ecx, dword ptr [esi]
 *   C7 41 F4 FF FF FF FF mov dword ptr [ecx - 0xc], 0xffffffff
 *   5E                pop esi
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006e2fb0(void)
{
    __asm {
        push esi
        mov esi, ecx
        push 0
        _emit 0xE8
        _emit 0xF6
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx - 0xc], 0xffffffff
        pop esi
        ret
    }
}
