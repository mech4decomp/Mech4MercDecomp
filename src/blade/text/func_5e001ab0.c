/*
 * FUN_5e001ab0 (16 B) — increments a refcount at this+0x54 and returns it.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_5e001ab0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x54]
        inc     ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     eax, ecx
        ret     4
    }
}
