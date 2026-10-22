/*
 * FUN_00413540 — entry_serialize (writer path).
 *
 * Serializes an archive entry to a write stream, compressing member data
 * via the LZW compressor (FUN_006FBE80) when the ratio is favorable.
 *
 * __thiscall (ecx = entry), 3 DWORD stack params (param1, stream, param3),
 * RET 0x0C. 439 bytes.
 */

#include <mw4/archive.h>

extern void entry_load_data(void);             /* FUN_00413830 (__thiscall) */
extern void __cdecl archive_alloc(void);        /* FUN_004084C0 */
extern void lzw_compress(void);                 /* FUN_006FBE80 (__stdcall RET 0x10) */
extern void __cdecl archive_free(void);          /* FUN_004084E0 */

float g_compress_threshold;                      /* 0x0076D22C */

__declspec(naked) void entry_serialize(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    esi
        mov     esi, [esp+0x18]        ; esi = stream (param2)
        mov     eax, [esi]             ; eax = stream vtable
        push    edi
        mov     edi, ecx               ; edi = this (entry)
        push    0x8
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+0x24]   ; stream->write(entry, 8)
        mov     ecx, [edi+0x18]        ; ecx = entry->field_18 (stored_size)
        lea     ebx, [edi+0x18]        ; ebx = &entry->field_18
        xor     eax, eax
        cmp     ecx, eax
        mov     [esp+0x1c], ebx        ; save &field_18 in param2 slot
        jne     nonempty               ; stored_size != 0?

        ; Empty entry path
        mov     edx, [esi]             ; stream vtable
        mov     [esp+0x20], eax        ; local: 0 (uncompressed_size)
        mov     [esp+0x1c], eax        ; local: 0 (stored_size)
        mov     [esp+0x18], eax        ; local: 0 (data_off)
        push    0x4
        lea     eax, [esp+0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]   ; write(&stored_size, 4)
        mov     edx, [eax]
        push    0x4
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]   ; write(&uncompressed_size, 4)
        mov     edx, [eax]
        push    0x4
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]   ; write(&data_off, 4)
        mov     edx, [esi]             ; stream vtable
        push    0x2
        lea     eax, [edi+0x24]        ; &entry_index
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]   ; write(&entry_index, 2)
        mov     edx, [eax]
        push    0x1
        lea     ebx, [edi+0x27]        ; &name_len
        push    ebx
        mov     ecx, eax
        call    dword ptr [edx+0x24]   ; write(&name_len, 1)
        mov     bl, [ebx]              ; bl = name_len
        test    bl, bl
        jbe     epilogue               ; name_len == 0?
        mov     eax, [esi]
        and     ebx, 0xff
        push    ebx                    ; name_len
        add     edi, 0x28              ; edi = &entry->name
        push    edi
        mov     ecx, esi
        call    dword ptr [eax+0x24]   ; write(name, name_len)
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0xc

nonempty:
        cmp     [edi+0x8], eax          ; entry->field_08 (data buf) == 0?
        jne     skip_load
        mov     ecx, [esp+0x18]         ; ecx = param1
        push    ecx
        mov     ecx, edi               ; this = entry
        call    entry_load_data         ; load member data if not loaded
