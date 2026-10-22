/*
 * FUN_0062c580 (83 B) — __thiscall destructor.
 *
 * Sets vtable 0x78d0f4, releases up to five sub-objects (offsets 0x60,
 * 0x50, 0x54, 0x58, 0x5c) via their vtable[0] with arg 1, then calls
 * FUN_00561730(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_0062c580(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x60]
        test    ecx, ecx
        mov     dword ptr [esi], 0x78d0f4
        jz      L_596
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_596:
        mov     ecx, dword ptr [esi + 0x50]
        test    ecx, ecx
        jz      L_5a3
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_5a3:
        mov     ecx, dword ptr [esi + 0x54]
        test    ecx, ecx
        jz      L_5b0
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_5b0:
        mov     ecx, dword ptr [esi + 0x58]
        test    ecx, ecx
        jz      L_5bd
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
    L_5bd:
        mov     ecx, dword ptr [esi + 0x5c]
        test    ecx, ecx
        jz      L_5ca
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_5ca:
        mov     ecx, esi
        call    FUN_00561730
        pop     esi
        ret
    }
}
