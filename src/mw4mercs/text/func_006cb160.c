/*
 * FUN_006cb160 (224 B) — Object method with nested loops.
 *
 * ECX = this. Zeroes a 0x60-byte buffer at this+0x3b, calls FUN_006c9210
 * (__thiscall) repeatedly, and writes a computed byte to the output.
 *
 * __thiscall (ECX = this), RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_006c9210(void);

__declspec(naked) void __fastcall FUN_006cb160(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     ebx, [esi + 0x3b]
        xor     eax, eax
        mov     ecx, 0x18
        mov     edi, ebx
        push    0x1
        rep     stosd
        push    0x1
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], ebx
        call    FUN_006c9210
        mov     dword ptr [esp + 0x1c], eax
        xor     ecx, ecx
        mov     eax, ebx
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
loc_6cb19a:
        xor     ebp, ebp
loc_6cb19c:
        mov     ebx, dword ptr [esi + 0x28]
        dec     ebx
        js      loc_6cb1f8
loc_6cb1a2:
        mov     eax, dword ptr [esi + 0x2c]
        xor     edi, edi
        test    eax, eax
        jle     loc_6cb1e2
loc_6cb1ab:
        imul    eax, dword ptr [esp + 0x10]
        add     eax, edi
        push    eax
        mov     eax, dword ptr [esi + 0x28]
        imul    eax, ebp
        add     eax, ebx
        push    eax
        mov     ecx, esi
        call    FUN_006c9210
        cmp     eax, dword ptr [esp + 0x1c]
        jnz     loc_6cb1d3
        mov     eax, dword ptr [esi + 0x2c]
        inc     edi
        cmp     edi, eax
        jl      loc_6cb1ab
        jmp     loc_6cb1e2
loc_6cb1d3:
        mov     edx, dword ptr [esp + 0x14]
        mov     cl, bl
        add     cl, 2
        add     edx, ebp
        mov     byte ptr [edx + esi + 0x3b], cl
loc_6cb1e2:
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [ecx + ebp]
        mov     dl, byte ptr [eax + esi + 0x3b]
        test    dl, dl
        jnz     loc_6cb1f4
        dec     ebx
        jns     loc_6cb1a2
loc_6cb1f4:
        mov     eax, dword ptr [esp + 0x18]
loc_6cb1f8:
        cmp     byte ptr [eax + ebp], 0
        jnz     loc_6cb204
        mov     dl, byte ptr [esi + 0x28]
        mov     byte ptr [eax + ebp], dl
loc_6cb204:
        inc     ebp
        cmp     ebp, 0x20
        jl      loc_6cb19c
        mov     ebp, dword ptr [esp + 0x10]
        add     ecx, 0x20
        inc     ebp
        add     eax, 0x20
        cmp     ecx, 0x60
        mov     dword ptr [esp + 0x10], ebp
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], eax
        jl      loc_6cb19a
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esp + 0x20]
        cdq
        pop     edi
        pop     esi
        sub     eax, edx
        sar     eax, 1
        pop     ebp
        mov     byte ptr [ecx], al
        pop     ebx
        add     esp, 0x14
        ret
    }
}
