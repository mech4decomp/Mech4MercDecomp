/*
 * FUN_005da7d0 (14 B) — __fastcall (ECX = param). If [param] != 0,
 * frees it via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void FUN_005da7d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        pop     ecx
    L1:
        ret
    }
}
