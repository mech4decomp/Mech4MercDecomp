/*
 * FUN_00416280 (158 B) — database list-callee helper. __thiscall (this in ECX),
 * RET 0xC (3 params). Allocates/reallocates a dword array at [this+0xc] sized
 * to param_1, copies the old contents, frees the old buffer, and zero-fills.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415bb0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00416280(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        xor     edi, edi
        mov     esi, ecx
        push    edi
        call    FUN_00415bb0
        mov     ebx, dword ptr [esp + 0x14]
        mov     al, byte ptr [esp + 0x1c]
        mov     ebp, edi
        cmp     ebx, ebp
        mov     byte ptr [esi + 0x8], al
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x10], edi
        jz      L16308
        cmp     ebx, edi
        jbe     L162F6
        lea     ecx, [ebx*0x4 + 0x0]
        push    ecx
        call    FUN_004084d0
        mov     edx, ebp
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        jz      L162EF
        cmp     ebx, ebp
        mov     ecx, ebx
        jc      L162C9
        mov     ecx, ebp
L162C9:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L162E3
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
L162D6:
        mov     ebp, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], ebp
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L162D6
L162E3:
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L162EF:
        mov     dword ptr [esi + 0xc], edi
        xor     edi, edi
        jmp     L16305
L162F6:
        mov     ecx, dword ptr [esi + 0xc]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0xc], edi
L16305:
        mov     dword ptr [esi + 0x10], ebx
L16308:
        cmp     ebx, edi
        jbe     L16315
        mov     edi, dword ptr [esi + 0xc]
        mov     ecx, ebx
        xor     eax, eax
        rep stosd
L16315:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
