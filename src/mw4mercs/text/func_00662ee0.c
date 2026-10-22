/*
 * FUN_00662ee0 (15 B) — virtual dispatch thunk: calls vtable slot +0x30
 * on the object in arg1, passing arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00662ee0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x30]
        ret
    }
}
