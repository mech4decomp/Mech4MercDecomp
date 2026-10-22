/*
 * FUN_00630010 (28 B) — virtual dispatch: calls vtable[0x14](0xa0) on the
 * object, then FUN_0050ced0(obj).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0050ced0(void *a);

__declspec(naked) void FUN_00630010(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0xa0
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_0050ced0
        add     esp, 0x4
        pop     esi
        ret
    }
}
