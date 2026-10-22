/*
 * FUN_0061ECB0 (172 B) — Grow a vector (reallocate + copy).
 *
 * __thiscall (ECX = this), RET 4 (one stack param: new capacity).
 * If capacity < param_1, allocates a new buffer of param_1*4 bytes
 * (via FUN_004084d0), copies the existing elements, frees the old
 * buffer (via FUN_004084e0), and updates this->[0]/[4]/[8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl  FUN_004084d0(void);
extern void __cdecl  FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_0061ecb0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 8]
        push    edi
        mov     edi, dword ptr [ebx]
        sub     eax, edi
        sar     eax, 2
        cmp     eax, edx
        jnc     l_done
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx + 4]
        mov     ebp, esi
        sub     ebp, edi
        sar     ebp, 2
        test    edi, edi
        jz      l_alloc2
        test    edx, edx
        jz      l_zero1
        lea     ecx, [edx*4]
        push    ecx
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 4
        jmp     l_copy
    l_zero1:
        xor     eax, eax
    l_copy:
        sub     esi, edi
        sar     esi, 2
        test    esi, esi
        mov     ecx, eax
        jle     l_after_copy
    l_copyloop:
        sub     edi, eax
        mov     edx, dword ptr [edi + ecx]
        mov     dword ptr [ecx], edx
        add     ecx, 4
        dec     esi
        /* __emit: MSVC6 miscomputes this backward JNZ rel-offset (75 F3 vs ref 75 F5) */
        __emit 0x75
        __emit 0xF5
        mov     edx, dword ptr [esp + 0x14]
    l_after_copy:
        mov     esi, eax
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_store
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 4
        jmp     l_store
    l_alloc2:
        test    edx, edx
        jz      l_zero2
        lea     eax, [edx*4]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 4
        mov     esi, eax
        jmp     l_store
    l_zero2:
        xor     esi, esi
    l_store:
        lea     ecx, [esi + ebp*4]
        lea     edx, [esi + edx*4]
        mov     dword ptr [ebx], esi
        pop     esi
        mov     dword ptr [ebx + 4], ecx
        mov     dword ptr [ebx + 8], edx
        pop     ebp
    l_done:
        pop     edi
        pop     ebx
        ret     4
    }
}
