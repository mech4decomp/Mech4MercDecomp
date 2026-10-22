/*
 * FUN_00696B50 (144 B) — __thiscall (this in ECX), RET 0xC (3 params).
 * Builds a string buffer object: allocates [ebx+1] bytes via
 * FUN_004084D0, copies [ebx] bytes from the source (rep movsd/movsb),
 * NUL-terminates, then calls FUN_00695A10/FUN_006965F0. Returns the
 * object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00695A10(void);
extern void __cdecl FUN_006965F0(void);

__declspec(naked) void FUN_00696B50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     ebx, dword ptr [eax + 4]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [eax]
        mov     ebp, ecx
        mov     cl, byte ptr [eax + 8]
        xor     edx, edx
        sub     ebx, edi
        mov     dword ptr [ebp], edx
        lea     esi, [ebx + 1]
        cmp     esi, -2
        mov     byte ptr [ebp + 8], cl
        mov     dword ptr [ebp + 4], edx
        mov     dword ptr [ebp + 8], edx
        ja      L696b96
        cmp     esi, edx
        je      L696b89
        push    esi
        call    FUN_004084D0
        add     esp, 4
        jmp     L696b8b
    L696b89:
        xor     eax, eax
    L696b8b:
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 4], eax
        add     eax, esi
        mov     dword ptr [ebp + 8], eax
    L696b96:
        test    ebx, ebx
        mov     eax, dword ptr [ebp]
        jle     L696bb7
        mov     esi, eax
        sub     esi, eax
        add     esi, edi
        mov     ecx, ebx
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        add     eax, ebx
    L696bb7:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax], 0
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    ebp
        call    FUN_00695A10
        mov     ecx, eax
        call    FUN_006965F0
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     0xc
        nop
        nop
        nop
    }
}
