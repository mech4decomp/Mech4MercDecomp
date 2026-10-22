/*
 * FUN_004D2B80 — Destructor body called by Database vtable 0x77260C slot 1
 * (FUN_004D2B60, "vtable_dtor_1").
 *
 * Tears down the object: sets vtable to 0x772610, iterates and destroys
 * all items in a sub-list (via a stack-allocated iterator), then destroys
 * sub-objects at +0x2c, +0x14, and finally the base object.
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

/* ---- external functions (called via inline asm, decoration irrelevant) ---- */
extern void __stdcall FUN_00417170(void);
extern void __stdcall FUN_00417230(void);
extern void __stdcall FUN_004171b0(void);
extern void __stdcall FUN_00417980(void);
extern void __stdcall FUN_00416e50(void);
extern void __stdcall FUN_00415380(void);

__declspec(naked) void __stdcall database_dtor_body_1(void)
{
    __asm {
        sub     esp, 0x14
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x14]
        push    edi
        lea     ecx, [esp + 0x0c]
        mov     dword ptr [esi], 0x772610
        call    FUN_00417170

        lea     ecx, [esp + 0x08]
        mov     dword ptr [esp + 0x08], 0x7725a0
        call    FUN_00417230
        test    eax, eax
        je      l_done

    l_loop:
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
        lea     ecx, [esp + 0x08]
        call    FUN_00417230
        test    eax, eax
        jne     l_loop

    l_done:
        lea     ecx, [esp + 0x08]
        call    FUN_004171b0
        lea     ecx, [esi + 0x2c]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_00416e50
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        add     esp, 0x14
        ret
    }
}
