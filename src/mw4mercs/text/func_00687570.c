/*
 * FUN_00687570 (14 B) — __fastcall. If this->0x3c != 0, calls
 * FUN_006858f0 (thiscall) with this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006858f0(void);

__declspec(naked) void FUN_00687570(void)
{
    __asm {
        mov     al, byte ptr [ecx+0x3c]
        test    al, al
        jz      L_68757d
        push    ecx
        call    FUN_006858f0
L_68757d:
        ret
    }
}
