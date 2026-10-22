/*
 * FUN_005E80F0 (99 B) — __cdecl, RET 0 (no params).
 * Teardown counterpart of FUN_005E8080: if the global state is set,
 * calls FUN_005E7DE0 twice and clears the flag byte at 0x007F2570.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e7de0(void);

__declspec(naked) void __cdecl FUN_005e80f0(void)
{
    
__asm {
/* __emit: MSVC6 encodes mov eax,[imm32] as B8 immediate load, not A1 mem deref */
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [eax]
        push    esi
        /* __emit: MSVC6 encodes xor eax,[imm32] as 35 immediate, not 33 05 mem deref */
        _emit   0x33
        _emit   0x05
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        jz      L_5e8151
        /* __emit: MSVC6 encodes mov cl,[imm32] as B1 immediate load, not 8A 0D mem deref */
        _emit   0x8A
        _emit   0x0D
        _emit   0x70
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        test    cl, cl
        jz      L_5e8151
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        jz      L_5e8151
        mov     esi, dword ptr [eax + 0x20]
        push    0x0
        xor     esi, 0x85739531
        lea     eax, [esi + 0xf38]
        push    0x0
        push    eax
        call    FUN_005e7de0
        push    0x0
        push    0xd
        add     esi, 0x2b8
        push    esi
        call    FUN_005e7de0
        add     esp, 0x18
        /* __emit: MSVC6 rejects mov byte ptr [imm32],imm8 absolute form */
        _emit   0xC6
        _emit   0x05
        _emit   0x70
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        _emit   0x00
L_5e8151:
        pop     esi
        ret
    }


}
