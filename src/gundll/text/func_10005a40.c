/*
 * FUN_10005a40 (75 B) - __stdcall, RET 0x4.
 * If a flag at param_1+0x89 is clear, sets flags at +0x88/+0x89, builds a
 * local struct, and calls an indirect vtable method (param_1+0x30->vtable[3]).
 * Returns 0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10005a40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dl, byte ptr [eax + 0x89]
        xor     ecx, ecx
        sub     esp, 0x14
        cmp     dl, cl
        jnz     L_5a83
        /* __emit: MOV [ESP],ECX; MSVC6 collapses zero-disp [esp] to 89 0C 24 */
        __emit 0x89
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 0xc], ecx
        mov     dword ptr [esp + 0x10], ecx
        mov     cl, 0x1
        mov     byte ptr [eax + 0x88], cl
        mov     byte ptr [eax + 0x89], cl
        mov     eax, dword ptr [eax + 0x30]
        /* __emit: LEA EDX,[ESP+0]; MSVC6 collapses zero-disp [esp] to 8D 14 24 */
        __emit 0x8D
        __emit 0x54
        __emit 0x24
        __emit 0x00
        push    edx
        mov     dword ptr [esp + 0x8], 0x2
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
    L_5a83:
        xor     eax, eax
        add     esp, 0x14
        ret     0x4
    }
}
