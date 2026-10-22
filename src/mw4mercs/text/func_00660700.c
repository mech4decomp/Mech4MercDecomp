/*
 * FUN_00660700 (33 B) — __thiscall constructor.
 *
 * Calls FUN_006a22a0() (thiscall), then FUN_006a2400(1, 0x3f800000) with
 * this+8, sets vtable pointer 0x795344 at [this], returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a2400(int a, float b);

__declspec(naked) void FUN_00660700(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        push    0x3f800000
        push    0x1
        lea     ecx, [esi + 0x8]
        call    FUN_006a2400
        mov     dword ptr [esi], 0x795344
        mov     eax, esi
        pop     esi
        ret
    }
}
