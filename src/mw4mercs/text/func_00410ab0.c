/*
 * FUN_00410ab0 (71 B) — Doubly-linked list node insertion helper (mirror).
 *   Mirror image of FUN_00410a60 but operating on the "prev" link at +0x8
 *   and the "next" link at +0xc (i.e. the reverse-direction variant).
 *
 *   param_1 (ESP+4) = node to move (EAX)
 *   param_2 (ESP+8) = pointer to list head (EDX)
 *
 * CFLAGS: /O1
 * Match: 100%
 */

__declspec(naked) void __stdcall FUN_00410ab0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x8]
        mov     edx, dword ptr [ecx + 0xc]
        test    edx, edx
        mov     dword ptr [eax + 0x8], edx
        jz      L_410ac4
        mov     dword ptr [edx + 0x4], eax
L_410ac4:
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0x8]
        cmp     eax, dword ptr [edx]
        jnz     L_410adb
        mov     dword ptr [edx], ecx
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [eax + 0x4], ecx
        ret
L_410adb:
        mov     edx, dword ptr [eax + 0x4]
        cmp     eax, dword ptr [edx + 0xc]
        jnz     L_410aed
        mov     dword ptr [edx + 0xc], ecx
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [eax + 0x4], ecx
        ret
L_410aed:
        mov     dword ptr [edx + 0x8], ecx
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [eax + 0x4], ecx
        ret
    }
}
