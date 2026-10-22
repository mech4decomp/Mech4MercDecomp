/*
 * FUN_004C8AD0 (40 B) — Free struct fields and zero them.
 *
 * __thiscall (ECX = this), RET 4.
 * If this->field_04 is non-null, frees this->field_00 via FUN_004084E0,
 * then zeroes both field_00 and field_04.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_004c8ad0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        je      l_done
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 4], 0
    l_done:
        pop     esi
        ret     4
    }
}
