/*
 * FUN_004AC1D0 (56 B) — calls FUN_004941d0, then adds clamped float to field_0xa4.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004941d0(int param1);
extern float DAT_0076c5b0;

__declspec(naked) void __fastcall FUN_004ac1d0(int this, int param1)
{
    __asm {
        mov     eax, [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004941d0
        mov     ecx, [esi + 0x10]
        fld     dword ptr [ecx + 0x64]
        fcom    dword ptr [DAT_0076c5b0]        ; fcom dword ptr [0x0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_add
        fstp    st(0)
        fld     dword ptr [DAT_0076c5b0]        ; fld dword ptr [0x0076c5b0]
    l_add:
        fadd    dword ptr [esi + 0xa4]
        fstp    dword ptr [esi + 0xa4]
        pop     esi
        ret     0x4
    }
}
