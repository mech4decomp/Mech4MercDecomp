/*
 * FUN_005f6c60 (17 B) — Copies *param_2 to *param_1 if param_1 is non-null.
 *
 * __cdecl, two stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005f6c60(void *param_1, void *param_2)
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
