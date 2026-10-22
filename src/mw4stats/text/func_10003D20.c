/*
 * FUN_10003D20 (31 B, __fastcall) - constructor. Calls FUN_10003890, then
 * FUN_10001170 on +0x4, sets vtable 0x10021244.
 *
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_10003890(void);
extern void __cdecl FUN_10001170(void);

__declspec(naked) void __cdecl FUN_10003D20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003890
        push    0x400
        lea     ecx, [esi+0x4]
        call    FUN_10001170
        mov     dword ptr [esi], 0x10021244
        mov     eax, esi
        pop     esi
        ret
    }
}
