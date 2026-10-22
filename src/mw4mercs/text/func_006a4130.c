/*
 * FUN_006A4130 (44 B) — __fastcall (ECX = this) constructor. Calls
 * FUN_006a22a0(), sets [this+8]=0, calls FUN_006a2400(1, 1.0f) with
 * ECX=&this[0xc], sets [this+0x1c]=0, installs vtable 0x799df0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a2400(void);

__declspec(naked) void *__fastcall FUN_006a4130(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        push    0x3f800000
        push    0x1
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi + 0x8], 0
        call    FUN_006a2400
        mov     byte ptr [esi + 0x1c], 0
        mov     dword ptr [esi], 0x799df0
        mov     eax, esi
        pop     esi
        ret
    }
}
