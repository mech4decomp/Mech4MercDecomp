/*
 * FUN_00603db0 (31 B) — __thiscall helper. Calls FUN_0041fd80 on the
 * sub-object at +0x40; returns 1 if it is null, else calls FUN_0041fd80
 * again and returns the byte at +0x28 of the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void FUN_00603db0(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x40]
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jnz     loc_603dc3
        mov     al, 0x1
        pop     esi
        ret
loc_603dc3:
        mov     ecx, esi
        call    FUN_0041fd80
        mov     al, byte ptr [eax + 0x28]
        pop     esi
        ret
    }
}
