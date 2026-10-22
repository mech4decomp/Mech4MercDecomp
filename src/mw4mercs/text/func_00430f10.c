/*
 * FUN_00430f10 (394 B) — MLR look-up-light table build. __thiscall.
 * Allocates a 0x2000-byte-per-cell lookup table, fills it from a
 * packed bit source, then frees the temp buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041de80(void);
extern void FUN_0041e110(void);
extern void FUN_0041dec0(void);
extern void FUN_004084d0(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_00430f10(void)
{
    __asm {
        sub     esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xa4]
        push    0x0
        push    eax
        lea     ecx, [esp+0x28]
        call    FUN_0041de80
        mov     edi, dword ptr [esi+0x9c]
        mov     eax, dword ptr [esi+0xa0]
        mov     ebx, edi
        imul    ebx, eax
        mov     ebp, ebx
        shl     ebp, 0x10
        push    ebp
        call    FUN_004084d0
        add     esp, 0x4
        push    ebp
        push    eax
        lea     ecx, [esp+0x28]
        mov     dword ptr [esp+0x20], eax
        call    FUN_0041e110
        lea     ecx, [ebx*4+0]
        push    ecx
        call    FUN_004084d0
        mov     dword ptr [esi+0xac], eax
        mov     eax, dword ptr [esi+0xa0]
        add     esp, 0x4
        xor     ebp, ebp
        test    eax, eax
        jle     alloc_done
outer1_start:
        xor     ebx, ebx
        test    edi, edi
        jle     outer1_next
inner1:
        push    0x2000
        call    FUN_004084d0
        imul    edi, ebp
        mov     edx, dword ptr [esi+0xac]
        add     edi, ebx
        add     esp, 0x4
        mov     dword ptr [edx+edi*4], eax
        mov     edi, dword ptr [esi+0x9c]
        inc     ebx
        cmp     ebx, edi
        jl      inner1
outer1_next:
        mov     eax, dword ptr [esi+0xa0]
        inc     ebp
        cmp     ebp, eax
        jl      outer1_start
alloc_done:
        mov     ecx, dword ptr [esi+0xa0]
        test    ecx, ecx
        mov     eax, dword ptr [esp+0x18]
        mov     dword ptr [esp+0x10], 0
        jle     cleanup
outer2_start:
        xor     ebp, ebp
outer2:
        mov     ecx, dword ptr [esi+0x9c]
        xor     edi, edi
        test    ecx, ecx
        jle     outer2_next
middle2:
        xor     edx, edx
inner2:
        mov     ecx, dword ptr [esi+0x9c]
        imul    ecx, dword ptr [esp+0x10]
        mov     ebx, dword ptr [esi+0xac]
        add     ecx, edi
        mov     ecx, dword ptr [ebx+ecx*4]
        add     ecx, ebp
        mov     byte ptr [ecx+edx], 0
        mov     ecx, 0x80
        mov     dword ptr [esp+0x14], 8
bitloop:
        mov     bl, byte ptr [eax]
        inc     eax
        cmp     bl, 0x80
        mov     dword ptr [esp+0x1c], eax
        jbe     bit_done
        mov     eax, dword ptr [esi+0x9c]
        imul    eax, dword ptr [esp+0x10]
        mov     ebx, dword ptr [esi+0xac]
        add     eax, edi
        mov     eax, dword ptr [ebx+eax*4]
        add     eax, ebp
        mov     bl, byte ptr [eax+edx]
        add     eax, edx
        or      bl, cl
        mov     byte ptr [eax], bl
        mov     eax, dword ptr [esp+0x1c]
bit_done:
        mov     ebx, dword ptr [esp+0x14]
        sar     ecx, 1
        dec     ebx
        mov     dword ptr [esp+0x14], ebx
        jnz     bitloop
        inc     edx
        cmp     edx, 0x20
        jl      inner2
        mov     ecx, dword ptr [esi+0x9c]
        inc     edi
        cmp     edi, ecx
        jl      middle2
outer2_next:
        add     ebp, 0x20
        cmp     ebp, 0x2000
        jl      outer2
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esi+0xa0]
        inc     ecx
        cmp     ecx, edx
        mov     dword ptr [esp+0x10], ecx
        jl      outer2_start
cleanup:
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [esp+0x20]
        call    FUN_0041dec0
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x40
        ret
    }
}
