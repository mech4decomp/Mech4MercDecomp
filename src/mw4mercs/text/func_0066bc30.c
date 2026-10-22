/*
 * FUN_0066bc30 (85 B) — __fastcall loop over a table of objects.
 *
 * ECX = this. Iterates i in [0, this->count(0x20)); for each entry
 * resolves an object pointer via this->table(0x10)->ptr(0x30)[i +
 * this->base(0x24)], and either initializes fields 0x28/0x2c (when
 * entry->0xc == -1) or calls FUN_0066bc90(&local, i).
 *
 * __fastcall (ECX = this), plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0066bc90(void *out, int index);

__declspec(naked) void __fastcall FUN_0066bc30(int param_1)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x20]
        push    edi
        xor     edi, edi
        test    eax, eax
        jle     L_end
L_loop:
        mov     edx, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, edi
        add     eax, edx
        mov     edx, dword ptr [ecx + 0x30]
        mov     eax, dword ptr [edx + eax*4]
        cmp     dword ptr [eax + 0xc], -1
        jz      L_set
        push    edi
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0
        call    FUN_0066bc90
        jmp     L_cont
L_set:
        mov     dword ptr [eax + 0x28], 0
        mov     dword ptr [eax + 0x2c], 0x3f800000
L_cont:
        mov     eax, dword ptr [esi + 0x20]
        inc     edi
        cmp     edi, eax
        jl      L_loop
L_end:
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
