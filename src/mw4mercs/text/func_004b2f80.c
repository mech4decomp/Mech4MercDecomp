/*
 * FUN_004b2f80 (118 B) -- __thiscall (RET). MLR object destructor: sets the
 * vtable, decrements refcounts on each entry (releasing via virtual call when
 * it hits zero), frees two dynamic arrays (FUN_004084e0), and calls
 * FUN_004c68f0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004c68f0(void);

__declspec(naked) void FUN_004b2f80(void)
{
    __asm {
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     dword ptr [edi], 0x77066c
        mov     ebp, dword ptr [edi + 0x178]
        xor     esi, esi
        test    ebp, ebp
        jbe     L_2fc5
        push    ebx
        mov     ebx, dword ptr [edi + 0x174]
        xor     eax, eax
L_2fa0:
        mov     ecx, dword ptr [ebx + eax*0x4]
        dec     word ptr [ecx + 0x10]
        cmp     word ptr [ecx + 0x10], 0x0
        jnz     L_2fb8
        test    ecx, ecx
        jz      L_2fb8
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_2fb8:
        inc     esi
        mov     eax, esi
        and     eax, 0xffff
        cmp     eax, ebp
        jc      L_2fa0
        pop     ebx
L_2fc5:
        mov     eax, dword ptr [edi + 0x17c]
        test    eax, eax
        jz      L_2fd8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2fd8:
        mov     eax, dword ptr [edi + 0x174]
        test    eax, eax
        jz      L_2feb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_2feb:
        mov     ecx, edi
        call    FUN_004c68f0
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
