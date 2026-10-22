/*
 * FUN_006d47f0 (285 B) — Destructor/cleanup: frees the arrays and objects
 * owned by the object in ECX (this). Frees [this+0x11c] entries, the
 * [this+0x124]/[this+0x128] arrays, and the [this+0x11c] buffer.
 *
 * __fastcall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void FUN_006d4370(void);    /* __thiscall, ECX = this */
extern void FUN_006dffd0(void);    /* __thiscall, ECX = this */

__declspec(naked) void __fastcall FUN_006d47f0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     ebp, dword ptr [edi + 0x118]
        xor     ebx, ebx
        cmp     ebp, ebx
        jle     L_after_first
        mov     esi, dword ptr [edi + 0x11c]
L_first_loop:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov     dword ptr [esi], ebx
        add     esp, 0x4
        add     esi, 0x4
        dec     ebp
        jnz     L_first_loop
L_after_first:
        cmp     dword ptr [edi + 0x120], ebx
        jz      L_after_second
        mov     ecx, dword ptr [edi + 0x11c]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x11c], ebx
        mov     dword ptr [edi + 0x120], ebx
L_after_second:
        mov     eax, dword ptr [edi + 0xc]
        imul    eax, dword ptr [edi + 0x8]
        cmp     eax, ebx
        jle     L_after_third
        mov     ebp, dword ptr [edi + 0x128]
        mov     esi, dword ptr [edi + 0x124]
        mov     dword ptr [esp + 0x10], eax
L_third_loop:
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_third_skip
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
        mov     dword ptr [esi + 0x4], 0x0
L_third_skip:
        mov     ebx, dword ptr [ebp]
        test    ebx, ebx
        jz      L_third_skip2
        mov     ecx, ebx
        call    FUN_006d4370
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebp], 0x0
L_third_skip2:
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x8
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     L_third_loop
L_after_third:
        mov     ecx, dword ptr [edi + 0x124]
        test    ecx, ecx
        jz      L_after_fourth
        mov     eax, dword ptr [ecx - 0x4]
        lea     ebx, [ecx - 0x4]
        lea     esi, [ecx + eax*8]
        dec     eax
        js      L_fourth_free
        lea     ebp, [eax + 0x1]
L_fourth_loop:
        sub     esi, 0x8
        mov     ecx, esi
        call    FUN_006dffd0
        dec     ebp
        jnz     L_fourth_loop
L_fourth_free:
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_after_fourth:
        mov     eax, dword ptr [edi + 0x128]
        test    eax, eax
        mov     dword ptr [edi + 0x124], 0x0
        jz      L_after_fifth
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_after_fifth:
        mov     edi, dword ptr [edi + 0x11c]
        test    edi, edi
        jz      L_after_sixth
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_after_sixth:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
