/*
 * FUN_0053e180 (260 B) — Iterates over entries in two arrays, writing
 * active entry sizes to a stream.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041f030(void);

__declspec(naked) void __fastcall FUN_0053e180(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]  ; param_2 (stream)
        mov     eax, dword ptr [esi]         ; stream vtable
        push    edi
        mov     edi, ecx                     ; this
        push    1
        lea     ecx, [esp + 0x14]
        push    ecx
        xor     ebx, ebx
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], bl    ; local_4 = 0
        call    dword ptr [eax + 0x20]       ; stream->Read(&local_4, 1)

        mov     al, byte ptr [esp + 0x10]    ; count
        xor     ebp, ebp                     ; i = 0
        cmp     al, bl
        jbe     loop1_end

    loop1_start:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x24], bl    ; local_byte = 0
        call    dword ptr [edx + 0x20]       ; stream->Read(&index_byte, 1)

        mov     eax, dword ptr [esp + 0x1C]  ; index
        and     eax, 0xFF
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax                     ; ecx = index * 0x2038
        lea     eax, [edi + ecx*8]
        cmp     byte ptr [eax + 0x3538], bl
        jz      loop1_skip
        mov     eax, dword ptr [eax + 0x3584]
        cmp     eax, ebx
        jz      loop1_skip
        mov     eax, dword ptr [eax + 0x170]
        cmp     eax, ebx
        jz      loop1_skip

        mov     edx, dword ptr [esi]
        push    4
        add     eax, 0x4C8
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Write(data, 4)

    loop1_skip:
        mov     eax, dword ptr [esp + 0x10]  ; count
        inc     ebp
        and     eax, 0xFF
        cmp     ebp, eax
        jl      loop1_start

    loop1_end:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x18], bl    ; local_byte = 0
        call    dword ptr [edx + 0x20]       ; stream->Read(&count2, 1)

        mov     al, byte ptr [esp + 0x10]    ; count2
        xor     ebp, ebp                     ; i = 0
        cmp     al, bl
        jbe     loop2_end

    loop2_start:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x24], bl    ; local_byte = 0
        call    dword ptr [edx + 0x20]       ; stream->Read(&index_byte, 1)

        mov     ecx, dword ptr [esp + 0x1C]  ; index
        and     ecx, 0xFF
        imul    ecx, ecx, 0x22AC
        lea     eax, [ecx + edi]
        cmp     byte ptr [eax + 0x205F34], bl
        jz      loop2_skip
        mov     eax, dword ptr [eax + 0x205D30]
        cmp     eax, ebx
        jz      loop2_skip

        mov     edx, dword ptr [esi]
        push    4
        add     eax, 0x4C8
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Write(data, 4)

    loop2_skip:
        mov     eax, dword ptr [esp + 0x10]  ; count2
        inc     ebp
        and     eax, 0xFF
        cmp     ebp, eax
        jl      loop2_start

    loop2_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     8
    }
}
