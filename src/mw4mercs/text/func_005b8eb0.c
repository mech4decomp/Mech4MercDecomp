/*
 * FUN_005b8eb0 (80 B) — Constructor. __fastcall (ECX = this), plain RET.
 * Calls FUN_00415180(DAT_007b8c10), initializes fields, calls
 * FUN_0041fc80(0) on this+0x10, sets vtables 0x76cd9c / 0x786cb4 /
 * 0x786cb0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00415180(void *p);
extern void __stdcall FUN_0041fc80(void *this_, void *p);

__declspec(naked) void *__fastcall FUN_005b8eb0(void *this_)
{
    

extern int DAT_007b8c10;
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        lea     edi, [esi + 0x10]
        push    0x0
        mov     ecx, edi
        mov     dword ptr [esi + 0x8], 0x0
        mov     dword ptr [esi + 0xc], 0x0
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_0041fc80
        or      eax, 0xffffffff
        mov     dword ptr [edi], 0x786cb4
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        pop     edi
        mov     dword ptr [esi + 0x18], 0x0
        mov     dword ptr [esi], 0x786cb0
        mov     eax, esi
        pop     esi
        ret
    }


}
