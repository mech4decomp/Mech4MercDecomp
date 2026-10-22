/*
 * FUN_00630e90 (68 B) — __fastcall (ECX = this). Iterates this->count
 * (offset 0x24) times, calling FUN_0041fd80 on this+0x10; if non-null,
 * calls it again and zeroes a byte at [ret+0x15c + i]. Sets this->0x28 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __fastcall FUN_0041fd80(void *this);

__declspec(naked) void __fastcall FUN_00630e90(void *this)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x24]
        xor     esi, esi
        test    eax, eax
        jle     L_done
        push    ebp
        lea     ebp, [edi + 0x10]
L_loop:
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L_skip
        mov     ecx, ebp
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0x15c]
        mov     byte ptr [eax + esi*0x1], 0x0
L_skip:
        mov     eax, dword ptr [edi + 0x24]
        inc     esi
        cmp     esi, eax
        jl      L_loop
        pop     ebp
        mov     byte ptr [edi + 0x28], 0x0
        pop     edi
        pop     esi
        ret
L_done:
        mov     byte ptr [edi + 0x28], 0x0
        pop     edi
        pop     esi
        ret
    }
}
