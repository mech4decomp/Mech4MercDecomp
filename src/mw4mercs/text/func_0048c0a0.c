/*
 * FUN_0048c0a0 (185 B) — MLR renderer destructor (__thiscall).
 * Releases the internal arrays (via FUN_004084e0), calls a virtual
 * Release on the stream object, and resets the vtable pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048c0a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x110]
        test    ecx, ecx
        mov     dword ptr [esi], 0x76febc
        jz      L_c0b9
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_c0b9:
        mov     eax, dword ptr [esi + 0x15c]
        test    eax, eax
        jz      L_c0cc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c0cc:
        mov     eax, dword ptr [esi + 0x154]
        test    eax, eax
        jz      L_c0df
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c0df:
        mov     eax, dword ptr [esi + 0x14c]
        test    eax, eax
        jz      L_c0f2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c0f2:
        mov     eax, dword ptr [esi + 0x144]
        test    eax, eax
        jz      L_c105
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c105:
        mov     eax, dword ptr [esi + 0x13c]
        test    eax, eax
        jz      L_c118
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c118:
        mov     eax, dword ptr [esi + 0x134]
        test    eax, eax
        jz      L_c12b
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c12b:
        mov     eax, dword ptr [esi + 0x12c]
        test    eax, eax
        jz      L_c13e
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c13e:
        mov     eax, dword ptr [esi + 0x124]
        test    eax, eax
        jz      L_c151
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_c151:
        mov     dword ptr [esi], 0x76d3f0
        pop     esi
        ret
    }
}
