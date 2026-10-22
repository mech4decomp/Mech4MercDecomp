/*
 * FUN_006B0460 (184 B) — Vtable 0x798C44 slot 1: serialization write.
 *
 * Writes object fields to a stream via vtable[0x24] (stream write method).
 * Fields written:
 *   - this+0x04 + 0x30 (4 bytes, as a computed value)
 *   - this+0x08 (4 bytes)
 *   - this+0x0C (4 bytes)
 *   - If this+0x14 is non-NULL: writes flag byte 0x01 then calls child's
 *     vtable[0] (serialize) on the stream
 *   - If this+0x14 is NULL: writes flag byte 0x00
 *   - this+0x18 (1 byte)
 *   - this+0x19 (1 byte)
 *   - this+0x1A (1 byte)
 *   - this+0x1B (1 byte)
 *   - this+0x1C (4 bytes)
 *
 * __thiscall (ECX = this), RET 4 (one stack param: stream*).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b0460(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x0C]    ; esi = stream
        mov     eax, dword ptr [esi]            ; eax = stream->vtable
        push    edi
        mov     edi, ecx                        ; edi = this
        mov     ecx, dword ptr [edi + 4]        ; ecx = this->field_04
        add     ecx, 0x30                       ; ecx = field_04 + 0x30
        push    4
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]          ; stream->write(&val, 4)

        mov     edx, dword ptr [edi + 8]        ; edx = this->field_08
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edx     ; stack local = field_08
        call    dword ptr [eax + 0x24]          ; stream->write(&field_08, 4)

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [edi + 0x0C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]          ; stream->write(&field_0C, 4)

        mov     ebx, dword ptr [edi + 0x14]     ; ebx = this->field_14 (child)
        test    ebx, ebx
        je      l_no_child

        ; Has child: write flag=1, then child->serialize(stream)
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 1        ; flag = 1
        call    dword ptr [edx + 0x24]          ; stream->write(&flag, 1)
        mov     edx, dword ptr [ebx]
        push    esi                             ; stream
        mov     ecx, ebx                        ; child
        call    dword ptr [edx]                 ; child->vtable[0](stream)
        jmp     l_after_child

    l_no_child:
        ; No child: write flag=0
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], 0        ; flag = 0
        call    dword ptr [eax + 0x24]          ; stream->write(&flag, 1)

    l_after_child:
        ; Write byte fields
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]          ; stream->write(&byte_18, 1)

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x19]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]          ; stream->write(&byte_19, 1)

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x1A]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]          ; stream->write(&byte_1A, 1)

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x1B]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]          ; stream->write(&byte_1B, 1)

        ; Write field_1C
        mov     edx, dword ptr [esi]
        push    4
        add     edi, 0x1C
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]          ; stream->write(&field_1C, 4)

        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
