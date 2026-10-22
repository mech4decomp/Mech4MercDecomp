/*
 * FUN_0061ebc0 (225 B) — __thiscall (ECX = this), RET 0xc, 3 stack params.
 * Vector-style insert: grows the buffer, copies elements before/after the
 * insertion point, fills the inserted range, frees the old buffer, and
 * updates begin/end/capacity.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int n);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_0061ebc0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esi]
        mov     eax, ebx
        sub     eax, edi
        sar     eax, 0x2
        cmp     eax, ecx
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x24]
        jc      L_ebed
        lea     ecx, [esp + 0x10]
    L_ebed:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_ec0b
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_ec0d
    L_ec0b:
        xor     ebp, ebp
    L_ec0d:
        mov     eax, dword ptr [esp + 0x1c]
        sub     eax, edi
        sar     eax, 0x2
        test    eax, eax
        mov     edx, ebp
        jle     L_ec2b
        mov     ecx, edi
        sub     ecx, ebp
    L_ec20:
        mov     edi, dword ptr [ecx + edx]
        mov     dword ptr [edx], edi
        add     edx, 0x4
        dec     eax
        jnz     L_ec20
    L_ec2b:
        mov     ecx, dword ptr [esp + 0x24]
        cmp     ecx, 0x1
        jnz     L_ec45
        test    edx, edx
        jz      L_ec40
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [edx], eax
    L_ec40:
        add     edx, 0x4
        jmp     L_ec5a
    L_ec45:
        test    ecx, ecx
        jbe     L_ec5a
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax]
        mov     edi, edx
        rep stosd
        mov     ecx, dword ptr [esp + 0x24]
        lea     edx, [edx + ecx*4]
    L_ec5a:
        sub     ebx, dword ptr [esp + 0x1c]
        sar     ebx, 0x2
        mov     eax, ebx
        test    eax, eax
        mov     edi, edx
        jle     L_ec78
        mov     esi, dword ptr [esp + 0x1c]
        mov     ecx, eax
        rep movsd
        mov     esi, dword ptr [esp + 0x14]
        lea     edi, [edx + eax*4]
    L_ec78:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_ec87
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_ec87:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x4], edi
        lea     eax, [ebp + edx*4]
        pop     edi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
