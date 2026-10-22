/*
 * FUN_10005c20 (39 B) - __thiscall. Calls FUN_10005c50 then sub-object
 * ctor FUN_10005cf0 at +0x284.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005c50(void);
extern void __cdecl FUN_10005cf0(void);

__declspec(naked) void __cdecl FUN_10005c20(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_10005c50
        add     edi, 0x284
        push    edi
        lea     ecx, [esi + 0x284]
        call    FUN_10005cf0
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
