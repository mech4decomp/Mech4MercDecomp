/*
 * FUN_0069fb90 (67 B) — __thiscall constructor.
 *
 * Copies a byte from param_2 into this, allocates a 0x14-byte node via
 * FUN_004084d0(), initializes the node's linked-list fields, stores it in
 * this, and copies a byte from param_1 into this+8. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_0069fb90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        push    0x14
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
