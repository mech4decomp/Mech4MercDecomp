/*
 * FUN_00686640 (146 B) — __stdcall, RET 0x10 (four stack params).
 *
 * Maps a flag byte (param4) to a numeric code via a test chain, then
 * calls FUN_006864d0 and copies the 12-byte result into a local buffer
 * whose pointer is returned.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006864d0(void);

__declspec(naked) void __stdcall FUN_00686640(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x10]
        sub     esp, 0xc
        xor     eax, eax
        test    dl, 0x80
        jz      L_6653
        mov     eax, 0x80
    L_6653:
        test    dl, 0x10
        jz      L_665d
        add     eax, 0x41
        jmp     L_66a1
    L_665d:
        test    dl, 0x1
        jz      L_6667
        add     eax, 0x60
        jmp     L_66a1
    L_6667:
        test    dl, 0x2
        jz      L_6671
        add     eax, 0x44
        jmp     L_66a1
    L_6671:
        test    dl, 0x8
        jz      L_667b
        add     eax, 0x48
        jmp     L_66a1
    L_667b:
        test    dl, 0x4
        jz      L_6685
        add     eax, 0x60
        jmp     L_66a1
    L_6685:
        test    dl, 0x20
        jz      L_668f
        add     eax, 0x42
        jmp     L_66a1
    L_668f:
        test    dl, 0x40
        jz      L_6699
        add     eax, 0x60
        jmp     L_66a1
    L_6699:
        test    dh, 0x1
        jz      L_66a1
        add     eax, 0x50
    L_66a1:
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    edx
        lea     eax, [esp + 0xc]
        push    eax
        call    FUN_006864d0
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0x4], edx
        mov     eax, ecx
        add     esp, 0xc
        ret     0x10
    }
}
