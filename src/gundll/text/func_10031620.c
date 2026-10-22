/*
 * FUN_10031620 (61 B) -- __stdcall, RET 0x4.
 * Clears +0x1c; if a pointer at +0xc exists, virtual-call vtable[0x17](obj,0),
 * then release it via vtable[2] and clear +0xc. Returns the first result.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10031620(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esi + 0x1c], 0
        jnz     L_cont
        pop     esi
        ret     0x4
L_cont:
        mov     ecx, dword ptr [eax]
        push    edi
        push    0
        push    eax
        call    dword ptr [ecx + 0x5c]
        mov     edi, eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L_out
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0xc], 0
L_out:
        mov     eax, edi
        pop     edi
        pop     esi
        ret     0x4
    }
}
