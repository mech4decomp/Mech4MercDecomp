/*
 * FUN_1001e430 (88 B) - __fastcall (ECX = this). Frees two buffers
 * (at +0xa8 and +0x10) via the free() pointer at 0x100210ec and zeroes
 * the associated size/count fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210ec;   /* free() */

__declspec(naked) void __cdecl FUN_1001e430(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_100210ec]
        push    esi
        mov     esi, ecx
        push    edi
        xor     edi, edi
        cmp     dword ptr [esi + 0xb4], edi
        jbe     L_e455
        mov     eax, dword ptr [esi + 0xa8]
        cmp     eax, edi
        jz      L_e455
        push    eax
        call    ebx
        add     esp, 0x4
L_e455:
        mov     dword ptr [esi + 0xa8], edi
        mov     dword ptr [esi + 0xb8], edi
        mov     dword ptr [esi + 0xb4], edi
        mov     eax, dword ptr [esi + 0x1c]
        cmp     eax, edi
        jbe     L_e47b
        mov     eax, dword ptr [esi + 0x10]
        cmp     eax, edi
        jz      L_e47b
        push    eax
        call    ebx
        add     esp, 0x4
L_e47b:
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0x20], edi
        mov     dword ptr [esi + 0x1c], edi
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
