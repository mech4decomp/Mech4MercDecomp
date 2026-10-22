/*
 * FUN_1002dcb0 (56 B) — __stdcall, RET 0xc. Frees an array of pointers
 * then the array itself.
 */

extern void __cdecl FUN_1001c2a0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1002dcb0(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp+0xc]
        test    edi, edi
        jz      L_ret
        push    ebx
        mov     ebx, dword ptr [esp+0x14]
        push    esi
        xor     esi, esi
        test    ebx, ebx
        jbe     L_free
L_loop:
        mov     eax, dword ptr [edi+esi*4]
        test    eax, eax
        jz      L_next
        push    eax
        call    FUN_1001c2a0
L_next:
        inc     esi
        cmp     esi, ebx
        jc      L_loop
L_free:
        push    edi
        call    FUN_10001d60
        add     esp, 4
        pop     esi
        pop     ebx
L_ret:
        xor     eax, eax
        pop     edi
        ret     0xc
    }
}
