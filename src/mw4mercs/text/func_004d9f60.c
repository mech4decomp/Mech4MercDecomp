/*
 * FUN_004d9f60 (49 B) — __thiscall: forwards an event/command to a
 * sub-object via vtable dispatch if present and not handled.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004d9f60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x150]
        test    eax, eax
        push    edi
        jz      L_9f8c
        mov     edi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        call    dword ptr [eax + 0x90]
        test    al, al
        jnz     L_9f8c
        mov     ecx, dword ptr [esi + 0x150]
        mov     edx, dword ptr [ecx]
        push    esi
        push    edi
        call    dword ptr [edx + 0x10]
L_9f8c:
        pop     edi
        pop     esi
        ret     0x4
    }
}
