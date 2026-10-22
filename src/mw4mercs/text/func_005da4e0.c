/*
 * FUN_005da4e0 (17 B) — If dst != 0, copy 4 bytes (1 dword) from src to dst.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005da4e0(void *dst, void *src)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      done
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
done:
        ret
    }
}
