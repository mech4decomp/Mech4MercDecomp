/*
 * FUN_006187b0 (20 B) — __thiscall: calls virtual method [vtable+0x20] on the
 * object at [arg0], passing this+0x7c and 4. Returns via RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006187b0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     edx, dword ptr [ecx]
        push    0x4
        add     eax, 0x7c
        push    eax
        call    dword ptr [edx+0x20]
        ret     0x4
    }
}
