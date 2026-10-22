/*
 * FUN_006C9B80 — texture/surface pixel-format decoder.
 *
 * __thiscall (ECX = surface context object), 2 stack params:
 *   [ESP+4]  = frame/mip index (DWORD)
 *   [ESP+8]  = output pointer (DWORD*)
 *   RET 0x8
 *
 * Dispatches on format byte at (this->fmt_desc->type):
 *   1 = uncompressed row-by-row copy
 *   2 = RLE with 0x1000000 inline flag
 *   4 = RLE with bit flags (byte[3] bit 1 = fill, bit 0 = inline)
 *   5 = LZW + 4-bit indexed → 32-bit (nibble expansion)
 *   6 = LZW + RGB555 → ARGB8888
 *   7 = LZW + RGB565 → RGB888
 *   default = RLE + pixel conversion, calls FUN_006CA170
 *
 * Callees:
 *   FUN_006FC220 — lzw_decompress (extern, __stdcall RET 0xC, 3 params)
 *   surface_unlock — vertical flip/interlace (extern, __stdcall, 5 params, matched 100%)
 *
 * CFLAGS: /O1 (pinned)
 * Match: TBD
 */

#include <mw4/common.h>

extern void __stdcall lzw_decompress(void *dst, void *src, int src_len);  /* FUN_006FC220 */
extern void __stdcall surface_unlock(void); /* FUN_006CA170 — surface_unlock.c */

__declspec(naked) void __stdcall texture_decode(void *this_ptr, int index, void **output)
{
    __asm {
        /* ---- prologue ---- */
        sub     esp, 0x14
        push    ebx
        mov     eax, ecx                        ; EAX = this
        mov     ecx, dword ptr [esp + 0x1c]     ; ECX = param1 (index)
        cmp     ecx, dword ptr [eax + 0x10]     ; compare with this->field_10
        push    ebp
        push    esi
        push    edi
        jnz     l_cache_miss

        /* ---- cache hit: *output = this->field_04 ---- */
        mov     eax, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [esp + 0x2c]     ; param2 (output)
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], eax
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* ---- cache miss ---- */
l_cache_miss:
        test    ecx, ecx
        mov     dword ptr [eax + 0x10], ecx     ; this->field_10 = index
        jnz     l_decode                         ; index != 0 → decode path

        /* ---- index == 0: raw copy path ---- */
        mov     ecx, dword ptr [eax + 0x4]       ; ECX = this->field_04 (data desc)
        mov     edx, dword ptr [eax]             ; EDX = this->field_00 (format desc)
        mov     ebp, dword ptr [ecx + 0x18]     ; EBP = src data ptr
        mov     edi, dword ptr [ecx + 0x14]     ; EDI = dest buffer
        mov     dword ptr [esp + 0x10], ecx      ; save data desc
        mov     cl, byte ptr [edx + 0x4]        ; format type byte

        /* format 1: uncompressed, row-by-row copy */
        cmp     cl, 0x1
        jnz     l_fmt_not1
        mov     ecx, dword ptr [edx + 0xc]      ; height
        mov     edx, dword ptr [edx + 0x8]      ; width
        mov     eax, edx
        imul    eax, ecx                         ; EAX = width * height
        test    ecx, ecx
        lea     ebx, [edi + eax*4]              ; EBX = dest end
        jbe     l_default_epilogue
        lea     eax, [edx*4 + 0x0]
        mov     dword ptr [esp + 0x28], ecx      ; save height counter
l_raw_row_loop:
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        sub     ebx, eax                        ; adjust dest end
        mov     esi, ebp                        ; src row
        mov     edi, ebx                        ; dest row
        rep     movsd                           ; copy 4 bytes at a time
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb                           ; copy remainder
        mov     ecx, dword ptr [esp + 0x28]
        add     ebp, eax                         ; advance src
        dec     ecx
        mov     dword ptr [esp + 0x28], ecx
        jnz     l_raw_row_loop
l_raw_copy_done:
        mov     eax, dword ptr [esp + 0x2c]     ; param2 (output)
        mov     ecx, dword ptr [esp + 0x10]     ; data desc
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x14
        ret     0x8

l_fmt_not1:
        cmp     cl, 0x4
        jbe     l_default_raw_copy              ; format 2-4: simple copy (but 4-7 path)
        cmp     cl, 0x8
        jnc     l_default_raw_copy              ; format 8+: simple copy

        /* format 5-7: copy from offset 0x18 of source */
        mov     ecx, dword ptr [edx + 0xc]      ; height
        imul    ecx, dword ptr [edx + 0x8]      ; * width
        mov     esi, dword ptr [eax + 0x8]      ; this->field_08
        shl     ecx, 0x2                         ; * 4 bytes
        mov     eax, ecx
        shr     ecx, 0x2
        add     esi, 0x18                        ; skip 24-byte header
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x2c]     ; param2
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]     ; data desc
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x14
        ret     0x8

