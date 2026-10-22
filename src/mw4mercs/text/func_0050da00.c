// Auto-generated: FUN_0050da00, 171 bytes
// FUN_0050da00
// Base64 encoding function.

char FUN_0050D9D0(int);

__declspec(naked) void func_0050da00(void)
{
    __asm {
        push    esi
        mov     esi, [esp+0Ch]          ; param_2 (length)
        push    edi
        xor     edi, edi                ; counter = 0
        test    esi, esi
        jle     loc_50DAA1              ; if length <= 0, return empty

        push    ebx
        mov     ebx, [esp+10h]          ; param_1 (source)
        push    ebp
        mov     ebp, [esp+1Ch]          ; param_3 (output)
        jmp     loc_50DA20

loc_50DA1C:
        mov     esi, [esp+18h]          ; reload length (from stack)

loc_50DA20:
        xor     eax, eax                ; inner counter = 0

loc_50DA22:
        cmp     edi, esi
        jge     loc_50DA2F              ; if counter >= length, pad with 0

        mov     cl, [ebx]               ; read source byte
        mov     [esp+eax+1Ch], cl       ; store in temp buffer
        inc     ebx                     ; advance source
        jmp     loc_50DA34

loc_50DA2F:
        mov     byte ptr [esp+eax+1Ch], 0  ; pad with 0

loc_50DA34:
        inc     eax
        inc     edi
        cmp     eax, 2
        jle     loc_50DA22              ; loop 3 times (read 3 bytes)

        ; Convert 3 bytes to 4 Base64 characters
        mov     al, [esp+1Ch]           ; byte 0
        mov     cl, [esp+1Dh]           ; byte 1
        mov     dl, al
        shr     dl, 2
        mov     [esp+14h], dl           ; char 0 = byte0 >> 2
        and     al, 3
        mov     dl, cl
        shl     al, 4
        shr     dl, 4
        add     al, dl
        mov     [esp+15h], al           ; char 1 = (byte0 & 3) << 4 | byte1 >> 4

        mov     al, [esp+1Eh]           ; byte 2
        and     cl, 0Fh
        mov     dl, al
        shl     cl, 2
        shr     dl, 6
        add     cl, dl
        and     al, 3Fh
        mov     [esp+16h], cl           ; char 2 = (byte1 & 0xF) << 2 | byte2 >> 6
        mov     [esp+17h], al           ; char 3 = byte2 & 0x3F

        xor     esi, esi                ; inner loop counter = 0

loc_50DA79:
        xor     eax, eax
        mov     al, [esp+esi+14h]       ; get Base64 index
        push    eax
        call    FUN_0050D9D0            ; convert to Base64 char
        add     esp, 4
        mov     [ebp], al               ; write output char
        inc     ebp
        inc     esi
        cmp     esi, 3
        jle     loc_50DA79              ; loop 4 times

        cmp     edi, [esp+18h]          ; compare counter with length
        jl      loc_50DA1C              ; loop until all bytes processed

        mov     byte ptr [ebp], 0       ; null-terminate
        pop     ebp
        pop     ebx
        pop     edi
        pop     esi
        ret

loc_50DAA1:
        mov     ecx, [esp+14h]          ; output buffer
        pop     edi
        mov     byte ptr [ecx], 0       ; null-terminate
        pop     esi
        ret
    }
}
