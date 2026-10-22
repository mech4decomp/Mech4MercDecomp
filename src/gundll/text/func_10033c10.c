/*
 * FUN_10033c10 (131 B) — __thiscall, RET 0xC.
 * Appends param_3 bytes from param_2 into the buffer at this+0x10,
 * with size checks via FUN_10033ad0/FUN_10033ce0. Returns 0x80004005
 * on bad size, else 0. Writes old buffer ptr through param_1.
 *
 * CFLAGS: /O1
 */

extern void FUN_10033ad0(void);   /* __thiscall (ECX=this) */
extern void __stdcall FUN_100339c0(void);
extern void FUN_10033ce0(void);   /* __thiscall (ECX=this) */

__declspec(naked) void FUN_10033c10(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        xor     ebp, ebp
        cmp     si, bp
        mov     ebx, ecx
        mov     dword ptr [esp + 0xc], ebp
        jnz     loc_3c2f
        mov     dword ptr [esp + 0xc], 0x80004005
        jmp     loc_3c7e
    loc_3c2f:
        mov     ecx, ebx
        call    FUN_10033ad0
        test    eax, eax
        jnz     loc_3c45
        push    ebp
        push    esi
        call    FUN_100339c0
        cmp     eax, ebp
        jl      loc_3c8c
    loc_3c45:
        mov     ecx, ebx
        call    FUN_10033ce0
        cmp     si, ax
        jbe     loc_3c5b
        mov     dword ptr [esp + 0xc], 0x80004005
        jmp     loc_3c7e
    loc_3c5b:
        mov     ebp, dword ptr [ebx + 0x10]
        xor     eax, eax
        mov     ax, si
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, ebp
        mov     ecx, eax
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        add     dword ptr [ebx + 0x10], eax
        pop     edi
    loc_3c7e:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      loc_3c88
        mov     dword ptr [eax], ebp
    loc_3c88:
        mov     eax, dword ptr [esp + 0xc]
    loc_3c8c:
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
