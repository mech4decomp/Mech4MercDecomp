/*
 * FUN_10002330 (224 B) — fast string copy (strcpy-style, word-at-a-time
 * with the 0x7efefeff null-byte detection trick). Copies param_1 into
 * the buffer at param_3 (via EDI) and returns param_2. No prologue;
 * uses ESP-relative args. FUN_10002320 tail-jumps into 0x10002391.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10002330(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        push    edi
        test    ecx, 3
        jz      L_234c
L_233d:
        mov     al, byte ptr [ecx]
        inc     ecx
        test    al, al
        jz      L_237f
        test    ecx, 3
        jnz     L_233d
L_234c:
        mov     eax, dword ptr [ecx]
        mov     edx, 0x7efefeff
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        add     ecx, 4
        test    eax, 0x81010100
        jz      L_234c
        mov     eax, dword ptr [ecx - 4]
        test    al, al
        jz      L_238e
        test    ah, ah
        jz      L_2389
        test    eax, 0xff0000
        jz      L_2384
        test    eax, 0xff000000
        jz      L_237f
        jmp     L_234c
L_237f:
        lea     edi, [ecx - 1]
        jmp     L_2391
L_2384:
        lea     edi, [ecx - 2]
        jmp     L_2391
L_2389:
        lea     edi, [ecx - 3]
        jmp     L_2391
L_238e:
        lea     edi, [ecx - 4]
L_2391:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, 3
        jz      L_23b6
L_239d:
        mov     dl, byte ptr [ecx]
        inc     ecx
        test    dl, dl
        jz      L_2408
        mov     byte ptr [edi], dl
        inc     edi
        test    ecx, 3
        jnz     L_239d
        jmp     L_23b6
L_23b1:
        mov     dword ptr [edi], edx
        add     edi, 4
L_23b6:
        mov     edx, 0x7efefeff
        mov     eax, dword ptr [ecx]
        add     edx, eax
        xor     eax, 0xffffffff
        xor     eax, edx
        mov     edx, dword ptr [ecx]
        add     ecx, 4
        test    eax, 0x81010100
        jz      L_23b1
        test    dl, dl
        jz      L_2408
        test    dh, dh
        jz      L_23ff
        test    edx, 0xff0000
        jz      L_23f2
        test    edx, 0xff000000
        jz      L_23ea
        jmp     L_23b1
L_23ea:
        mov     dword ptr [edi], edx
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
L_23f2:
        mov     word ptr [edi], dx
        mov     eax, dword ptr [esp + 8]
        mov     byte ptr [edi + 2], 0
        pop     edi
        ret
L_23ff:
        mov     word ptr [edi], dx
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
L_2408:
        mov     byte ptr [edi], dl
        mov     eax, dword ptr [esp + 8]
        pop     edi
        ret
    }
}
