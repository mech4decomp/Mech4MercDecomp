/*
 * FUN_00602DF0 (67 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Constructor: allocates a 0x28-byte buffer via FUN_004084d0 and
 * initializes a small linked-list node structure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(int size);

__declspec(naked) void * __fastcall FUN_00602df0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        push    0x28
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
