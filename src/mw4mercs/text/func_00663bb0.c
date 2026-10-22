/*
 * FUN_00663bb0 (25 B) — virtual dispatch: if vtable slot +0x10 returns
 * 1, call slot +0x14 on the same object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00663bb0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        cmp     al, 1
        jnz     done
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
done:
        pop     esi
        ret
    }
}
