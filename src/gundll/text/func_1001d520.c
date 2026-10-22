/*
 * FUN_1001D520 (101 B) - __stdcall, RET 0x10.  Validates a "TLMX" magic
 * (0x584d4c54); returns 0x80070057 on mismatch, else walks a linked list
 * (via +0x18) comparing each node's +4 field with the key via
 * FUN_10037bf0; returns 0xc1121c04 if not found, else stores the node.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10037bf0(void);     /* rel32 call, 2 args */

__declspec(naked) void __stdcall FUN_1001D520(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    esi
        xor     ebx, ebx
        test    eax, eax
        push    edi
        jne     L_d534
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax + 4]
L_d534:
        cmp     dword ptr [eax], 0x584d4c54
        je      L_d545
        mov     eax, dword ptr [esp + 0x14]
        mov     ebx, 0x80070057
L_d545:
        test    ebx, ebx
        jl      L_d57d
        mov     esi, dword ptr [eax + 0x1c]
        test    esi, esi
        je      L_d56c
L_d554:
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi + 4]
        push    eax
        push    edi
        call    FUN_10037bf0
        add     esp, 8
        test    eax, eax
        je      L_d577
        mov     esi, dword ptr [esi + 0x18]
        test    esi, esi
        __emit 0x75  /* __emit: jne L_d554 (75 E8); MSVC6 miscomputes backward rel by -4 when a call-reloc sits between branch and target */
        __emit 0xE8
L_d56c:
        pop     edi
        pop     esi
        mov     eax, 0xc1121c04
        pop     ebx
        ret     0x10
L_d577:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx], esi
L_d57d:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x10
    }
}
