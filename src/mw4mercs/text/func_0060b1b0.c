/*
 * FUN_0060b1b0 (36 B) — If this+4 is non-null, calls
 * FUN_005a3bc0(**(param+4)) with ECX = this+0x9a4. Returns 1.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a3bc0(void *param);

__declspec(naked) int __stdcall FUN_0060b1b0(void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        test    eax, eax
        jz      l_done
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [edx]
        push    ecx
        mov     ecx, dword ptr [eax + 0x9a4]
        call    FUN_005a3bc0
    l_done:
        mov     eax, 0x1
        ret     0x8
    }
}
