/*
 * Vtable 0x77260C slot 8 — FUN_00416F20 (53 B).
 *
 * Register/add: calls virtual method at vtable+0x20 on this, then passes
 * the result through FUN_00416F90, FUN_00417030, and FUN_00415BE0(0, result).
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 * CFLAGS: /O1
 */

extern void __stdcall FUN_00416f90(void *result);
extern void __stdcall FUN_00417030(void);
extern void __stdcall FUN_00415be0(int zero, void *result);

__declspec(naked) void __stdcall vtable_register(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        push    ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edi, eax
        push    edi
        mov     ecx, esi
        call    FUN_00416f90
        mov     ecx, esi
        call    FUN_00417030
        push    edi
        push    0
        mov     ecx, esi
        call    FUN_00415be0
        pop     edi
        pop     esi
        ret     8
    }
}
