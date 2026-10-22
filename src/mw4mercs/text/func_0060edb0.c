/*
 * FUN_0060EDB0 (18 B) — __thiscall. If this->[0x4] is non-null, calls
 * FUN_005905f0 on it; returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005905f0(void);

__declspec(naked) void __fastcall FUN_0060EDB0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x4]
        test    ecx, ecx
        jz      L_BC
        call    FUN_005905f0
L_BC:
        mov     eax, 0x1
        ret
    }
}
