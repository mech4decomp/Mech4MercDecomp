/*
 * FUN_006D4370 (44 B) — Recursive child-destroy helper.
 *
 * If this->field_18 is non-NULL, recursively calls itself on the child,
 * frees the child via FUN_004084e0, then zeros field_18 and field_1c.
 *
 * __thiscall (ECX = this), no stack params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006d4370(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x18]
        test    esi, esi
        jz      l_done
        mov     ecx, esi
        call    FUN_006d4370
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x18], 0
        mov     dword ptr [edi + 0x1c], 0
    l_done:
        pop     edi
        pop     esi
        ret
    }
}
