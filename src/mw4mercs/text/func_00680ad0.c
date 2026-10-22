/*
 * FUN_00680ad0 (59 B) — __thiscall helper: constructs a temporary object
 * (vtable 0x7989f4) on the stack and returns a value from a sub-call.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void *this);
extern void *__cdecl FUN_00416d50(void *this);
extern void __cdecl FUN_00416c60(void *this);
extern unsigned long g_vtable_7989f4; /* PTR_LAB_007989f4 */

__declspec(naked) void *__stdcall FUN_00680ad0(void *this, void *param_1)
{
    __asm {
        sub     esp, 0x14
        add     ecx, 0x1c
        push    esi
        push    ecx
        lea     ecx, [esp + 0x8]
        call    FUN_00416bc0
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x8]
        mov     dword ptr [esp + 0x8], offset g_vtable_7989f4
        call    FUN_00416d50
        lea     ecx, [esp + 0x4]
        mov     esi, eax
        call    FUN_00416c60
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret     0x4
    }
}
