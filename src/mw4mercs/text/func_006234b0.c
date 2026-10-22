/*
 * FUN_006234b0 (77 B) - __thiscall (ECX = this), RET 0x4 (one stack param).
 *
 * ABL interpreter region. Iterates an array of {key, weight} pairs (offsets
 * 0x2c4/0x2c8), summing weight * FUN_00622910(key, param_1). Returns the sum.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00622910(void);

__declspec(naked) void FUN_006234b0(void)
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
        jz      L_6234f5
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
L_6234cc:
        mov     eax, dword ptr [esi]
        push    ebp
        push    eax
        mov     ecx, edi
        call    FUN_00622910
        mov     ecx, dword ptr [esi + 0x4]
        imul    ecx, eax
        mov     eax, dword ptr [edi + 0x2c8]
        add     esi, 0x8
        add     ebx, ecx
        cmp     esi, eax
        jnz     L_6234cc
        pop     ebp
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
L_6234f5:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
    }
}
