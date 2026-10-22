/*
 * FUN_006f6900 (67 B) — __fastcall (ECX = this). Destructor-style loop.
 *
 * Sets vtable pointer at this+0, calls FUN_006f6d20, then walks a linked
 * list from this+0x8, freeing nodes via the function pointer at 0x0076b2d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f6d20(void);
extern void *g_0076b2d0;

__declspec(naked) void __fastcall FUN_006f6900(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esi], 0x79fcc8
        call    FUN_006f6d20
        mov     ebx, dword ptr [g_0076b2d0]
        xor     edi, edi
L1:
        mov     ecx, dword ptr [esi + 0x8]
        cmp     ecx, edi
        jz      L2
        mov     eax, dword ptr [ecx + 0x14]
        cmp     eax, edi
        mov     dword ptr [esi + 0x8], eax
        jnz     L3
        push    ecx
        mov     dword ptr [esi + 0xc], edi
        call    ebx
        add     esp, 0x4
        jmp     L1
L3:
        push    ecx
        mov     dword ptr [eax + 0x18], edi
        call    ebx
        add     esp, 0x4
        jmp     L1
L2:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
