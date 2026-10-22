/*
 * FUN_10005cf0 (27 B) - __thiscall. Calls FUN_10006190, copies a dword.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006190(void);

__declspec(naked) void __cdecl FUN_10005cf0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_10006190
        mov     eax, dword ptr [edi + 4]
        mov     dword ptr [esi + 4], eax
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
