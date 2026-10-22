/*
 * FUN_005C0570 (203 B) — MechAI constructor (__thiscall, RET 0x10, 4 stack
 * params). Calls FUN_005C0FE0, sets up vtable 0x7876FC, conditionally copies
 * a field, and maintains a global object pool (0x007F22C0 / 0x007F22C4).
 *
 * __thiscall (ECX = this), RET 0x10.
 * CFLAGS: /O1
 */

extern void FUN_005c0fe0(void);
extern void * __cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __stdcall FUN_005c0570(void)
{
    
__asm {
push    ecx
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0xC]
        push    esi
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0x1C]
        push    ecx
        push    edx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 0
        call    FUN_005c0fe0
        ; mov ecx, [0x007dab44]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x0D
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     edx, dword ptr [ecx]
        ; xor edx, [0x007dab40]  -- __emit: absolute memory operand for xor
        _emit 0x33
        _emit 0x15
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     eax, dword ptr [edx + 0x14]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax + 0x17FC]
        test    cl, cl
        mov     dword ptr [edi], 0x7876FC
        mov     dword ptr [edi + 0x6A4], 0
        jz      l_skip
        mov     ecx, dword ptr [edi + 0x170]
        mov     dword ptr [edi + 0x6A4], ecx
    l_skip:
        ; mov eax, [0x007f22c4]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0xA1
        _emit 0xC4
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        test    eax, eax
        jnz     l_inc
        push    4
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      l_set0
        mov     dl, byte ptr [esp + 0x1C]
        mov     byte ptr [esi], dl
        push    0xC
        mov     dword ptr [esi], 0
        call    FUN_004084d0
        mov     dword ptr [eax], eax
        mov     dword ptr [esi], eax
        mov     dword ptr [eax + 4], eax
        ; mov eax, [0x007f22c4]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0xA1
        _emit 0xC4
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        add     esp, 4
        inc     eax
        ; mov [0x007f22c4], eax  -- __emit: mov [imm32],reg A3 form
        _emit 0xA3
        _emit 0xC4
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        mov     eax, edi
        pop     edi
        ; mov [0x007f22c0], esi  -- __emit: mov [imm32],reg form
        _emit 0x89
        _emit 0x35
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        pop     esi
        pop     ecx
        ret     0x10
    l_set0:
        ; mov dword ptr [0x007f22c0], 0  -- __emit: MSVC6 rejects mov [imm32],imm32 (C2415)
        _emit 0xC7
        _emit 0x05
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    l_inc:
        ; inc dword ptr [0x007f22c4]  -- __emit: inc [imm32] form
        _emit 0xFF
        _emit 0x05
        _emit 0xC4
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ecx
        ret     0x10
    }


}
