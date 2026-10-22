/*
 * FUN_00623500 (77 B) — __thiscall (ECX = this), RET 4.
 *
 * Iterates over an array of {key, weight} pairs from this->0x2c4 to
 * this->0x2c8, accumulating weight * FUN_00622930(key, param) into a
 * running sum. Returns the sum (0 if the range is empty).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00622930(int key, int param);

__declspec(naked) int __stdcall FUN_00623500(int param)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x2c4]
        mov     eax, dword ptr [edi + 0x2c8]
        xor     ebx, ebx
        cmp     esi, eax
        jz      L_empty
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
L_loop:
        mov     eax, dword ptr [esi]
        push    ebp
        push    eax
        mov     ecx, edi
        call    FUN_00622930
        mov     ecx, dword ptr [esi + 0x4]
        imul    ecx, eax
        mov     eax, dword ptr [edi + 0x2c8]
        add     esi, 0x8
        add     ebx, ecx
        cmp     esi, eax
        jnz     L_loop
        pop     ebp
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
L_empty:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     4
    }
}
