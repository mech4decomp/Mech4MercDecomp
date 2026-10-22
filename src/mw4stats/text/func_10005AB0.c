/*
 * FUN_10005ab0 (31 B) - constructor. Calls base ctor FUN_10003890,
 * sub-object ctor FUN_10001170 at +0x10, installs vtable 0x10021274.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003890(void);
extern void __cdecl FUN_10001170(void);

__declspec(naked) void __cdecl FUN_10005ab0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003890
        push    0x400
        lea     ecx, [esi + 0x10]
        call    FUN_10001170
        mov     dword ptr [esi], 0x10021274
        mov     eax, esi
        pop     esi
        ret
    }
}
