/*
 * FUN_10005bf0 (38 B) - __thiscall. Calls sub-object ctor FUN_10005c20
 * at +0x1d0 and FUN_10003b90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005c20(void);
extern void __cdecl FUN_10003b90(void);

__declspec(naked) void __cdecl FUN_10005bf0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        push    edi
        lea     ecx, [esi + 0x1d0]
        call    FUN_10005c20
        mov     eax, dword ptr [esp + 0xc]
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_10003b90
        pop     edi
        pop     esi
        ret     0x8
    }
}
