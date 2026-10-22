/*
 * FUN_00607fd0 (71 B) — __thiscall constructor (RET, no stack args) for an
 * animation-blend object. Sets vtable 0x78bee4 on this and two sub-objects
 * at +0x14 and +0x28, initializing each via FUN_00416990, then sets a
 * default scale (0x3f8ccccd = 1.1f) at +0x3c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416990(void);

__declspec(naked) void FUN_00607fd0(void)
{
    __asm {
        push    esi
        push    edi
        push    1
        mov     esi, ecx
        push    0
        call    FUN_00416990
        push    1
        lea     edi, [esi + 0x14]
        push    0
        mov     ecx, edi
        mov     dword ptr [esi], 0x78bee4
        call    FUN_00416990
        mov     dword ptr [edi], 0x78bee4
        push    1
        lea     edi, [esi + 0x28]
        push    0
        mov     ecx, edi
        call    FUN_00416990
        mov     dword ptr [edi], 0x78bee4
        pop     edi
        mov     dword ptr [esi + 0x3c], 0x3f8ccccd
        mov     eax, esi
        pop     esi
        ret
    }
}
