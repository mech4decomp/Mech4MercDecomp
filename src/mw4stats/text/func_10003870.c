/* FUN_10003870 - __fastcall, 25 bytes
 * Constructor: base init FUN_10003890, set vtable 0x10021238, FUN_10004920. */

extern void __cdecl FUN_10003890(void);
extern void __cdecl FUN_10004920(void);

__declspec(naked) void FUN_10003870(void)
{
    __asm {
        push esi
        mov  esi, ecx
        call FUN_10003890
        mov  ecx, esi
        mov  dword ptr [esi], 0x10021238
        call FUN_10004920
        mov  eax, esi
        pop  esi
        ret
    }
}