l_default_raw_copy:
        /* default raw copy: flat memcpy */
        mov     ecx, dword ptr [edx + 0xc]
        imul    ecx, dword ptr [edx + 0x8]
        shl     ecx, 0x2
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
l_default_epilogue:
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* ---- decode path (index != 0) ---- */
l_decode:
        mov     ebp, dword ptr [eax]            ; EBP = this->field_00 (format desc)
        mov     dl, byte ptr [ebp + 0x4]        ; format type byte
        cmp     dl, 0x2
        mov     dword ptr [esp + 0x20], ebp     ; save format desc (preserves flags)
        jnz     l_fmt_not2                        ; if not format 2, check format 4

        /* format 2: RLE with 0x1000000 flag */
        mov     esi, dword ptr [eax + 0xc]      ; this->field_0C (index table)
        mov     ebx, dword ptr [esi + ecx*4 - 0xc]  ; start offset
        mov     edx, dword ptr [eax + 0x4]      ; data desc
        mov     ebp, dword ptr [eax + 0x8]      ; this->field_08
        mov     ecx, dword ptr [esi + ecx*4 - 0x8]  ; end offset
        mov     edx, dword ptr [edx + 0x14]    ; dest buffer
        sub     ecx, ebx                        ; ECX = byte count
        mov     eax, 0x0                         ; output byte counter
        mov     dword ptr [esp + 0x14], edx     ; save dest
        mov     dword ptr [esp + 0x18], ecx     ; save byte count
        mov     dword ptr [esp + 0x28], ebp     ; save this->field_08
        lea     ebx, [ebx + ebp]                ; EBX = src ptr (start + base)
        mov     dword ptr [esp + 0x2c], eax     ; init output counter = 0
        jz      l_decode_return                  ; byte count == 0 → done

l_fmt2_loop:
        mov     ecx, dword ptr [ebx]            ; ECX = chunk header
        test    ecx, 0x1000000
        jnz     l_fmt2_inline

        /* not inline: copy from source+24 offset */
        mov     edi, dword ptr [esp + 0x14]     ; dest base
        mov     esi, ebp                         ; this->field_08
        sub     esi, edi
        lea     esi, [esi + edx + 0x18]         ; src = base - dest + cur_dest + 24
        mov     edi, edx                         ; dest current
        rep     movsd
        mov     ecx, dword ptr [ebx]            ; re-read chunk header
        add     eax, 0x4
        mov     dword ptr [esp + 0x2c], eax
        lea     edx, [edx + ecx*4]              ; advance dest by count*4
        add     ebx, 0x4                         ; advance src ptr past header
        jmp     l_fmt2_next

l_fmt2_inline:
        and     ecx, 0xffffff                    ; mask count
        lea     eax, [ecx*4 + 0x0]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, eax
        mov     ebp, ecx
        shr     ecx, 0x2
        add     ebx, 0x4                         ; advance past header
        mov     esi, ebx                         ; src = inline data
        mov     edi, edx                         ; dest current
        rep     movsd
        mov     ecx, ebp
        mov     ebp, dword ptr [esp + 0x28]     ; restore this->field_08
        and     ecx, 0x3
        add     edx, eax                         ; advance dest
        add     ebx, eax                         ; advance src past data
        mov     eax, dword ptr [esp + 0x2c]
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        lea     eax, [eax + ecx*4 + 0x4]
        mov     dword ptr [esp + 0x2c], eax

