/*
 * FUN_00698b10 (17 B) — __cdecl helper: if dst pointer is non-null,
 * copy *src into *dst (single dword copy). Vector element copy helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00698b10(void)
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
