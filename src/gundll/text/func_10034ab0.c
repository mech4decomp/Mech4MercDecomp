/*
 * FUN_10034ab0 (39 B) - __thiscall, RET 0x4. Builds args from this+0xc and
 * calls FUN_10033680.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10033680(void);   /* rel32 call */

__declspec(naked) void FUN_10034ab0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jz      L_abc
        lea     edx, [eax + 4]
        jmp     L_abe
L_abc:
        xor     edx, edx
L_abe:
        mov     eax, dword ptr [eax + 0x10]
        push    eax
        mov     eax, dword ptr [ecx]
        push    eax
        push    edx
        add     ecx, 0x18
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_10033680
        ret     4
    }
}
