/*
 * FUN_006a7f30 (67 B) — __thiscall constructor, RET 8 (two stack params).
 *
 * Copies a byte from param2 into this, allocates a 0x20-byte node via
 * FUN_004084d0, initializes its list pointers, links it into this, and
 * copies a byte from param1 into this+8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);

__declspec(naked) void * __fastcall FUN_006a7f30(void *this, void *param1, void *param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        push    0x20
        mov     dword ptr [esi], 0x0
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0xc]
        mov     cl, byte ptr [edx]
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax + 0x8], eax
        mov     dword ptr [esi], eax
        add     esp, 0x4
        mov     byte ptr [eax], 0x0
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [esi + 0x4], 0x0
        mov     byte ptr [esi + 0x8], cl
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
