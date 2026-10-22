/*
 * FUN_004a8570 (37 B) — __fastcall MLR object destructor: installs vtable
 * 0x77040c, frees member at +0x2bc, calls base dtor FUN_004a93f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004a93f0(void);

__declspec(naked) void FUN_004a8570(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x77040c
        mov     eax, dword ptr [esi+0x2bc]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     ecx, esi
        call    FUN_004a93f0
        pop     esi
        ret
    }
}
