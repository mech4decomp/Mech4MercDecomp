// Auto-generated: FUN_0050dab0, 359 bytes
// FUN_0050dab0
// RC4 encryption/decryption function.
// param_1 = key, param_2 = key_len, param_3 = data, param_4 = data_len

void FUN_0050D9B0(void*, void*);

__declspec(naked) void func_0050dab0(void)
{
    __asm {
        sub     esp, 110h
        xor     eax, eax
        lea     ecx, [esp+10h]

        ; Initialize S-box with 0..255
loc_50DABC:
        mov     [ecx], al
        inc     eax
        inc     ecx
        cmp     ax, 100h
        jl      loc_50DABC

        push    ebx
        mov     ebx, [esp+11Ch]         ; param_2 (key_len)
        push    ebp
        push    esi
        push    edi
        mov     byte ptr [esp+10h], 0   ; j = 0
        xor     esi, esi                ; i = 0
        lea     edi, [esp+20h]          ; S-box ptr
        mov     ebp, 100h               ; counter = 256

loc_50DAE1:
        mov     eax, [esp+10h]          ; j
        mov     edx, [esp+124h]         ; param_1 (key)
        xor     ecx, ecx
        and     eax, 0FFh
        mov     cl, [eax+edx]           ; key[i % key_len]
        xor     edx, edx
        mov     dl, [edi]               ; S[i]
        add     esi, ecx                ; i += key[i % key_len]
        add     edx, esi                ; j = (j + S[i] + key[i % key_len])
        and     edx, 800000FFh
        jns     loc_50DB0E
        dec     edx
        or      edx, 0FFFFFF00h
        inc     edx

loc_50DB0E:
        inc     eax                     ; i++
        mov     [esp+14h], dl           ; save j
        cdq
        idiv    ebx                     ; i % key_len
        mov     esi, [esp+14h]
        and     esi, 0FFh
        lea     eax, [esp+esi+20h]      ; &S[j]
        push    eax
        push    edi                     ; &S[i]
        mov     [esp+18h], dl           ; save i % key_len
        call    FUN_0050D9B0            ; swap S[i], S[j]
        add     esp, 8
        inc     edi                     ; S++
        dec     ebp
        jnz     loc_50DAE1

        ; PRGA phase
        mov     eax, [esp+130h]         ; param_4 (data_len)
        xor     ebp, ebp                ; counter = 0
        cmp     eax, ebp
        mov     [esp+18h], ebp          ; save counter
        jle     loc_50DC0C

        xor     esi, esi                ; i = 0
        xor     edi, edi                ; j = 0

loc_50DB4F:
        mov     ecx, [esp+12Ch]         ; param_3 (data)
        xor     eax, eax
        mov     al, [ecx+ebp]           ; data[counter]
        and     eax, 0FFh
        lea     edx, [eax+esi+1]        ; i = (i + 1) & 0xFF
        and     edx, 800000FFh
        jns     loc_50DB74
        dec     edx
        or      edx, 0FFFFFF00h
        inc     edx

loc_50DB74:
        mov     [esp+10h], dl           ; save i
        mov     esi, [esp+10h]
        and     esi, 0FFh
        xor     eax, eax
        mov     al, [esp+esi+20h]       ; S[i]
        lea     ebx, [esp+esi+20h]      ; &S[i]
        add     eax, edi                ; j = (j + S[i]) & 0xFF
        and     eax, 800000FFh
        jns     loc_50DB9C
        dec     eax
        or      eax, 0FFFFFF00h
        inc     eax

loc_50DB9C:
        mov     [esp+14h], al           ; save j
        mov     edi, [esp+14h]
        and     edi, 0FFh
        lea     eax, [esp+edi+20h]      ; &S[j]
        push    eax
        push    ebx                     ; &S[i]
        mov     [esp+24h], eax
        call    FUN_0050D9B0            ; swap S[i], S[j]
        mov     edx, [esp+24h]          ; &S[j]
        xor     ecx, ecx
        mov     cl, [edx]               ; S[j]
        xor     eax, eax
        mov     al, [ebx]               ; S[i]
        add     esp, 8
        add     ecx, eax                ; S[i] + S[j]
        and     ecx, 800000FFh
        jns     loc_50DBDA
        dec     ecx
        or      ecx, 0FFFFFF00h
        inc     ecx

loc_50DBDA:
        mov     eax, [esp+12Ch]         ; param_3 (data)
        mov     dl, [eax+ebp]           ; data[counter]
        and     ecx, 0FFh
        mov     cl, [esp+ecx+20h]       ; S[(S[i]+S[j]) & 0xFF]
        xor     cl, dl                  ; data[counter] ^= S[...]
        mov     [eax+ebp], cl

        mov     eax, [esp+18h]          ; counter
        inc     eax
        movsx   ebp, ax
        mov     [esp+18h], eax
        cmp     ebp, [esp+130h]         ; compare with data_len
        jl      loc_50DB4F

loc_50DC0C:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 110h
        ret
    }
}
