/*
 * FUN_006FD230 (48 B) — Stream read helper.
 *
 * If this->field_08 is NULL, returns 4. Otherwise calls vtable[0x18]
 * on the sub-object to read into a stack local, and if the result is 4,
 * calls vtable[0x1c] on the sub-object. Returns the stack local value.
 *
 * __thiscall (ECX = this), no stack params, returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006fd230(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [ecx + 8]
        test    esi, esi
        jnz     l_have_ptr
        mov     eax, 4
        pop     esi
        pop     ecx
        ret
    l_have_ptr:
        mov     eax, dword ptr [esi]
        lea     ecx, dword ptr [esp + 4]
        push    ecx
        push    esi
        call    dword ptr [eax + 0x18]
        cmp     dword ptr [esp + 4], 4
        jnz     l_skip
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x1c]
    l_skip:
        mov     eax, dword ptr [esp + 4]
        pop     esi
        pop     ecx
        ret
    }
}
