/*
 * FUN_0069A1D0 (144 B) — __thiscall (this in ECX), RET 0x8 (2 params).
 * Same buffer-build shape as FUN_00696B50, but instead of calling
 * FUN_00695A10 it copies a 12-byte struct from [esp+0x18] into
 * [ebp+0xc]. Returns the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084D0(void);

__declspec(naked) void FUN_0069A1D0(void)
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
        ja      L69a216
        cmp     esi, edx
        je      L69a209
        push    esi
        call    FUN_004084D0
        add     esp, 4
        jmp     L69a20b
    L69a209:
        xor     eax, eax
    L69a20b:
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 4], eax
        add     eax, esi
        mov     dword ptr [ebp + 8], eax
    L69a216:
        test    ebx, ebx
        mov     eax, dword ptr [ebp]
        jle     L69a237
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
    L69a237:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp + 4], eax
        mov     byte ptr [eax], 0
        lea     eax, [ebp + 0xc]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        pop     edi
        mov     dword ptr [eax + 4], edx
        pop     esi
        mov     dword ptr [eax + 8], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     8
        nop
        nop
        nop
    }
}
