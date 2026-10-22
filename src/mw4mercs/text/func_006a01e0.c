/*
 * FUN_006a01e0 (78 B) — __fastcall constructor (this in ECX).
 *
 * Sets vtable 0x799c54, allocates a 0x1c-byte node via FUN_004084d0,
 * links it, then switches vtable to 0x799c2c. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void FUN_006a01e0(void)
{
    __asm {
        push    ecx
        mov     al, byte ptr [esp + 0x3]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x799c54
        mov     byte ptr [esi + 0x4], al
        push    0x1c
        mov     dword ptr [esi + 0x4], 0x0
        call    FUN_004084d0
        mov     cl, byte ptr [esp + 0xb]
        mov     byte ptr [eax], 0x0
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [eax + 0x8], eax
        add     esp, 0x4
        mov     dword ptr [eax + 0xc], eax
        mov     dword ptr [esi + 0x8], 0x0
        mov     byte ptr [esi + 0xc], cl
        mov     dword ptr [esi], 0x799c2c
        mov     eax, esi
        pop     esi
        pop     ecx
        ret
    }
}
