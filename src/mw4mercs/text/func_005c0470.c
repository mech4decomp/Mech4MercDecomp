/*
 * FUN_005C0470 (104 B) — Allocates a MechAI object (0xA4 bytes) and, on
 * success, constructs it via FUN_00501A20 with a large set of parameters
 * (vtable/function pointers + globals). Stores the result in global
 * 0x007F22C8. On allocation failure, stores 0.
 *
 * __cdecl (plain `ret`).
 * CFLAGS: /O1
 */

extern void * __cdecl FUN_004084d0(unsigned int size);
extern void * __cdecl FUN_00501a20(void);

__declspec(naked) void __cdecl FUN_005c0470(void)
{
    
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_alloc_fail
        ; mov ecx, [0x007dc8cc]  -- __emit: MSVC6 encodes mov reg,[imm32] as immediate load, not memory deref
        _emit 0x8B
        _emit 0x0D
        _emit 0xCC
        _emit 0xC8
        _emit 0x7D
        _emit 0x00
        ; mov edx, [0x007f23b0]  -- __emit: same mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x15
        _emit 0xB0
        _emit 0x23
        _emit 0x7F
        _emit 0x00
        push    0x502C60
        push    0x5028B0
        push    0x502370
        push    0
        push    0x501EB0
        push    ecx
        push    0x678CB0
        push    0x5C0510
        push    0x7876D8
        push    1
        push    edx
        push    0x7876E4
        push    0x479
        mov     ecx, eax
        call    FUN_00501a20
        ; mov [0x007f22c8], eax  -- __emit: MSVC6 encodes mov [imm32],reg as 89 05 form, not A3
        _emit 0xA3
        _emit 0xC8
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        ret
    l_alloc_fail:
        ; mov dword ptr [0x007f22c8], 0  -- __emit: MSVC6 rejects mov [imm32],imm32 (C2415)
        _emit 0xC7
        _emit 0x05
        _emit 0xC8
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        ret
    }


}
