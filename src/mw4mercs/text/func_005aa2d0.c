/*
 * FUN_005aa2d0 (39 B) — __thiscall method (RET 8, 2 stack params).
 *
 * If byte at this+0x274 is non-zero, calls FUN_005aa0d0(this), then
 * calls FUN_005bb5d0(this, p1, p2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005aa0d0(void);
extern void FUN_005bb5d0(void);

__declspec(naked) void FUN_005aa2d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x274]
        test    al, al
        jz      L1
        call    FUN_005aa0d0
L1:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005bb5d0
        pop     esi
        ret     0x8
    }
}
