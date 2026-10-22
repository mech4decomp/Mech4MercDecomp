/*
 * FUN_006F22F0 (20 B) — Clamp: if param_1[0] != param_1[1] and
 * 0 <= param_1[0] <= 5, copy param_1[0] to param_1[1].
 *
 * __fastcall (ECX = param_1).
 *
 * Disassembly:
 *   8B 01             mov     eax, [ecx]
 *   39 41 04          cmp     [ecx + 4], eax
 *   74 0C             jz      skip
 *   85 C0             test    eax, eax
 *   7C 08             jl      skip
 *   83 F8 05          cmp     eax, 5
 *   7F 03             jg      skip
 *   89 41 04          mov     [ecx + 4], eax
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006f22f0(int *param_1)
{
    __asm {
        mov     eax, dword ptr [ecx]
        cmp     dword ptr [ecx + 4], eax
        jz      skip
        test    eax, eax
        jl      skip
        cmp     eax, 5
        jg      skip
        mov     dword ptr [ecx + 4], eax
skip:
        ret
    }
}
