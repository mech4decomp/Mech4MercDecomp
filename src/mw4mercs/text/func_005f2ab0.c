/*
 * FUN_005f2ab0 (17 B) — copy *param_2 into *param_1 if param_1 != NULL.
 * Identical body to FUN_005f2a90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005f2ab0(void *param_1, void *param_2)
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
