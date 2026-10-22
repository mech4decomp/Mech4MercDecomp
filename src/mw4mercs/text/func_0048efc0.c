/*
 * FUN_0048efc0 (246 B) — MLR light-array resize/copy (__thiscall, RET 0x4).
 * Allocates a new light array, initializes each element, copies existing
 * elements, frees the old array, and updates the object's array pointer/count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00491d80(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0048efc0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x4]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x8], ebx
        jz      L_f0b0
        test    ebp, ebp
        jbe     L_f09c
        push    esi
        lea     eax, [ebp + ebp*0x4]
        shl     eax, 0x3
        push    edi
        push    eax
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_f017
        lea     eax, [ebp - 0x1]
        test    eax, eax
        mov     esi, edi
        jl      L_f019
        lea     ebx, [eax + 0x1]
L_f004:
        mov     ecx, esi
        call    FUN_00491d80
        add     esi, 0x28
        dec     ebx
        jnz     L_f004
        mov     ebx, dword ptr [esp + 0x10]
        jmp     L_f019
L_f017:
        xor     edi, edi
L_f019:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_f08f
        mov     edx, dword ptr [ebx + 0x4]
        cmp     ebp, edx
        jnc     L_f028
        mov     edx, ebp
L_f028:
        mov     ecx, edx
        dec     edx
        test    ecx, ecx
        jz      L_f086
        lea     ecx, [edx + edx*0x4]
        shl     ecx, 0x3
        lea     eax, [ecx + esi]
        lea     ecx, [ecx + edi + 0x8]
        inc     edx
L_f03d:
        mov     ebx, dword ptr [eax]
        mov     dword ptr [ecx - 0x8], ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [ecx - 0x4], ebx
        mov     ebx, dword ptr [eax + 0x8]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [eax + 0xc]
        mov     dword ptr [ecx + 0x4], ebx
        mov     ebx, dword ptr [eax + 0x10]
        mov     dword ptr [ecx + 0x8], ebx
        mov     ebx, dword ptr [eax + 0x14]
        mov     dword ptr [ecx + 0xc], ebx
        mov     ebx, dword ptr [eax + 0x18]
        mov     dword ptr [ecx + 0x10], ebx
        mov     ebx, dword ptr [eax + 0x1c]
        mov     dword ptr [ecx + 0x14], ebx
        mov     ebx, dword ptr [eax + 0x20]
        mov     dword ptr [ecx + 0x18], ebx
        mov     ebx, dword ptr [eax + 0x24]
        mov     dword ptr [ecx + 0x1c], ebx
        dec     edx
        sub     eax, 0x28
        sub     ecx, 0x28
        test    edx, edx
        ja      L_f03d
        mov     ebx, dword ptr [esp + 0x10]
L_f086:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_f08f:
        mov     dword ptr [ebx], edi
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x4], ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
L_f09c:
        mov     edx, dword ptr [ebx]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
        mov     dword ptr [ebx + 0x4], ebp
L_f0b0:
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
