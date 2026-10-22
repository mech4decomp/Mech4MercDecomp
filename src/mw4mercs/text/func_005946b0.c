/*
 * FUN_005946B0 (78 B) — __thiscall serialization method.
 *
 * Serializes fields of `this` to a stream object (esi).
 * Writes:
 *   - this+0x14 (via FUN_00412A50 copy)
 *   - this+0x18 (4 bytes via stream->vtable[0x24])
 *   - this+0x1C (4 bytes via stream->vtable[0x24])
 *   - this+0x20 (1 byte via stream->vtable[0x24])
 *   - this+0x24 (via FUN_00412A50 copy)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412a50(void);

__declspec(naked) void __stdcall FUN_005946b0(void)
{
    __asm {
        push    esi
        mov     esi, [esp + 8]              ; esi = stream
        push    edi
        mov     edi, ecx                    ; edi = this
        lea     eax, [edi + 0x14]
        push    eax
        push    esi
        call    FUN_00412a50                ; copy(this+0x14, stream)
        mov     edx, [esi]
        add     esp, 8
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->write(this+0x18, 4)

        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->write(this+0x1C, 4)

        mov     edx, [esi]
        push    1
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->write(this+0x20, 1)

        add     edi, 0x24
        push    edi
        push    esi
        call    FUN_00412a50                ; copy(this+0x24, stream)
        add     esp, 8

        pop     edi
        pop     esi
        ret     4
    }
}
