/*
 * FUN_005E8080 (98 B) — __cdecl, RET 0 (no params).
 * One-time init: if the global state is unset, calls FUN_005E7DE0 twice
 * and sets a "done" flag byte at 0x007F2570.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e7de0(void);

__declspec(naked) void __cdecl FUN_005e8080(void)
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
        jz      L_5e80e0
        /* __emit: MSVC6 rejects cmp byte ptr [imm32],imm8 absolute form */
        _emit   0x80
        _emit   0x3D
        _emit   0x70
        _emit   0x25
        _emit   0x7F
        _emit   0x00
        _emit   0x01
        jz      L_5e80e0
        mov     edx, dword ptr [eax + 0x20]
        xor     edx, 0x85739531
        jz      L_5e80e0
        mov     esi, dword ptr [eax + 0x20]
        push    0x1
        xor     esi, 0x85739531
        lea     eax, [esi + 0xf38]
        push    0x0
        push    eax
        call    FUN_005e7de0
        push    0x1
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
        _emit   0x01
L_5e80e0:
        pop     esi
        ret
    }


}
