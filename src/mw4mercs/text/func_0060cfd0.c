/*
 * FUN_0060CFD0 (29 B) — __stdcall (RET 0xC), 3 params. Calls
 * FUN_0060bed0(**(param_1+4), **(param_1+8), param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060bed0(void);

__declspec(naked) void __stdcall FUN_0060CFD0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [eax + 0x4]
        push    edx
        mov     edx, dword ptr [eax]
        push    edx
        call    FUN_0060bed0
        ret     0xc
    }
}
