/*
 * FUN_006E31F0 (81 B) — Buffer fill with a byte value. If param_2 > 0,
 * allocates buffer of size param_2 and fills with param_1 byte.
 *
 * __thiscall (ECX = this), RET 8 (2 params). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int * FUN_006e27b0(void);
extern void FUN_006e2890(int);

__declspec(naked) void __stdcall FUN_006e31f0(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_006e27b0
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, 1
        mov     eax, dword ptr [eax]
        mov     dword ptr [esi], eax
        jl      l_done
        push    ebx
        push    edi
        mov     ecx, esi
        call    FUN_006e2890
        movsx   eax, byte ptr [esp + 0x10]
        mov     bl, al
        mov     bh, bl
        mov     ecx, edi
        mov     edi, dword ptr [esi]
        mov     edx, ecx
        shr     ecx, 2
        mov     eax, ebx
        shl     eax, 0x10
        mov     ax, bx
        pop     ebx
        rep stosd
        mov     ecx, edx
        and     ecx, 3
        rep stosb
        pop     edi
        mov     eax, esi
        pop     esi
        ret     8
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     8
    }
}
