/*
 * FUN_004e7150 (175 B) — MLR/Adept __thiscall: writes a set of member
 * fields (offsets 0x10/0x14/0x40/0x38/0x3c/0x34/0x50/0x54/0x20/0x1c)
 * out through the stream object's virtual method at vtable+0x24.
 * __thiscall, RET 0x8 (this in ECX, one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a50(void);

__declspec(naked) void FUN_004e7150(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [edi + 0x40]
        push    ecx
        push    esi
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     eax, [edi + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x3c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x50]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [edi + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jbe     L71FA
        mov     ecx, dword ptr [edi + 0x1c]
        mov     edx, dword ptr [esi]
        shl     eax, 0x3
        push    eax
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
L71FA:
        pop     edi
        pop     esi
        ret     0x8
    }
}
