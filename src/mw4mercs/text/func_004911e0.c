/*
 * FUN_004911e0 (16 B) — __fastcall (ECX = param_1), void return.
 * Zeroes first two dwords of the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004911e0(void *param_1)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0x0
        mov     dword ptr [eax + 0x4], 0x0
        ret
    }
}
