/*
 * FUN_005d9920 (31 B) — __thiscall ctor. Calls FUN_004dfd70(DAT_007dc6b8),
 * sets vtable ptr 0x7882a4 and this->[0x10]=0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dfd70(int);

__declspec(naked) void __cdecl FUN_005d9920(void)
{
    

extern int DAT_007dc6b8;
__asm {
        mov eax, dword ptr [DAT_007dc6b8]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004dfd70
        mov     dword ptr [esi], 0x7882a4
        mov     dword ptr [esi + 0x10], 0
        mov     eax, esi
        pop     esi
        ret
    }


}
