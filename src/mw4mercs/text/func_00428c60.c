/*
 * FUN_00428c60 (144 B) — __thiscall: adds an element to the MLRFootStep
 * array. Computes slot = [this+0x14]*0x10 + [this+8]; decrements the
 * refcount of the old object at [slot] and virtual-destroys it if it
 * hits zero; stores the new object pointer and copies a 3-dword vector
 * from arg2 into slot+4. Advances the [this+0x14] and [this+0x10]
 * ring-buffer indices (wrapping at [this+0xc]). Returns the slot
 * address. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00428c60(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi+8]
        push    edi
        mov     edi, dword ptr [esi+0x14]
        mov     eax, edi
        shl     eax, 4
        lea     ebx, [eax+ecx]
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        jz      L_after_ref
        dec     word ptr [ecx+0x10]
        cmp     word ptr [ecx+0x10], 0
        jnz     L_after_ref
        test    ecx, ecx
        jz      L_after_ref
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_after_ref:
        mov     ecx, dword ptr [esp+0x10]
        mov     dword ptr [ebx], ecx
        mov     edx, dword ptr [esi+0x14]
        mov     ebx, dword ptr [esi+8]
        mov     ecx, edx
        mov     eax, edi
        mov     edi, dword ptr [esp+0x14]
        shl     ecx, 4
        push    ebp
        mov     ebp, dword ptr [edi]
        lea     ecx, [ecx+ebx+4]
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [edi+4]
        mov     edi, dword ptr [edi+8]
        mov     dword ptr [ecx+4], ebp
        mov     dword ptr [ecx+8], edi
        lea     ecx, [edx+1]
        mov     dword ptr [esi+0x14], ecx
        cmp     ecx, dword ptr [esi+0xc]
        pop     ebp
        jnz     L_skip1
        mov     dword ptr [esi+0x14], 0
L_skip1:
        mov     ecx, dword ptr [esi+0x10]
        cmp     dword ptr [esi+0x14], ecx
        jnz     L_skip2
        inc     ecx
        mov     dword ptr [esi+0x10], ecx
        cmp     ecx, dword ptr [esi+0xc]
        jnz     L_skip2
        mov     dword ptr [esi+0x10], 0
L_skip2:
        pop     edi
        shl     eax, 4
        pop     esi
        add     eax, ebx
        pop     ebx
        ret     8
    }
}
