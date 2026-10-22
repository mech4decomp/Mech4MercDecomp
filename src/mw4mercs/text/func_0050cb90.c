// Auto-generated: FUN_0050cb90, 298 bytes, __thiscall
// FUN_0050cb90
// Array resize/append function. Each element is 0x24 bytes (9 dwords).
// Struct at ECX: [0]=data_ptr, [4]=end_ptr, [8]=capacity_end_ptr

void* FUN_004084D0(int);
void FUN_004084E0(void*);

__declspec(naked) void func_0050cb90(void)
{
    __asm {
        sub     esp, 0Ch
        mov     eax, ecx
        mov     ecx, [eax+4]
        push    ebx
        mov     ebx, [esp+1Ch]          ; param_3 (count)
        mov     [esp+8], eax            ; save this
        push    esi
        mov     esi, [eax]              ; data_ptr
        mov     [esp+8], ecx            ; save end_ptr
        sub     ecx, esi                ; byte_size = end - data
        mov     eax, 38E38E39h          ; magic for /0x24
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        shr     eax, 1Fh
        add     edx, eax                ; edx = count = byte_size / 0x24
        cmp     edx, ebx
        mov     [esp+10h], edx          ; save count
        lea     eax, [esp+20h]          ; &param_3
        jc      loc_50CBCB
        lea     eax, [esp+10h]          ; &local_count

loc_50CBCB:
        mov     eax, [eax]              ; max(count, param_3)
        add     eax, edx                ; new_count = count + max(count, param_3)
        mov     [esp+10h], eax          ; save new_count
        jz      loc_50CBEA

        lea     ecx, [eax+eax*8]
        shl     ecx, 2                  ; ecx = new_count * 0x24
        push    ecx
        call    FUN_004084D0
        add     esp, 4
        mov     [esp+20h], eax          ; new_data
        jmp     loc_50CBF2

loc_50CBEA:
        mov     dword ptr [esp+20h], 0  ; new_data = NULL

loc_50CBF2:
        mov     eax, [esp+20h]          ; new_data
        push    ebp
        mov     ebp, [esp+1Ch]          ; param_1 (new_end)
        cmp     esi, ebp
        push    edi
        jz      loc_50CC1B

        mov     edx, esi                ; src = data_ptr
loc_50CC02:
        test    eax, eax
        jz      loc_50CC11

        mov     ecx, 9
        mov     esi, edx
        mov     edi, eax
        rep movsd                       ; copy 9 dwords

loc_50CC11:
        add     edx, 24h                ; src += 0x24
        add     eax, 24h                ; dst += 0x24
        cmp     edx, ebp
        jnz     loc_50CC02

loc_50CC1B:
        cmp     ebx, 1
        jnz     loc_50CC36

        ; param_3 == 1: append one element
        test    eax, eax
        jz      loc_50CC31

        mov     esi, [esp+24h]          ; param_2 (source data)
        mov     ecx, 9
        mov     edi, eax
        rep movsd

loc_50CC31:
        add     eax, 24h
        jmp     loc_50CC55

loc_50CC36:
        test    ebx, ebx
        jbe     loc_50CC55

        ; param_3 > 1: append multiple elements
        mov     edx, ebx
        mov     ebx, [esp+24h]          ; param_2 (source data)

loc_50CC40:
        test    eax, eax
        jz      loc_50CC4F

        mov     ecx, 9
        mov     esi, ebx
        mov     edi, eax
        rep movsd

loc_50CC4F:
        add     eax, 24h
        dec     edx
        jnz     loc_50CC40

loc_50CC55:
        cmp     ebp, [esp+10h]          ; compare new_end with new_count
        mov     ebx, eax                ; ebx = current dst
        jz      loc_50CC7F

        ; Copy remaining elements (shift within new buffer)
        mov     edx, ebp                ; src = new_end
        sub     edx, eax                ; offset = new_end - current_dst

loc_50CC61:
        test    ebx, ebx
        jz      loc_50CC71

        lea     esi, [edx+ebx]          ; src = offset + dst
        mov     ecx, 9
        mov     edi, ebx
        rep movsd

loc_50CC71:
        mov     ecx, [esp+10h]          ; new_count
        add     ebx, 24h
        lea     eax, [edx+ebx]          ; next_src = offset + next_dst
        cmp     eax, ecx
        jnz     loc_50CC61

loc_50CC7F:
        mov     ecx, [esp+14h]          ; &this
        mov     eax, [ecx]              ; old_data
        test    eax, eax
        pop     edi
        mov     [esp+20h], eax          ; save old_data
        pop     ebp
        jz      loc_50CC98

        push    eax
        call    FUN_004084E0            ; free old_data
        add     esp, 4

loc_50CC98:
        mov     eax, [esp+0Ch]          ; this ptr
        mov     ecx, [esp+20h]          ; new_data
        mov     edx, [esp+10h]          ; new_count
        lea     edx, [edx+edx*8]        ; edx = new_count * 9
        mov     [eax], ecx              ; this[0] = new_data
        lea     ecx, [ecx+edx*4]        ; ecx = new_data + new_count * 0x24
        pop     esi
        mov     [eax+4], ebx            ; this[4] = current_dst
        mov     [eax+8], ecx            ; this[8] = capacity_end
        pop     ebx
        add     esp, 0Ch
        ret     0Ch
    }
}
