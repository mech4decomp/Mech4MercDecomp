/*
 * FUN_00691D00 (39 B) — Copies an array of 8-byte elements from src
 * (arg3) to dst (arg1), count = arg2, skipping null dst entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00691D00(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        test    ecx, ecx
        mov     eax, dword ptr [esp + 4]
        jbe     L_691d26
        mov     edx, dword ptr [esp + 0xc]
        push    esi
L_691d11:
        test    eax, eax
        je      L_691d1f
        mov     esi, dword ptr [edx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [edx + 4]
        mov     dword ptr [eax + 4], esi
L_691d1f:
        add     eax, 8
        dec     ecx
        jne     L_691d11
        pop     esi
L_691d26:
        ret
    }
}
