/*
 * FUN_007494D0 (59 B) — Allocates via FUN_004084C0([0x008AADC8], 0x40);
 * on success calls FUN_007497A0 (thiscall) with param_2, then stores
 * the result into a global list head (0x00857F34) and *param_1.
 *
 * __stdcall (RET 0x8, 2 params). CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008AADC8;
extern int g_00857F34;
extern int __cdecl FUN_004084C0(void);
extern int __cdecl FUN_007497A0(void);

__declspec(naked) int __stdcall FUN_007494D0(void *param_1, void *param_2)
{
    __asm {
        mov     eax, dword ptr [g_008AADC8]
        push    eax
        push    0x40
        call    FUN_004084C0
        add     esp, 0x8
        test    eax, eax
        jz      xor_eax
        mov     ecx, dword ptr [esp + 0x8]
        push    ecx
        mov     ecx, eax
        call    FUN_007497A0
        jmp     mov_ecx
xor_eax:
        xor     eax, eax
mov_ecx:
        mov     ecx, dword ptr [g_00857F34]
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx], eax
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [g_00857F34], eax
        ret     0x8
    }
}
