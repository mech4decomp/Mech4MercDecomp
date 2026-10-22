/*
 * FUN_00660d40 (25 B) — __thiscall constructor: calls FUN_006a2400(1, 1.0f)
 * then installs vtable 0x7953d8 and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a2400(int, float);

__declspec(naked) void FUN_00660d40(void)
{
    __asm {
        push    esi
        push    0x3f800000
        mov     esi, ecx
        push    0x1
        call    FUN_006a2400
        mov     dword ptr [esi], 0x7953d8
        mov     eax, esi
        pop     esi
        ret
    }
}