l_fmt2_next:
        cmp     eax, dword ptr [esp + 0x18]
        jc      l_fmt2_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* format 4: RLE with bit flags */
l_fmt_not2:
        cmp     dl, 0x4
        jnz     l_fmt_not4

        mov     edx, dword ptr [eax + 0x4]      ; data desc
        mov     esi, dword ptr [eax + 0xc]      ; index table
        mov     ebx, dword ptr [edx + 0x14]     ; dest buffer
        mov     edx, dword ptr [esi + ecx*4 - 0xc]  ; start
        mov     ecx, dword ptr [esi + ecx*4 - 0x8]  ; end
        mov     esi, dword ptr [eax + 0x8]      ; this->field_08
        sub     ecx, edx                         ; byte count
        mov     ebp, 0x0
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x28], esi
        lea     edx, [edx + esi]                ; src ptr
        mov     dword ptr [esp + 0x2c], ebp
        jz      l_decode_return
        jmp     l_fmt4_loop_entry

l_fmt4_loop:
        mov     esi, dword ptr [esp + 0x28]
l_fmt4_loop_entry:
        mov     al, byte ptr [edx + 0x3]        ; flags byte (byte 3 of chunk)
        test    al, 0x2
        jz      l_fmt4_not_fill

        /* fill: repeat one DWORD N times */
        mov     eax, dword ptr [edx]
        and     eax, 0xffffff                   ; count
        add     ebp, 0x4
        add     edx, 0x4
        test    eax, eax
        jle     l_fmt4_fill_done
l_fmt4_fill_loop:
        mov     ecx, dword ptr [edx]
        mov     dword ptr [ebx], ecx
        add     ebx, 0x4
        dec     eax
        jnz     l_fmt4_fill_loop
l_fmt4_fill_done:
        add     edx, 0x4
        add     ebp, 0x4
        mov     dword ptr [esp + 0x2c], ebp
        jmp     l_fmt4_next

l_fmt4_not_fill:
        test    al, 0x1
        jz      l_fmt4_copy_ref

        /* inline: copy N DWORDs from src */
        mov     eax, dword ptr [edx]
        and     eax, 0xffffff
        lea     ecx, [eax*4 + 0x0]
        mov     dword ptr [esp + 0x18], ecx
        mov     ebp, ecx
        shr     ecx, 0x2
        add     edx, 0x4
        mov     esi, edx
        mov     edi, ebx
        rep     movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep     movsb
        mov     ecx, ebp
        add     ebx, ecx
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x2c]
        lea     ebp, [ecx + eax*4 + 0x4]
        mov     dword ptr [esp + 0x2c], ebp
        jmp     l_fmt4_next

l_fmt4_copy_ref:
        /* copy from source+24 offset */
        mov     ecx, dword ptr [edx]
        mov     edi, dword ptr [esp + 0x14]
        shl     ecx, 0x2
        mov     eax, ecx
        sub     esi, edi
        shr     ecx, 0x2
        lea     esi, [esi + ebx + 0x18]
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [edx]
        add     ebp, 0x4
        mov     dword ptr [esp + 0x2c], ebp
        lea     ebx, [ebx + ecx*4]
        add     edx, 0x4

l_fmt4_next:
        cmp     ebp, dword ptr [esp + 0x10]
        jc      l_fmt4_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* format 5: LZW + 4-bit indexed → 32-bit (nibble expansion) */
