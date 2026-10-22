/*
 * FUN_00416d50 (36 B) — __thiscall (RET 0x4). Calls FUN_00416b80(arg)
 * with this->[+4] as the object; on success stores the result at
 * this->[+0x10] and returns result->[+0xc], else returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00416b80(void);

__declspec(naked) void FUN_00416d50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00416b80
        test    eax, eax
        jz      fail
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [eax + 0xc]
        pop     esi
        ret     0x4
fail:
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
