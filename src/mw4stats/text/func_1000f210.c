/*
 * FUN_1000f210 (185 B) - __thiscall. MD5 update: appends input bytes to the
 * context buffer, processing full 64-byte blocks via FUN_1000f440 (transform).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1000f440(void);

__declspec(naked) void FUN_1000f210(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    ebp
        mov     edx, dword ptr [ebx + 0x10]
        push    esi
        mov     eax, edx
        lea     esi, [ecx*8]
        shr     eax, 0x3
        lea     edx, [edx + ecx*8]
        and     eax, 0x3f
        cmp     edx, esi
        push    edi
        mov     dword ptr [ebx + 0x10], edx
        jnc     L1
        inc     dword ptr [ebx + 0x14]
L1:
        mov     edi, dword ptr [ebx + 0x14]
        mov     edx, ecx
        mov     ebp, 0x40
        shr     edx, 0x1d
        sub     ebp, eax
        add     edi, edx
        cmp     ecx, ebp
        mov     dword ptr [ebx + 0x14], edi
        jc      L2
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, ebp
        lea     edi, [eax + ebx*1 + 0x18]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        lea     ecx, [ebx + 0x18]
        push    ecx
        push    ebx
        mov     ecx, ebx
        call    FUN_1000f440
        mov     edi, ebp
        lea     esi, [ebp + 0x3f]
        mov     ebp, dword ptr [esp + 0x18]
        cmp     esi, ebp
        jnc     L3
L4:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, ebx
        lea     eax, [edx + esi*1 + -0x3f]
        push    eax
        push    ebx
        call    FUN_1000f440
        add     esi, 0x40
        add     edi, 0x40
        cmp     esi, ebp
        jc      L4
L3:
        mov     ecx, dword ptr [esp + 0x18]
        xor     eax, eax
        jmp     L5
L2:
        xor     edi, edi
L5:
        mov     edx, dword ptr [esp + 0x14]
        sub     ecx, edi
        lea     esi, [edi + edx*1]
        lea     edi, [eax + ebx*1 + 0x18]
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
