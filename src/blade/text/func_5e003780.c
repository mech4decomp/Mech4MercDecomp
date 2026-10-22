/*
 * FUN_5e003780 (286 B) — DirectDraw wrapper: indexed setter with a
 * switch on the value (jump table at 0x5e0038a0, outside the function
 * slice). Writes obj[index*4 + 0x45ac] = value, then configures several
 * fields based on the value.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003780(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        cmp     edx, 0x98
        jg      L899
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, -0x1
        jz      L899
        mov     eax, dword ptr [esp + 0x4]
        push    edi
        mov     edi, dword ptr [eax + 0x42f8]
        test    edi, edi
        pop     edi
        jnz     L7b4
        cmp     edx, 0x7
        jnz     L7b4
        xor     ecx, ecx
    L7b4:
        cmp     edx, 0x15
        mov     dword ptr [eax + edx*4 + 0x45ac], ecx
        jnz     L880
        dec     ecx
        cmp     ecx, 0x6
        ja      L88f
        jmp     dword ptr [ecx*4 + 0x5e0038a0]
    L7d5:
        mov     ecx, 0x2
        mov     dword ptr [eax + 0x4814], ecx
        mov     dword ptr [eax + 0x4818], ecx
        mov     dword ptr [eax + 0x4820], ecx
        mov     dword ptr [eax + 0x4824], ecx
        mov     dword ptr [eax + 0x406c], 0x5e013200
        xor     eax, eax
        ret     0xc
    L801:
        mov     ecx, 0x2
        mov     dword ptr [eax + 0x4814], 0x4
        mov     dword ptr [eax + 0x4818], ecx
        mov     dword ptr [eax + 0x481c], 0x0
        mov     dword ptr [eax + 0x4820], ecx
        mov     dword ptr [eax + 0x4824], ecx
        mov     dword ptr [eax + 0x406c], 0x5e013200
        xor     eax, eax
        ret     0xc
    L83b:
        mov     edx, 0x4
        mov     ecx, 0x2
        mov     dword ptr [eax + 0x4814], edx
        mov     dword ptr [eax + 0x4818], ecx
        mov     dword ptr [eax + 0x481c], 0x0
        mov     dword ptr [eax + 0x4820], edx
        mov     dword ptr [eax + 0x4824], ecx
        mov     dword ptr [eax + 0x4828], 0x0
        mov     dword ptr [eax + 0x406c], 0x5e013200
        xor     eax, eax
        ret     0xc
    L880:
        cmp     edx, 0x8b
        jnz     L88f
        or      byte ptr [eax + 0x45a9], 0x40
    L88f:
        mov     dword ptr [eax + 0x406c], 0x5e013200
    L899:
        xor     eax, eax
        ret     0xc
    }
}
