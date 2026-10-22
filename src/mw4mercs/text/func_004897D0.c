/*
 * FUN_004897D0 (66 B) — __thiscall (RET 0). Dispatches on [this+8]:
 * if zero, calls FUN_00713BF0 with four dwords from this; else checks a
 * flag bit and calls FUN_00713C80 or FUN_00713C40 with four dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00713bf0(void);
extern void __cdecl FUN_00713c80(void);
extern void __cdecl FUN_00713c40(void);

__declspec(naked) void FUN_004897D0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        jne     L_4897ed
        mov     eax, dword ptr [ecx + 0x18]
        mov     edx, dword ptr [ecx + 0x14]
        push    eax
        mov     eax, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_00713bf0
        ret
L_4897ed:
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx + 0x18]
        push    edx
        mov     edx, dword ptr [ecx + 0x10]
        test    eax, 0x40000000
        mov     eax, dword ptr [ecx + 0x14]
        push    eax
        mov     eax, dword ptr [ecx + 0xc]
        push    edx
        push    eax
        je      L_48980c
        call    FUN_00713c80
        ret
L_48980c:
        call    FUN_00713c40
        ret
    }
}
