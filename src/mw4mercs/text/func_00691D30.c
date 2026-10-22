/*
 * FUN_00691D30 (48 B) — Copies 8-byte elements from [arg1..arg2) to
 * arg3, skipping null dst entries. Trailing 5-byte nop pad included.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00691D30(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        je      L_691d5a
        push    esi
L_691d41:
        test    eax, eax
        je      L_691d4f
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], esi
L_691d4f:
        add     ecx, 8
        add     eax, 8
        cmp     ecx, edx
        jne     L_691d41
        pop     esi
L_691d5a:
        ret
        nop
        nop
        nop
        nop
        nop
    }
}
