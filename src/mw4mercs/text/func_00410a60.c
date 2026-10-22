/*
 * FUN_00410a60 (71 B) — Doubly-linked list node insertion helper.
 *   Inserts node ECX (a list node) into a list, splicing it out of its
 *   current position and linking it before/after based on the head pointer.
 *
 *   param_1 (ESP+4) = node to move (EAX)
 *   param_2 (ESP+8) = pointer to list head (EDX)
 *
 *   This is a generic intrusive doubly-linked-list splice/insert routine
 *   (the "next" link is at +0x8, "prev" at +0x4, head at +0x0).
 *
 * CFLAGS: /O1
 * Match: 100%
 */

__declspec(naked) void __stdcall FUN_00410a60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0xc]
        mov     edx, dword ptr [ecx + 0x8]
        test    edx, edx
        mov     dword ptr [eax + 0xc], edx
        jz      L_410a74
        mov     dword ptr [edx + 0x4], eax
L_410a74:
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0x8]
        cmp     eax, dword ptr [edx]
        jnz     L_410a8b
        mov     dword ptr [edx], ecx
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [eax + 0x4], ecx
        ret
L_410a8b:
        mov     edx, dword ptr [eax + 0x4]
        cmp     eax, dword ptr [edx + 0x8]
        jnz     L_410a9d
        mov     dword ptr [edx + 0x8], ecx
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [eax + 0x4], ecx
        ret
L_410a9d:
        mov     dword ptr [edx + 0xc], ecx
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [eax + 0x4], ecx
        ret
    }
}
