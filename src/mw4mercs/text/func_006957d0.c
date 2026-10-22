/*
 * FUN_006957d0 (174 B) — Frees a variable-length array structure.
 * Clears global 0x0082db20, frees two sub-pointers, then based on
 * flag bits in *param_1 frees the array (via FUN_00694ce0 per
 * element) and the header block (FUN_004084e0).
 *
 * __fastcall (ECX = param_1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_82db20;

extern void __cdecl FUN_004084e0(int p);
extern void __cdecl FUN_00694ce0(void);

__declspec(naked) void __fastcall FUN_006957d0(unsigned int *param_1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        push    edi
        mov     dword ptr [g_82db20], 0
        jz      l_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip1:
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        mov     dword ptr [esp + 8], eax
        jz      l_skip2
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip2:
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 1
        cmp     al, 1
        jnz     l_done
        mov     edx, ecx
        and     edx, 2
        cmp     dl, 2
        jnz     l_else
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      l_done
        mov     eax, dword ptr [ecx - 4]
        push    ebp
        lea     ebp, [ecx - 4]
        lea     edx, [eax*8]
        sub     edx, eax
        dec     eax
        lea     edi, [ecx + edx*8]
        js      l_afterloop
        push    ebx
        lea     ebx, [eax + 1]
    l_loop:
        sub     edi, 0x38
        mov     ecx, edi
        call    FUN_00694ce0
        dec     ebx
        jnz     l_loop
        pop     ebx
    l_afterloop:
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        pop     ebp
        pop     edi
        mov     dword ptr [esi], 0
        pop     esi
        pop     ecx
        ret
    l_else:
        mov     edi, ecx
        and     edi, 0xfffffffc
        mov     dword ptr [esi], edi
        jz      l_done
        mov     ecx, edi
        call    FUN_00694ce0
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        pop     edi
        mov     dword ptr [esi], 0
        pop     esi
        pop     ecx
        ret
    }
}
