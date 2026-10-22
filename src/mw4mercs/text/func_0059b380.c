/*
 * FUN_0059b380 (179 B) — Stream deserialization method.
 *
 * Reads strings and multiple 4-byte fields from a stream object
 * via virtual method calls.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: stream pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412A50(void *dst, void *src);

__declspec(naked) void __stdcall FUN_0059B380(void *stream)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    edi
        mov     edi, ecx

        lea     eax, [edi + 0x10]
        push    eax
        push    esi
        call    FUN_00412A50
        lea     ecx, [edi + 0x14]
        push    ecx
        push    esi
        call    FUN_00412A50

        mov     edx, dword ptr [esi]
        add     esp, 0x10
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x2C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x34]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x4C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]

        add     edi, 0x38
        mov     ebx, 5

loop_start:
        mov     edx, dword ptr [esi]
        push    4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 4
        dec     ebx
        jne     loop_start

        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
