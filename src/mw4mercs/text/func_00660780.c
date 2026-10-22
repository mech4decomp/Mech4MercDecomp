/*
 * FUN_00660780 (71 B) — __fastcall constructor (ECX = this).
 *
 * Calls FUN_006a24c0, then initializes sub-objects at this+0xc / this+0x1c /
 * this+0x28 via FUN_006a2800 / FUN_006a28d0 / FUN_006a2400, setting the
 * vtable pointers 0x7952d0 / 0x795334 / 0x795350. Returns this in EAX.
 *
 * __fastcall, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006a24c0(void);
extern void __stdcall FUN_006a2800(float a, float b);
extern void __stdcall FUN_006a28d0(void);
extern void __stdcall FUN_006a2400(int a, float b);

__declspec(naked) void * __fastcall FUN_00660780(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a24c0
        push    0x41200000
        push    0x3fc00000
        lea     ecx, [esi + 0xc]
        mov     dword ptr [esi], 0x7952d0
        call    FUN_006a2800
        lea     ecx, [esi + 0x1c]
        call    FUN_006a28d0
        push    0x3f800000
        push    0x1
        lea     ecx, [esi + 0x28]
        mov     dword ptr [esi], 0x795334
        call    FUN_006a2400
        mov     dword ptr [esi], 0x795350
        mov     eax, esi
        pop     esi
        ret
    }
}
