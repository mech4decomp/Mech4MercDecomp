/*
 * FUN_00680ff0 (37 B) — __thiscall counter/accumulator.
 *
 * this->[0x10]++; this->[0x14] += param_1->[0x14] + param_2;
 * FUN_004179b0(this+0x18, param_1).
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004179b0(void);

__declspec(naked) void __stdcall FUN_00680ff0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        inc     eax
        push    esi
        mov     esi, dword ptr [esp + 0xC]   ; param_2 (after push)
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [esp + 8]     ; param_1 (after push)
        mov     edx, dword ptr [eax + 0x14]
        add     edx, esi
        add     dword ptr [ecx + 0x14], edx
        push    eax
        add     ecx, 0x18
        call    FUN_004179b0
        pop     esi
        ret     8
    }
}
