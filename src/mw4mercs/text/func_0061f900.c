/*
 * FUN_0061f900 (139 B) — __fastcall (ECX = param_1), RET (no stack args).
 *
 * Removes an element (param_1[2]) from a global array (DAT_008058b8),
 * frees it via FUN_006f4230, then zeroes the 12-byte object at param_1[2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058b8;
extern void __cdecl FUN_006f4230(void *p);

__declspec(naked) void __fastcall FUN_0061f900(void *this_)
{
    __asm {
        sub     esp, 0x8
        push    ebp
        mov     ebp, dword ptr [ecx + 0x8]
        xor     eax, eax
        cmp     ebp, eax
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0x4], ebp
        jz      L_f981
        push    ebx
        mov     ebx, dword ptr [g_8058b8]
        mov     eax, dword ptr [ebx + 0x14]
        push    esi
        mov     esi, dword ptr [ebx + 0x10]
        cmp     esi, eax
        jz      L_f966
        push    edi
        lea     edi, [esi + 0x4]
L_f92b:
        cmp     dword ptr [esi], ebp
        jnz     L_f95a
        mov     edx, dword ptr [ebx + 0x14]
        cmp     edi, edx
        jz      L_f952
        mov     eax, edx
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     ecx, esi
        jle     L_f952
L_f943:
        mov     ebp, dword ptr [ecx + 0x4]
        mov     dword ptr [ecx], ebp
        add     ecx, 0x4
        dec     eax
        jnz     L_f943
        mov     ebp, dword ptr [esp + 0x10]
L_f952:
        add     edx, -0x4
        mov     dword ptr [ebx + 0x14], edx
        jmp     L_f960
L_f95a:
        add     esi, 0x4
        add     edi, 0x4
L_f960:
        cmp     esi, dword ptr [ebx + 0x14]
        jnz     L_f92b
        pop     edi
L_f966:
        push    ebp
        call    FUN_006f4230
        mov     ecx, dword ptr [esp + 0x10]
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x4], eax
        pop     ebp
        add     esp, 0x8
        ret
L_f981:
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x4], eax
        pop     ebp
        add     esp, 0x8
        ret
    }
}
