/*
 * FUN_005C0660 (218 B) — MechAI destructor body (__fastcall, ECX = this).
 * Sets vtable 0x7876FC, queries the global object pool (0x007F22C0 /
 * 0x007F22C4), decrements the pool count, and frees all pooled nodes when
 * the count reaches zero. Finally calls FUN_005C1520.
 *
 * __fastcall (ECX = this), plain `ret`.
 * CFLAGS: /O1
 */

extern void FUN_005c0b50(void);
extern void FUN_005c0b90(void);
extern void FUN_005c0b40(void);
extern void FUN_005c0be0(void);
extern void FUN_005c0b60(void);
extern void FUN_005c1520(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_005c0660(void)
{
    
__asm {
sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        ; mov ecx, [0x007f22c0]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x0D
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        mov     dword ptr [ebp], 0x7876FC
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_005c0b50
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005c0b90
        ; mov ecx, [0x007f22c0]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x0D
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_005c0b40
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005c0b90
        lea     eax, [esp + 0x28]
        push    eax
        call    FUN_005c0be0
        ; mov ecx, [0x007f22c0]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x0D
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        add     esp, 0x10
        cmp     eax, edx
        jz      l_dec
        push    ecx
        mov     edx, esp
        mov     dword ptr [edx], eax
        lea     edx, [esp + 0x20]
        push    edx
        call    FUN_005c0b60
        ; mov ecx, [0x007f22c0]  -- __emit: mov reg,[imm32] memory-deref issue
        _emit 0x8B
        _emit 0x0D
        _emit 0xC0
        _emit 0x22
        _emit 0x7F
        _emit 0x00
    l_dec:
        ; dec dword ptr [0x007f22c4]  -- __emit: dec [imm32] form
        _emit 0xFF
        _emit 0x0D
        _emit 0xC4
        _emit 0x22
        _emit 0x7F
        _emit 0x00
        jnz     l_cleanup_done
        mov     ebx, ecx
        test    ebx, ebx
        jz      l_zero_pool
        mov     edi, dword ptr [ebx]
        mov     esi, dword ptr [edi]
        cmp     esi, edi
        jz      l_free_head
    l_loop:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      l_loop_cmp
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_loop_cmp:
        cmp     esi, edi
        jnz     l_loop
    l_free_head:
        test    edi, edi
        mov     dword ptr [edi], edi
        mov     dword ptr [edi + 4], edi
        jz      l_free_pool
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_free_pool:
        push    ebx
        call    FUN_004084e0
        add     esp, 4
    l_zero_pool:
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
    l_cleanup_done:
        mov     ecx, ebp
        call    FUN_005c1520
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }


}
