/*
 * FUN_004f1570 (96 B) — Adept::Channel state engine helper (__thiscall,
 * RET 0x4). Calls FUN_004f2210, reads a count via virtual slot 0x20,
 * initializes a 16-bit pair, then loops [ESP+0x18] times calling virtual
 * slot 0x20 on the stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004f2210(void);

__declspec(naked) void FUN_004f1570(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    esi
        call    FUN_004f2210
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        xor     edi, edi
        cmp     eax, edi
        mov     word ptr [esp + 0xc], 0xffff
        mov     word ptr [esp + 0xe], di
        jle     L15c8
L15b1:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        inc     edi
        cmp     edi, eax
        jl      L15b1
L15c8:
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
