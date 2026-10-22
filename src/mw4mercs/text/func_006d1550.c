/*
 * FUN_006D1550 (151 B) — Recursive linked-list node processor.
 *
 * __cdecl. Allocates a 0xc-byte node, links it into a list, then
 * walks the list dispatching on a type field at [node+4]->[0].
 * Types: 0x81 (recursive call), 0x83 (call 0x6d1660), 0x84
 * (call 0x6d15f0), default (skip). Frees the node at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006d15f0(void);
extern void __cdecl FUN_006d1660(void);

__declspec(naked) void __cdecl FUN_006d1550(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0xc
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_null_node
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ecx + 0x144]
        add     ecx, 0x144
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x7714a4
        mov     ebx, eax
        jmp     l_walk
    l_null_node:
        xor     ebx, ebx
    l_walk:
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x14]
    l_loop:
        mov     ecx, dword ptr [ebx + 8]
        test    ecx, ecx
        je      l_free
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     ecx, dword ptr [ecx + 4]
        mov     dword ptr [ebx + 8], ecx
        je      l_free
        mov     edx, dword ptr [eax + 4]
        mov     ecx, dword ptr [edx]
        sub     ecx, 0x81
        je      l_case_81
        sub     ecx, 2
        je      l_case_83
        dec     ecx
        jne     l_loop
        push    esi
        push    edi
        push    eax
        call    FUN_006d15f0
        add     esp, 0xc
        jmp     l_loop
    l_case_83:
        push    esi
        push    edi
        push    eax
        call    FUN_006d1660
        add     esp, 0xc
        jmp     l_loop
    l_case_81:
        push    esi
        push    edi
        push    eax
        call    FUN_006d1550
        add     esp, 0xc
        jmp     l_loop
    l_free:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
