/*
 * FUN_00458c80 (41 B) — MLR helper (__thiscall). Fills a buffer with 0x01
 * bytes (via rep stosd/stosb) using a global destination pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d98fc;

__declspec(naked) void FUN_00458c80(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax+0x8]
        test    eax, eax
        mov     ecx, dword ptr [g_007d98fc]
        mov     edi, dword ptr [ecx]
        jle     L_458CA7
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 2
        mov     eax, 0x1010101
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
L_458CA7:
        pop     edi
        ret
    }
}
