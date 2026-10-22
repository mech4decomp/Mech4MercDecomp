/*
 * FUN_0059DE20 (238 B) — __thiscall serialization function.
 * Reads data from a stream object and populates this object's fields.
 * this = pointer to struct with fields at 0x10-0x3C
 * arg1 (stack) = stream object pointer (has vtable at [stream])
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00412a50(void);

__declspec(naked) void __stdcall FUN_0059DE20(void)
{
    __asm {
        push    ecx                         ; save original this
        push    ebx
        push    esi
        mov     esi, [esp + 0x10]           ; esi = arg1 (stream ptr)
        mov     eax, [esi]                  ; eax = stream vtable
        push    edi
        mov     edi, ecx                    ; edi = this

        ; Read field at 0x10
        push    4
        lea     ecx, [edi + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]      ; stream->read(4, &this->field_10)

        ; Read field at 0x14
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &this->field_14)

        ; Read field at 0x18
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &this->field_18)

        ; Read field at 0x1C
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &this->field_1C)

        ; Read field at 0x20
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &this->field_20)

        ; Read field at 0x24
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &this->field_24)

        ; Read field at 0x28
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &this->field_28)

        ; Compute count from (field_2C, field_30)
        mov     eax, [edi + 0x2C]
        mov     ecx, [edi + 0x30]
        mov     edx, [esi]
        sub     ecx, eax
        sar     ecx, 2                      ; count = (end - begin) / 4
        push    4
        lea     eax, [esp + 0x18]           ; &count on stack
        mov     [esp + 0x18], ecx           ; store count
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &count)

        ; Loop to read elements
        mov     eax, [esp + 0x14]           ; eax = count
        xor     ebx, ebx
        test    eax, eax
        jle     L_loop1_done
        push    ebp
        mov     ebp, [edi + 0x2C]           ; ebp = field_2C (begin ptr)
    L_loop1:
        push    ebp
        push    esi
        call    FUN_00412a50
        mov     eax, [esp + 0x20]           ; eax = count (reload after call)
        add     esp, 8
        inc     ebx
        add     ebp, 4
        cmp     ebx, eax
        jl      L_loop1
        pop     ebp

    L_loop1_done:
        ; Compute count from (field_38, field_3C)
        mov     eax, [edi + 0x38]
        mov     ecx, [edi + 0x3C]
        mov     edx, [esi]
        sub     ecx, eax
        sar     ecx, 2                      ; count = (end - begin) / 4
        push    4
        lea     eax, [esp + 0x10]           ; &count on stack
        mov     [esp + 0x10], ecx           ; store count
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]      ; stream->read(4, &count)

        ; Loop to read elements
        mov     eax, [esp + 0x0C]           ; eax = count
        xor     ebx, ebx
        test    eax, eax
        jle     L_loop2_done
        mov     edi, [edi + 0x38]           ; edi = field_38 (begin ptr)
    L_loop2:
        push    edi
        push    esi
        call    FUN_00412a50
        mov     eax, [esp + 0x14]           ; eax = count (reload after call)
        add     esp, 8
        inc     ebx
        add     edi, 4
        cmp     ebx, eax
        jl      L_loop2

    L_loop2_done:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