skip_load:
        mov     edx, [esp+0x18]         ; edx = param1
        mov     eax, [edx+0x24]         ; eax = param1->field_24 (alloc param)
        push    ebp
        mov     ebp, [edi+0x1c]         ; ebp = entry->field_1c (uncompressed_size)
        push    eax                      ; alloc_param
        push    ebp                      ; uncompressed_size
        call    archive_alloc            ; eax = buf
        mov     ecx, [edi+0x8]          ; ecx = entry->field_08 (raw data ptr)
        add     esp, 0x8
        push    ebp                      ; uncompressed_size
        push    ebp                      ; uncompressed_size
        push    ecx                      ; raw data ptr
        push    eax                      ; output buf
        mov     [esp+0x2c], eax          ; save buf in param1 slot
        call    lzw_compress             ; eax = compressed_size (RET 0x10)
        xor     ecx, ecx
        cmp     eax, ecx
        mov     [ebx], eax               ; entry->field_18 = compressed_size
        jz      check_revert             ; if 0, skip ratio check

        ; Float ratio check: compressed/uncompressed > threshold?
        mov     [esp+0x10], eax
        mov     [esp+0x14], ecx
        fild    qword ptr [esp+0x10]
        mov     [esp+0x10], ebp
        mov     [esp+0x14], ecx
        fidiv   dword ptr [esp+0x10]
        fcomp   dword ptr [g_compress_threshold]
        fnstsw  ax
        test    ah, 0x41
        jnz     keep_compressed          ; if <= threshold, keep compressed

check_revert:
        mov     edx, [esp+0x1c]          ; edx = saved buf (param1 slot)
        push    edx
        call    archive_free
        add     esp, 0x4
        mov     dword ptr [esp+0x1c], 0  ; clear saved buf
        mov     [ebx], ebp               ; field_18 = uncompressed_size (revert)

keep_compressed:
        mov     edx, [esi]               ; stream vtable
        push    0x4
        lea     eax, [edi+0x1c]         ; &entry->field_1c (uncompressed_size)
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]     ; write(&field_1c, 4)
        mov     edx, [eax]
        push    0x4
        push    ebx                      ; &entry->field_18 (stored_size)
        mov     ecx, eax
        call    dword ptr [edx+0x24]     ; write(&field_18, 4)
        mov     ebx, [esp+0x24]          ; ebx = param1
        mov     edx, [ebx+0x10]          ; param1->field_10
        mov     ecx, [ebx+0x14]          ; param1->field_14
        sub     ecx, edx
        mov     edx, [esi]               ; stream vtable
        lea     eax, [edi+0x20]          ; &entry->field_20 (data_off)
        push    0x4
        mov     [eax], ecx               ; entry->field_20 = span
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]     ; write(&field_20, 4)
        mov     eax, [esi]
        push    0x2
        lea     ecx, [edi+0x24]          ; &entry_index
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]     ; write(&entry_index, 2)
        mov     edx, [eax]
        push    0x1
        lea     ebp, [edi+0x27]          ; &name_len
        push    ebp
        mov     ecx, eax
        call    dword ptr [edx+0x24]     ; write(&name_len, 1)
        xor     eax, eax
        mov     al, [ebp]                ; al = name_len
        test    al, al
        pop     ebp
        jbe     no_name                  ; name_len == 0?
        mov     edx, [esi]
        and     eax, 0xff
        push    eax                      ; name_len
        lea     eax, [edi+0x28]         ; &entry->name
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]     ; write(name, name_len)

no_name:
        mov     eax, [esp+0x1c]          ; eax = &entry->field_18 (param2 slot)
        mov     esi, [esp+0x18]          ; esi = saved buf (param1 slot)
        test    esi, esi
        mov     ecx, [eax]               ; ecx = entry->field_18 (stored_size)
        mov     edx, [ebx]               ; edx = param3 vtable (ebx=param3 from 0x41366C)
        push    ecx                      ; stored_size (count arg)
        jz      write_raw                 ; buf == 0?

        ; buf != 0: write compressed data, then free buf
        push    esi                      ; buf (ptr arg)
        mov     ecx, ebx                 ; ecx = param3
        call    dword ptr [edx+0x24]     ; param3->write(buf, stored_size)
        push    esi
        call    archive_free
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0xc

write_raw:
        ; buf == 0: compression was reverted, write raw data
        mov     eax, [edi+0x8]           ; eax = entry->field_08 (raw data)
        push    eax                      ; raw data (ptr arg)
        mov     ecx, ebx                 ; ecx = param3
        call    dword ptr [edx+0x24]     ; param3->write(field_08, stored_size)

epilogue:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
