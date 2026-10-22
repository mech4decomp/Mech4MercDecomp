/*
 * FUN_10006130 (18 B) - __fastcall ctor: calls FUN_10003890(this), sets
 * vtable pointer this[0] = 0x10021280, returns this.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003890(void);

__declspec(naked) void * __cdecl FUN_10006130(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10003890
        mov     dword ptr [esi], 0x10021280
        mov     eax, esi
        pop     esi
        ret
    }
}