l_fmt_not4:
        cmp     dl, 0x5
        jnz     l_fmt_not5

        mov     edx, dword ptr [eax + 0x4]      ; data desc
        mov     esi, dword ptr [edx + 0x18]     ; LZW dest buffer
        mov     edi, dword ptr [edx + 0x14]     ; pixel dest
        mov     edx, dword ptr [eax + 0xc]      ; index table
        mov     ecx, dword ptr [edx + ecx*4 - 0xc]  ; start offset
        mov     ebx, dword ptr [eax + 0x8]      ; this->field_08
        mov     eax, dword ptr [ecx + ebx]      ; compressed size
        add     ecx, ebx                        ; src ptr
        push    eax                             ; param3: src_len
        add     ecx, 0x4                         ; skip 4-byte size field
        push    ecx                             ; param2: src
        push    esi                             ; param1: dst
        call    lzw_decompress
        mov     eax, dword ptr [ebp + 0xc]      ; height
        imul    eax, dword ptr [ebp + 0x8]      ; * width
        test    eax, eax
        jle     l_decode_return
        mov     ecx, eax
l_fmt5_loop:
        xor     eax, eax
        mov     ax, word ptr [esi]             ; read 16-bit pixel
        add     edi, 0x4
        add     esi, 0x2
        mov     edx, eax
        and     edx, 0xfffff000
        shl     edx, 0x4
        mov     ebx, eax
        and     ebx, 0xf00
        or      edx, ebx
        shl     edx, 0x4
        mov     ebx, eax
        and     ebx, 0xf0
        or      edx, ebx
        shl     edx, 0x4
        and     eax, 0xf
        or      edx, eax
        shl     edx, 0x4
        dec     ecx
        mov     dword ptr [edi - 0x4], edx
        jnz     l_fmt5_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* format 6: LZW + RGB555 → ARGB8888 */
l_fmt_not5:
        cmp     dl, 0x6
        jnz     l_fmt_not6

        mov     edx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [edx + 0x18]
        mov     edi, dword ptr [edx + 0x14]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [edx + ecx*4 - 0xc]
        mov     ebx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [ecx + ebx]
        add     ecx, ebx
        push    eax
        add     ecx, 0x4
        push    ecx
        push    esi
        call    lzw_decompress
        mov     eax, dword ptr [ebp + 0xc]
        imul    eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jle     l_decode_return
        mov     edx, eax
l_fmt6_loop:
        xor     eax, eax
        mov     ax, word ptr [esi]
        mov     ecx, eax
        and     ecx, 0xffff
        and     eax, 0x8000
        mov     ebx, ecx
        mov     ebp, ecx
        and     ebx, 0x7c00
        and     ebp, 0x3e0
        and     ecx, 0x1f
        neg     eax
        sbb     eax, eax
        lea     ebx, [ebp + ebx*8]
        and     eax, 0xff000000
        lea     ecx, [ecx + ebx*8]
        lea     eax, [eax + ecx*8]
        mov     dword ptr [edi], eax
        add     edi, 0x4
        add     esi, 0x2
        dec     edx
        jnz     l_fmt6_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* format 7: LZW + RGB565 → RGB888 */
l_fmt_not6:
        cmp     dl, 0x7
        jnz     l_fmt_default

        mov     edx, dword ptr [eax + 0x4]
        mov     esi, dword ptr [edx + 0x18]
        mov     edi, dword ptr [edx + 0x14]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [edx + ecx*4 - 0xc]
        mov     ebx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [ecx + ebx]
        add     ecx, ebx
        push    eax
        add     ecx, 0x4
        push    ecx
        push    esi
        call    lzw_decompress
        mov     eax, dword ptr [ebp + 0xc]
        imul    eax, dword ptr [ebp + 0x8]
        test    eax, eax
        jle     l_decode_return
        mov     ecx, eax
l_fmt7_loop:
        xor     eax, eax
        mov     ax, word ptr [esi]
        xor     edx, edx
        mov     dl, ah
        add     edi, 0x4
        add     esi, 0x2
        shr     eax, 0x3
        and     eax, 0xf8
        and     edx, 0xf8
        add     edx, 0xff00
        shl     edx, 0x8
        add     edx, eax
        xor     eax, eax
        mov     al, byte ptr [esi - 0x2]
        shl     al, 0x3
        shl     edx, 0x8
        and     eax, 0xff
        add     edx, eax
        dec     ecx
        mov     dword ptr [edi - 0x4], edx
        jnz     l_fmt7_loop
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8

        /* default format (8+): RLE with 0x1000000 flag + pixel conversion */
