/*
 * FUN_00697af0 (37 B) - __thiscall (ECX = this).
 *
 * Sets [this+0x88] = -1, then calls FUN_0041fd80 and FUN_0041fcb0
 * on this+0x8c (both __thiscall, ECX = this+0x8c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fcb0(void);

__declspec(naked) void __stdcall FUN_00697af0(void)
{
    __asm {
        push    esi
        lea     esi, [ecx + 0x8c]
        mov     dword ptr [ecx + 0x88], 0xffffffff
        mov     ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_skip
        mov     ecx, esi
        call    FUN_0041fcb0
L_skip:
        pop     esi
        ret
    }
}
