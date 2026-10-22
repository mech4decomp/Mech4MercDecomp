// Auto-generated: FUN_0050ccc0, 422 bytes, __thiscall
// FUN_0050ccc0
// Array merge/copy operation. Each element is 0x24 bytes (9 dwords).
// Struct at ECX: [0]=data_ptr, [4]=end_ptr, [8]=capacity_end_ptr

void* FUN_004084D0(int);
void FUN_004084E0(void*);
void FUN_0050CE70(void*, void*);

__declspec(naked) void func_0050ccc0(void)
{
    __asm {
        sub     esp, 0Ch
        mov     eax, [esp+10h]          ; param_1 (source struct ptr)
        push    esi
        mov     esi, ecx                ; this
        cmp     eax, esi
        mov     [esp+4], esi
        jz      loc_50CE5D

        push    ebx
        mov     ebx, [eax]              ; src_data
        push    ebp
        mov     ebp, [eax+4]            ; src_end
        mov     ecx, ebp
        sub     ecx, ebx                ; src_byte_size
        mov     eax, 38E38E39h
        imul    ecx
        mov     ecx, [esi+8]            ; this_capacity_end
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax                ; edx = src_count
        push    edi
        mov     edi, [esi]              ; this_data
        sub     ecx, edi                ; this_capacity_bytes
        mov     [esp+20h], edx          ; save src_count
        mov     eax, 38E38E39h
        imul    ecx
        mov     eax, [esp+20h]          ; src_count
        sar     edx, 3
        mov     ecx, edx
        shr     ecx, 1Fh
        add     edx, ecx                ; edx = this_capacity_count
        cmp     eax, edx
        jbe     loc_50CD89

        ; Need to grow: allocate new buffer
        test    eax, eax
        jz      loc_50CD34

        lea     edx, [eax+eax*8]
        shl     edx, 2                  ; edx = src_count * 0x24
        push    edx
        call    FUN_004084D0
        mov     [esp+14h], eax          ; new_data
        mov     eax, [esp+24h]          ; src_count (reload)
        add     esp, 4
        jmp     loc_50CD3C

loc_50CD34:
        mov     dword ptr [esp+10h], 0  ; new_data = NULL

loc_50CD3C:
        cmp     ebx, ebp
        jz      loc_50CD5E

        ; Copy elements from src to new buffer
        mov     edi, [esp+10h]          ; new_data
        sub     edi, ebx                ; offset = new_data - src_data

loc_50CD46:
        lea     eax, [edi+ebx]          ; dst = offset + src
        push    ebx                     ; src
        push    eax                     ; dst
        call    FUN_0050CE70
        add     ebx, 24h
        add     esp, 8
        cmp     ebx, ebp
        jnz     loc_50CD46

        mov     eax, [esp+20h]          ; src_count
loc_50CD5E:
        mov     ecx, [esi]              ; old_data
        test    ecx, ecx
        mov     [esp+18h], ecx
        jz      loc_50CD75

        push    ecx
        call    FUN_004084E0            ; free old_data
        mov     eax, [esp+24h]          ; src_count (reload)
        add     esp, 4

loc_50CD75:
        mov     ecx, [esp+10h]          ; new_data
        lea     edx, [eax+eax*8]
        mov     [esi], ecx              ; this[0] = new_data
        lea     ecx, [ecx+edx*4]        ; capacity_end = new_data + src_count * 0x24
        mov     [esi+8], ecx            ; this[8] = capacity_end
        jmp     loc_50CE46

loc_50CD89:
        ; No need to grow, use existing buffer
        mov     esi, [esi+4]            ; this_end
        mov     ecx, esi
        sub     ecx, edi                ; this_used_bytes
        mov     eax, 38E38E39h
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax                ; edx = this_used_count
        cmp     edx, [esp+20h]          ; compare with src_count
        mov     [esp+18h], esi          ; save this_end
        jc      loc_50CDDD

        ; this has enough capacity
        sub     ebp, ebx                ; src_remaining_bytes
        mov     eax, 38E38E39h
        imul    ebp
        sar     edx, 3
        mov     ecx, edx
        shr     ecx, 1Fh
        add     edx, ecx                ; edx = src_remaining_count
        test    edx, edx
        mov     [esp+14h], edi          ; save this_data
        jle     loc_50CE3E

        lea     eax, [edx+edx*8]
        shl     eax, 2                  ; eax = src_remaining_count * 0x24
        mov     ecx, eax
        shr     ecx, 2                  ; ecx = dword count
        mov     esi, ebx                ; src
        rep movsd                       ; copy dwords
        mov     ecx, [esp+14h]          ; this_data
        add     ecx, eax                ; advance
        jmp     loc_50CE3E

loc_50CDDD:
        ; Need to shift within existing buffer
        lea     ecx, [edx+edx*8]
        shl     ecx, 2                  ; ecx = this_used_count * 0x24
        lea     edx, [ecx+ebx]          ; edx = ecx + src_data
        sub     edx, ebx                ; edx = ecx (same as ecx)
        mov     eax, 38E38E39h
        imul    edx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax                ; edx = shift_count
        test    edx, edx
        mov     [esp+14h], ecx          ; save byte_offset
        jle     loc_50CE16

        lea     ecx, [edx+edx*8]
        shl     ecx, 2                  ; ecx = shift_count * 0x24
        shr     ecx, 2                  ; ecx = dword count
        mov     esi, ebx                ; src
        rep movsd                       ; copy dwords
        mov     ecx, [esp+14h]          ; byte_offset
        mov     esi, [esp+18h]          ; this_end

loc_50CE16:
        lea     eax, [ecx+ebx]          ; eax = byte_offset + src_data
        cmp     eax, ebp
        jz      loc_50CE3E

        sub     esi, ecx
        sub     esi, ebx
        add     esi, eax                ; esi = this_end - byte_offset - src_data + eax

        mov     edx, esi
loc_50CE25:
        test    edx, edx
        jz      loc_50CE34

        mov     ecx, 9
        mov     esi, eax
        mov     edi, edx
        rep movsd

loc_50CE34:
        add     eax, 24h
        add     edx, 24h
        cmp     eax, ebp
        jnz     loc_50CE25

loc_50CE3E:
        mov     esi, [esp+10h]          ; this (saved)
        mov     eax, [esp+20h]          ; src_count

loc_50CE46:
        mov     edx, [esi]              ; this_data
        pop     edi
        lea     ecx, [eax+eax*8]
        lea     eax, [edx+ecx*4]        ; new_end = data + src_count * 0x24
        pop     ebp
        mov     [esi+4], eax            ; this[4] = new_end
        pop     ebx
        mov     eax, esi
        pop     esi
        add     esp, 0Ch
        ret     4

loc_50CE5D:
        mov     eax, esi
        pop     esi
        add     esp, 0Ch
        ret     4
    }
}