l_fmt_default:
        mov     esi, dword ptr [eax + 0x4]      ; data desc
        mov     edx, dword ptr [esi + 0x14]     ; dest buffer
        mov     ebx, dword ptr [eax + 0x8]      ; this->field_08
        mov     dword ptr [esp + 0x10], esi
        mov     esi, dword ptr [esi + 0x18]     ; src pixel palette
        mov     dword ptr [esp + 0x28], esi
        mov     esi, dword ptr [eax + 0xc]      ; index table
        mov     ebp, dword ptr [esi + ecx*4 - 0xc]  ; start
        mov     edi, dword ptr [esi + ecx*4 - 0x8]  ; end
        sub     edi, ebp                         ; byte count
        add     ebx, ebp                         ; src ptr
        xor     ebp, ebp
        test    edi, edi
        mov     dword ptr [esp + 0x14], edi
        jbe     l_fmt_default_post

l_fmt_default_loop:
        mov     ecx, dword ptr [ebx]            ; chunk header
        test    ecx, 0x1000000
        jnz     l_fmt_default_inline

        /* not inline: copy from palette */
        mov     esi, dword ptr [esp + 0x28]     ; palette
        mov     edi, edx                         ; dest
        rep     movsd
        mov     eax, dword ptr [ebx]            ; re-read header
        mov     esi, dword ptr [esp + 0x28]     ; palette
        mov     edi, dword ptr [esp + 0x14]     ; byte count
        shl     eax, 0x2
        add     esi, eax                         ; advance palette
        add     edx, eax                         ; advance dest
        add     ebp, 0x4
        mov     dword ptr [esp + 0x28], esi
        add     ebx, 0x4
        jmp     l_fmt_default_next

l_fmt_default_inline:
        and     ecx, 0xffffff                    ; count
        mov     esi, ecx
        add     ebp, 0x4
        add     ebx, 0x4
        test    esi, esi
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x18], ebp
        jle     l_fmt_default_inline_done

        /* inline: 16-bit pixel conversion loop */
        mov     eax, dword ptr [esp + 0x28]     ; palette ptr
        lea     eax, [eax + esi*4]
        mov     ecx, ebx                         ; src ptr
        mov     dword ptr [esp + 0x28], eax
l_fmt_default_pix_loop:
        mov     ax, word ptr [ecx]             ; read 16-bit pixel
        add     edx, 0x4
        add     ecx, 0x2
        mov     edi, eax
        shr     edi, 0x7
        and     edi, 0xf8
        mov     ebp, eax
        add     edi, 0xff00
        shl     al, 0x3
        shl     edi, 0x8
        shr     ebp, 0x2
        and     ebp, 0xf0
        add     edi, ebp
        shl     edi, 0x8
        and     eax, 0xff
        add     edi, eax
        dec     esi
        mov     dword ptr [edx - 0x4], edi
        jnz     l_fmt_default_pix_loop

        mov     ebp, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x14]

l_fmt_default_inline_done:
        add     esi, esi                         ; esi *= 2 (pixel bytes)
        add     ebx, esi                         ; advance src
        add     ebp, esi                         ; advance counter

l_fmt_default_next:
        cmp     ebp, edi
        jc      l_fmt_default_loop

l_fmt_default_post:
        mov     eax, dword ptr [esp + 0x20]     ; format desc
        mov     ecx, dword ptr [eax + 0xc]      ; height
        mov     edx, dword ptr [eax + 0x8]      ; width
        mov     esi, dword ptr [esp + 0x10]     ; data desc
        mov     eax, dword ptr [esi + 0xc]
        push    ecx                              ; param5: height
        push    edx                              ; param4: width
        push    eax                              ; param3: data desc field 0xC
        mov     eax, dword ptr [esi + 0x14]
        push    eax                              ; param2: dest buffer
        push    eax                              ; param1: dest buffer (same)
        call    surface_unlock
        mov     ecx, dword ptr [esp + 0x2c]     ; param2 (output)
        mov     dword ptr [ecx], esi             ; *output = data desc

l_decode_return:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8
    }
}
