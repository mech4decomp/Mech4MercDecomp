/*
 * FUN_00691d60 (297 B) — factory: allocates a 4-byte object via
 * FUN_004084d0 and sets its vtable based on the type index param_2
 * (1-2 -> 0x799034, 3-4 -> 0x79902c, 5-6 -> 0x799024, 7-8 -> 0x79901c,
 * 9-10 -> 0x799014, >=11 -> 0x799024 + FUN_00692230 init). Stores
 * (ptr|1) into *param_1, or 1 on allocation failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int n);
extern void __cdecl FUN_00692230(void);

__declspec(naked) void FUN_00691d60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        cmp     eax, 0x1
        jl      c3
        cmp     eax, 0x2
        jg      c3
        push    0x4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      fail
        mov     ecx, eax
        mov     dword ptr [eax], 0x799034
        mov     eax, dword ptr [esp + 0x4]
        or      ecx, 0x1
        mov     dword ptr [eax], ecx
        ret
c3:
        cmp     eax, 0x3
        jl      c5
        cmp     eax, 0x4
        jg      c5
        push    0x4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      fail
        mov     ecx, eax
        mov     dword ptr [eax], 0x79902c
        mov     eax, dword ptr [esp + 0x4]
        or      ecx, 0x1
        mov     dword ptr [eax], ecx
        ret
c5:
        cmp     eax, 0x5
        jl      c7
        cmp     eax, 0x6
        jg      c7
        push    0x4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      fail
        mov     ecx, eax
        mov     dword ptr [eax], 0x799024
        mov     eax, dword ptr [esp + 0x4]
        or      ecx, 0x1
        mov     dword ptr [eax], ecx
        ret
c7:
        cmp     eax, 0x7
        jl      c9
        cmp     eax, 0x8
        jg      c9
        push    0x4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      fail
        mov     ecx, eax
        mov     dword ptr [eax], 0x79901c
        mov     eax, dword ptr [esp + 0x4]
        or      ecx, 0x1
        mov     dword ptr [eax], ecx
        ret
c9:
        cmp     eax, 0x9
        jl      big
        cmp     eax, 0xa
        jg      big
        push    0x4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      fail
        mov     ecx, eax
        mov     dword ptr [eax], 0x799014
        mov     eax, dword ptr [esp + 0x4]
        or      ecx, 0x1
        mov     dword ptr [eax], ecx
        ret
fail:
        mov     eax, dword ptr [esp + 0x4]
        xor     ecx, ecx
        or      ecx, 0x1
        mov     dword ptr [eax], ecx
        ret
big:
        push    0x4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      bigfail
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    0x0
        push    0x1
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax], 0x799024
        call    FUN_00692230
        mov     eax, esi
        pop     esi
        ret
bigfail:
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        xor     eax, eax
        push    eax
        push    0x1
        push    eax
        mov     ecx, esi
        call    FUN_00692230
        mov     eax, esi
        pop     esi
        ret
    }
}
