/*
 * FUN_005da550 (67 B) — allocate a buffer (param_1<<2) via FUN_004084d0,
 * then copy dword elements from param_2..param_3 into the buffer.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void __stdcall FUN_005da550(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L566
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        jmp     L568
L566:
        xor     eax, eax
L568:
        mov     ecx, dword ptr [esp + 0x8]
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        cmp     ecx, edi
        jz      L58F
        push    ebx
        push    esi
        mov     esi, eax
        sub     esi, ecx
L57B:
        lea     edx, [esi + ecx*0x1]
        test    edx, edx
        jz      L586
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [edx], ebx
L586:
        add     ecx, 0x4
        cmp     ecx, edi
        jnz     L57B
        pop     esi
        pop     ebx
L58F:
        pop     edi
        ret     0xC
    }
}
