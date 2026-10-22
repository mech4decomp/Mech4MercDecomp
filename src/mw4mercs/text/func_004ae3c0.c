/*
 * FUN_004AE3C0 (17 B) — __fastcall struct initializer.
 *   Sets [ecx] = 3, [ecx+4] = 0, [ecx+8] = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004ae3c0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 3
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret
    }
}
