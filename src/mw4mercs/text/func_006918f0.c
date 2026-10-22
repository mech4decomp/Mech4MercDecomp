/*
 * FUN_006918f0 (76 B) — __thiscall, one stack param (int*), RET 4.
 *
 * Allocates a 0x10-byte node via FUN_004084d0. If non-null, copies
 * param_1[0..1] into node[2..3] and zeroes node[0..1]. Then links the
 * node into the list at this+4 (this+8 is a counter that is incremented).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void __stdcall FUN_006918f0(void *param_1)
{
    __asm {
        push    esi
        push    0x10
        mov     esi, ecx
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 0x4
        cmp     eax, edx
        jz      L_null
        mov     ecx, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x8], edi
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], edx
        pop     edi
        jmp     L_link
L_null:
        xor     eax, eax
L_link:
        inc     dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, edx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], ecx
        jz      L_tail
        mov     dword ptr [ecx + 0x4], eax
L_tail:
        mov     dword ptr [esi + 0x4], eax
        pop     esi
        ret     4
    }
}
