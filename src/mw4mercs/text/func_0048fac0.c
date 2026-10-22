/*
 * FUN_0048fac0 (185 B) — MLR image-instance lookup (__thiscall, RET 0x8).
 * Searches the slot table for an instance matching two keys (id + sub-id),
 * returning the found instance or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048fac0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 0x8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_00412ab0
        mov     ecx, dword ptr [ebp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        add     esp, 0x4
        xor     eax, eax
        test    ecx, ecx
        jle     L_fb2b
L_faef:
        mov     ecx, dword ptr [ebp + 0x10]
        mov     ebx, dword ptr [ebp + 0x14]
        mov     edx, eax
        shl     edx, cl
        add     ebx, edx
        cmp     edx, ebx
        jge     L_fb23
        lea     edi, [ebp + edx*4 + 0x28]
L_fb03:
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      L_fb1b
        mov     ecx, dword ptr [esp + 0x10]
        cmp     dword ptr [esi + 0x14], ecx
        jnz     L_fb23
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     dword ptr [esi + 0x18], ecx
        jz      L_fb50
L_fb1b:
        inc     edx
        add     edi, 0x4
        cmp     edx, ebx
        jl      L_fb03
L_fb23:
        mov     ecx, dword ptr [ebp + 0x20]
        inc     eax
        cmp     eax, ecx
        jl      L_faef
L_fb2b:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jz      L_fb46
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_fb46
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_fb46:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x8
L_fb50:
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        mov     esi, dword ptr [ebp + edx*4 + 0x28]
        jz      L_fb6f
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_fb6f
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_fb6f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x8
    }
}
