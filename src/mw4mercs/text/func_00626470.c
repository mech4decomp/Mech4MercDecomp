/*
 * FUN_00626470 (60 B) — __stdcall (RET 0xc, 3 params).
 *
 * Allocates a 0x20-byte node via FUN_004084d0(), copies 6 dwords from
 * param3 into [node+8], and splices the node into a doubly-linked list
 * between param2 and its successor. Returns param1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void *FUN_00626470(void)
{
    __asm {
        push    edi
        push    0x20
        call    FUN_004084d0
        lea     edi, [eax + 0x8]
        add     esp, 0x4
        test    edi, edi
        jz      L_skip
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, 0x6
        rep movsd
        pop     esi
    L_skip:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [ecx + 0x4], eax
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [edx], eax
        mov     dword ptr [ecx], eax
        mov     eax, ecx
        pop     edi
        ret     0xc
    }
}
