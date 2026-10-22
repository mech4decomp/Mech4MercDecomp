/*
 * FUN_0053e7b0 (170 B) — Reads 3 values from a stream and calls
 * FUN_00518640, or sets a global to -1 if stream is null.
 *
 * __stdcall, RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00518640(void);

__declspec(naked) void __stdcall FUN_0053e7b0(void)
{
    

extern int DAT_007dd268;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x0C]  ; param_2 (stream)
        test    esi, esi
        jz      stream_null

        mov     eax, dword ptr [esi]
        push    ebx
        push    ebp
        push    edi

        ; Read first value (2 bytes)
        push    2
        lea     ecx, [esp + 0x1C]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0
        call    dword ptr [eax + 0x20]       ; stream->Read(&val, 2)

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]        ; stream->GetPosition()

        mov     ecx, dword ptr [esp + 0x18]  ; first value
        mov     edi, eax                     ; save position 1
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]       ; stream->Seek(pos1)

        ; Read second value (2 bytes)
        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [esp + 0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val, 2)

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]        ; stream->GetPosition()

        mov     ecx, dword ptr [esp + 0x18]  ; second value
        mov     ebx, eax                     ; save position 2
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]       ; stream->Seek(pos2)

        ; Read third value (2 bytes)
        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [esp + 0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val, 2)

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]        ; stream->GetPosition()

        mov     ecx, dword ptr [esp + 0x18]  ; third value
        mov     ebp, eax                     ; save position 3
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x18]       ; stream->Seek(pos3)

        ; mov ecx, dword ptr [0x007DD268]
        mov ecx, dword ptr [DAT_007dd268]

        push    ebp
        push    ebx
        push    edi
        call    FUN_00518640

        pop     edi
        pop     ebp
        pop     ebx
        pop     esi
        ret     8

    stream_null:
        ; mov edx, dword ptr [0x007DD268]
        mov edx, dword ptr [DAT_007dd268]

        mov     dword ptr [edx + 0x40D0C], -1
        pop     esi
        ret     8
    }


}
