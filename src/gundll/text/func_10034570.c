/*
 * FUN_10034570 (40 B) - __thiscall, RET 0x4. Builds args from this+0x10 and
 * calls FUN_10033680.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10033680(void);   /* rel32 call */

__declspec(naked) void FUN_10034570(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_57c
        lea     edx, [eax + 4]
        jmp     L_57e
L_57c:
        xor     edx, edx
L_57e:
        mov     eax, dword ptr [eax + 0x10]
        push    eax
        mov     eax, dword ptr [ecx + 4]
        push    eax
        push    edx
        add     ecx, 0x1c
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_10033680
        ret     4
    }
}
