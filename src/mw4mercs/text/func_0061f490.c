/*
 * FUN_0061F490 (133 B) — __thiscall (ECX = this), RET 4 (1 param).
 *
 * Removes an element from a fixed array of 8-byte records at this+8
 * (count at this+4), shifting subsequent records down. Returns 0 on
 * success, 1 if param_1 is null, 2 if the record is already detached.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0061f490(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        test    ebx, ebx
        push    edi
        jnz     L_61f4a4
        pop     edi
        mov     eax, 0x1
        pop     ebx
        ret     0x4
L_61f4a4:
        mov     edi, dword ptr [ebx + 0x14]
        test    edi, edi
        jnz     L_61f4b5
        pop     edi
        mov     eax, 0x2
        pop     ebx
        ret     0x4
L_61f4b5:
        mov     eax, dword ptr [ecx + 0x4]
        xor     edx, edx
        test    eax, eax
        push    esi
        jle     L_61f4ce
        mov     esi, dword ptr [ecx + 0x8]
L_61f4c2:
        cmp     esi, edi
        jz      L_61f4ce
        inc     edx
        add     esi, 0x8
        cmp     edx, eax
        jl      L_61f4c2
L_61f4ce:
        lea     esi, [eax - 0x1]
        cmp     edx, esi
        mov     dword ptr [ebx + 0x14], 0x0
        mov     dword ptr [ecx + 0x4], esi
        jge     L_61f50d
        mov     edi, dword ptr [ecx + 0x8]
        lea     eax, [edi + edx*8]
        sub     esi, edx
        dec     esi
L_61f4e7:
        mov     ecx, dword ptr [edi + edx*8 + 0x8]
        mov     dword ptr [eax], ecx
        mov     cl, byte ptr [eax + 0xc]
        mov     byte ptr [eax + 0x4], cl
        mov     cl, byte ptr [eax + 0xd]
        mov     byte ptr [eax + 0x5], cl
        mov     cl, byte ptr [eax + 0xe]
        mov     byte ptr [eax + 0x6], cl
        mov     cl, byte ptr [eax + 0xf]
        mov     byte ptr [eax + 0x7], cl
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ecx + 0x14], eax
        __emit 0x75   /* __emit: backward jnz to L_61f4e7; MSVC6 miscomputes rel8 (75 DB) vs ref 75 DA */
        __emit 0xDA
L_61f50d:
        pop     esi
        pop     edi
        xor     eax, eax
        pop     ebx
        ret     0x4
    }
}
