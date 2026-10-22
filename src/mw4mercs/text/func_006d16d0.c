/*
 * FUN_006D16D0 (84 B) — Dispatch function based on value at **(param_1+4).
 * Cases: 0x81 -> FUN_006D1550, 0x83 -> FUN_006D1660, 0x84 -> FUN_006D15F0.
 *
 * __cdecl, RET (3 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006d1550(void *, void *, void *);
extern void __cdecl FUN_006d1660(void *, void *, void *);
extern void __cdecl FUN_006d15f0(void *, void *, void *);

__declspec(naked) void __cdecl FUN_006d16d0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx + 4]
        mov     eax, dword ptr [eax]
        sub     eax, 0x81
        jz      l_case_81
        sub     eax, 2
        jz      l_case_83
        dec     eax
        jnz     l_done
        ; case 0x84
        mov     edx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [esp + 8]
        push    edx
        push    eax
        push    ecx
        call    FUN_006d15f0
        add     esp, 0xC
        ret
    l_case_83:
        mov     edx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [esp + 8]
        push    edx
        push    eax
        push    ecx
        call    FUN_006d1660
        add     esp, 0xC
        ret
    l_case_81:
        mov     edx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [esp + 8]
        push    edx
        push    eax
        push    ecx
        call    FUN_006d1550
        add     esp, 0xC
    l_done:
        ret
    }
}
