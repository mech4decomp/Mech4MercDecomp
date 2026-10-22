/*
 * FUN_00680b30 (29 B) — __thiscall HUD helper. If this->field_0x18 is
 * non-null, calls FUN_00680730(param_1, param_2, 0, 0).
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00680730(void *a, void *b, int c, int d);

__declspec(naked) void __stdcall FUN_00680b30(void *param_1, void *param_2)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x18]
        test    ecx, ecx
        jz      L_ret
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    0
        push    0
        push    eax
        push    edx
        call    FUN_00680730
L_ret:
        ret     0x8
    }
}
