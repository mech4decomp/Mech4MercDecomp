/*
 * FUN_004dcbf0 (255 B) — __thiscall container resize/assign.
 * Reallocates an array-of-pointers buffer (8-byte stride), freeing old
 * elements (refcount decrement via FUN_004084e0) and allocating a new
 * buffer via FUN_004084d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *p);
extern void *__cdecl FUN_004084d0(int size);

__declspec(naked) void FUN_004dcbf0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        cmp     edi, eax
        mov     dword ptr [esp + 0x10], ebx
        jz      L_done
        test    edi, edi
        jbe     L_clear
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      L_alloc
        mov     ecx, dword ptr [eax - 0x4]
        lea     ebp, [eax - 0x4]
        lea     eax, [eax + ecx*0x8]
        dec     ecx
        js      L_freebuf
        lea     esi, [eax + 0x4]
        lea     ebx, [ecx + 0x1]
L_free_loop:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_free_next
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_free_next
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_free_next:
        dec     ebx
        jnz     L_free_loop
        mov     ebx, dword ptr [esp + 0x10]
L_freebuf:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_alloc:
        lea     eax, [edi*0x8 + 0x4]
        push    eax
        mov     dword ptr [ebx + 0x4], edi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_alloc_fail
        lea     ecx, [edi - 0x1]
        test    ecx, ecx
        mov     dword ptr [eax], edi
        lea     edx, [eax + 0x4]
        jl      L_store
        lea     eax, [edx + 0x4]
        inc     ecx
L_zero_loop:
        mov     dword ptr [eax], 0x0
        add     eax, 0x8
        dec     ecx
        jnz     L_zero_loop
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx], edx
        pop     ebx
        pop     ecx
        ret     0x4
L_alloc_fail:
        xor     edx, edx
L_store:
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ebx], edx
        pop     ebx
        pop     ecx
        ret     0x4
L_clear:
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        jz      L_clear_done
        mov     eax, dword ptr [ecx - 0x4]
        lea     ebp, [ecx - 0x4]
        lea     ecx, [ecx + eax*0x8]
        dec     eax
        js      L_clear_freebuf
        lea     esi, [ecx + 0x4]
        lea     edi, [eax + 0x1]
L_clear_loop:
        mov     eax, dword ptr [esi - 0x8]
        sub     esi, 0x8
        test    eax, eax
        jz      L_clear_next
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_clear_next
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_clear_next:
        dec     edi
        jnz     L_clear_loop
L_clear_freebuf:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_clear_done:
        mov     dword ptr [ebx], 0x0
L_done:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
