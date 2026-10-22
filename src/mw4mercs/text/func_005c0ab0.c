/*
 * FUN_005C0AB0 (57 B) — Iterates the global object pool (0x007F22C0) and
 * calls virtual method at vtable+0xD4 on each node's +0x8 object with the
 * two params. Plain `ret` (no stack cleanup).
 *
 * __cdecl (plain `ret`).
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_005c0ab0(void)
{
    
__asm {
; mov eax, [0x007f22c0]  -- __emit: mov reg,[imm32] memory-deref issue (A1 form)
        _emit 0xA1
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        test    eax, eax
        push    esi
        jz      l_done
        mov     eax, dword ptr [eax]
        mov     esi, dword ptr [eax]
        cmp     esi, eax
        jz      l_done
        push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
    l_loop:
        mov     ecx, dword ptr [esi + 8]
        mov     eax, dword ptr [ecx]
        push    edi
        push    ebx
        call    dword ptr [eax + 0xD4]
        ; mov ecx, [0x007f22c0]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x0D
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        mov     esi, dword ptr [esi]
        cmp     esi, dword ptr [ecx]
        jnz     l_loop
        pop     edi
        pop     ebx
    l_done:
        pop     esi
        ret
    }


}
