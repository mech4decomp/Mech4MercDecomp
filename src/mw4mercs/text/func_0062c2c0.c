/*
 * FUN_0062c2c0 (283 B) — Array/heap sift routine (0x1c-byte elements,
 * 7 dwords each). Uses FUN_0062b5c0 as a comparison predicate.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_0062b5c0(void *p);

__declspec(naked) void FUN_0062c2c0(int a, int b, int c)
{
    __asm {
        mov     eax, dword ptr [esp + 0xC]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        lea     ebx, [ebp + ebp + 2]
        cmp     ebx, eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x18], ebp
        jge     L325
L2D8:
        mov     edi, dword ptr [esp + 0x14]
        lea     eax, [ebx * 8]
        sub     eax, ebx
        lea     ecx, [edi + eax * 4]
        lea     edx, [ecx - 0x1C]
        push    edx
        call    FUN_0062b5c0
        test    al, al
        jz      L2F6
        dec     ebx
L2F6:
        lea     eax, [ebx * 8]
        sub     eax, ebx
        lea     ecx, [ebp * 8]
        sub     ecx, ebp
        lea     esi, [edi + eax * 4]
        mov     eax, dword ptr [esp + 0x1C]
        lea     edi, [edi + ecx * 4]
        mov     ebp, ebx
        lea     ebx, [ebx + ebx + 2]
        cmp     ebx, eax
        mov     ecx, 0x7
        rep movsd
        jl      L2D8
        cmp     ebx, eax
L325:
        jnz     L34E
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [ebx * 8]
        lea     ecx, [ebp * 8]
        sub     edx, ebx
        sub     ecx, ebp
        lea     edi, [eax + ecx * 4]
        lea     esi, [eax + edx * 4 - 0x1C]
        mov     ecx, 0x7
        rep movsd
        lea     ebp, [ebx - 1]
L34E:
        lea     eax, [ebp - 1]
        cdq
        sub     eax, edx
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, 0x7
        lea     esi, [esp + 0x20]
        lea     edi, [esp + 0x20]
        sar     ebx, 1
        cmp     ebp, eax
        rep movsd
        mov     edi, ebp
        jle     L3BA
L371:
        mov     ebp, dword ptr [esp + 0x14]
        lea     edx, [ebx * 8]
        sub     edx, ebx
        lea     esi, [ebp + edx * 4]
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    FUN_0062b5c0
        test    al, al
        jz      L3BE
        lea     ecx, [edi * 8]
        sub     ecx, edi
        lea     eax, [ebx - 1]
        cdq
        lea     edi, [ebp + ecx * 4]
        sub     eax, edx
        mov     ecx, 0x7
        sar     eax, 1
        rep movsd
        mov     edi, ebx
        mov     ebx, eax
        cmp     edi, dword ptr [esp + 0x18]
        jg      L371
        jmp     L3BE
L3BA:
        mov     ebp, dword ptr [esp + 0x14]
L3BE:
        lea     edx, [edi * 8]
        sub     edx, edi
        lea     edi, [ebp + edx * 4]
        mov     ecx, 0x7
        lea     esi, [esp + 0x20]
        rep movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
