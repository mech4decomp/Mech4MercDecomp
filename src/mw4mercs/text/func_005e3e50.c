/*
 * FUN_005E3E50 (358 B) - Missile subsystem static initializer.
 *
 * Allocates a 0xA4-byte object, registers it via FUN_00501A20, then
 * allocates/registers four 0x20-byte parameter objects (MaxTurnAngle,
 * ThrusterAcceleration, ProximityFuseDistance, MaxLiveTime) each with a
 * vtable at 0x775948.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void __cdecl FUN_005e3e50(void)
{
    
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load, not memory deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x4C
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        /* __emit: MSVC6 encodes mov reg,[imm32] as immediate load, not memory deref */
        _emit   0x8B
        _emit   0x15
        _emit   0xA0
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    0x502c60
        push    0x5028b0
        push    0x6923a0
        push    0
        push    0x692380
        push    ecx
        push    0x507aa0
        push    0x5e3ff0
        push    0
        push    0
        push    edx
        push    0x788fd0
        push    0x43d
        mov     ecx, eax
        call    FUN_00501a20
        /* __emit: MSVC6 encodes mov [imm32],reg as immediate store, not A3 memory-deref */
        _emit   0xA3
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        jmp     l_after_alloc
    l_alloc_fail:
        /* __emit: MSVC6 encodes mov [imm32],imm32 as immediate store, not C7 05 memory-deref */
        _emit   0xC7
        _emit   0x05
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    l_after_alloc:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc2_fail
        push    0x78
        push    2
        push    0x786520
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_after_alloc2
    l_alloc2_fail:
        xor     esi, esi
    l_after_alloc2:
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc3_fail
        push    0x80
        push    2
        push    0x786508
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_after_alloc3
    l_alloc3_fail:
        xor     esi, esi
    l_after_alloc3:
        /* __emit: MSVC6 encodes mov ecx,[imm32] as immediate load, not 8B 0D memory-deref */
        _emit   0x8B
        _emit   0x0D
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc4_fail
        push    0x84
        push    2
        push    0x788fb8
        push    0x17
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     l_after_alloc4
    l_alloc4_fail:
        xor     esi, esi
    l_after_alloc4:
        /* __emit: MSVC6 encodes mov edx,[imm32] as immediate load, not 8B 15 memory-deref */
        _emit   0x8B
        _emit   0x15
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_alloc5_fail
        push    0x7c
        push    2
        push    0x788fac
        push    0x16
        mov     ecx, esi
        call    FUN_005008e0
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
    l_alloc5_fail:
        /* __emit: MSVC6 encodes mov eax,[imm32] as immediate load, not A1 memory-deref */
        _emit   0xA1
        _emit   0x54
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
