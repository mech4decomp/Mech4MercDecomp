/*
 * FUN_005ba480 (84 B) — __thiscall (ECX = this), RET 4.
 * Returns a float from this+0x1b8/0x1bc/0x1c0/0x1c4 depending on a
 * byte flag at ESI+0x2f8 and the results of two vtable calls on ESI.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005ba480(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        cmp     byte ptr [esi + 0x2f8], 0x1
        push    edi
        mov     edi, ecx
        jnz     L_49c
        fld     dword ptr [edi + 0x1b8]
        pop     edi
        pop     esi
        ret     4
    L_49c:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x64]
        cmp     eax, 0x1
        jnz     L_4b3
        fld     dword ptr [edi + 0x1bc]
        pop     edi
        pop     esi
        ret     4
    L_4b3:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x68]
        cmp     al, 0x1
        jnz     L_4c9
        fld     dword ptr [edi + 0x1c0]
        pop     edi
        pop     esi
        ret     4
    L_4c9:
        fld     dword ptr [edi + 0x1c4]
        pop     edi
        pop     esi
        ret     4
    }
}
