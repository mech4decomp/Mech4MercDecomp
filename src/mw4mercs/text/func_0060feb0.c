/*
 * FUN_0060FEB0 (233 B) — __fastcall (ECX = param_1). Loop over a table of
 * 1000 entries at param_1+0x2B48, calling FUN_0041fd80 and copying buffers
 * with rep movsd/movsb.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_006f4230(void);
extern int  __cdecl FUN_00415040(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void __stdcall FUN_0060FEB0(void)
{
    __asm {
        sub     esp, 0xC
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, 0xFFFFD4B8
        sub     eax, esi
        push    edi
        mov     dword ptr [esp + 0x10], esi
        lea     ebx, [esi + 0x2B48]
        lea     ebp, [esi + 0xC08]
        mov     dword ptr [esp + 0x18], eax
L_FED4:
        xor     eax, eax
        mov     al, byte ptr [ebx]
        lea     ecx, [esi + eax*8 + 0x10]
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_FF04
        mov     ecx, dword ptr [ebp]
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [ebp], 0x0
        mov     dword ptr [ebp + 0xFA0], 0x0
        mov     byte ptr [ebx], 0x0
        jmp     L_FF7C
L_FF04:
        cmp     dword ptr [ebp], 0x0
        jnz     L_FF52
        xor     edi, edi
L_FF0C:
        mov     edx, dword ptr [esi + 0xC04]
        push    edx
        call    FUN_00415040
        add     esp, 0x4
        lea     ecx, [esi + eax*8 + 0x10]
        mov     dword ptr [esp + 0x14], eax
        call    FUN_0041fd80
        test    eax, eax
        jnz     L_FF34
        inc     edi
        cmp     edi, 0x5
        jl      L_FF0C
        jmp     L_FF7C
L_FF34:
        mov     eax, dword ptr [esp + 0x14]
        mov     byte ptr [ebx], al
        mov     eax, dword ptr [esi + eax*4 + 0x808]
        push    0x0
        push    eax
        mov     dword ptr [ebp + 0xFA0], eax
        call    FUN_006f3c80
        mov     dword ptr [ebp], eax
L_FF52:
        xor     eax, eax
        mov     al, byte ptr [ebx]
        lea     ecx, [esi + eax*8 + 0x10]
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebp + 0xFA0]
        mov     edi, dword ptr [ebp]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     esi, eax
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     esi, dword ptr [esp + 0x10]
L_FF7C:
        mov     eax, dword ptr [esp + 0x18]
        add     ebp, 0x4
        inc     ebx
        add     eax, ebx
        cmp     eax, 0x3E8
        jl      L_FED4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xC
        ret
    }
}
