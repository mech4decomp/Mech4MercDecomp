/*
 * FUN_0068c2b0 (43 B) — __thiscall constructor.
 *
 * Calls FUN_006b0710(param_1, param_2), sets this+0x20=1, this+0x8=1,
 * this->vtable=0x798e68, returns this. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0710(void);

__declspec(naked) void FUN_0068c2b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006b0710
        mov     eax, 0x1
        mov     byte ptr [esi + 0x20], al
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi], 0x798e68
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
