/*
 * FUN_0062c120 (416 B) - Heap sort over 0x1c-byte elements.
 *
 * __cdecl, two params (param_1, param_2), RET. Sorts an array of
 * 0x1c-byte records in place using FUN_0062b5c0 as the comparison.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0062b5c0(void);

__declspec(naked) void __cdecl FUN_0062c120(void)
{
    __asm {
        sub     esp, 0x44
        mov     ecx, dword ptr [esp + 0x4c]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x54]
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x2
        push    edi
        mov     dword ptr [esp + 0x10], edx
        jl      Lc2b8
        lea     eax, [edx - 0x2]
        cdq
        sub     eax, edx
        sar     eax, 0x1
        lea     ecx, [eax*0x8 + 0x0]
        sub     ecx, eax
        lea     ebx, [eax + eax*0x1 + 0x2]
        lea     edx, [esi + ecx*0x4]
        mov     dword ptr [esp + 0x5c], eax
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x14], edx
Lc175:
        mov     esi, dword ptr [esp + 0x14]
        mov     ebp, eax
Lc17b:
        cmp     ebx, dword ptr [esp + 0x10]
        mov     ecx, 0x7
        lea     edi, [esp + 0x38]
        rep     movsd
        jge     Lc1d9
Lc18c:
        mov     edi, dword ptr [esp + 0x58]
        lea     eax, [ebx*0x8 + 0x0]
        sub     eax, ebx
        lea     ecx, [edi + eax*0x4]
        lea     edx, [ecx - 0x1c]
        push    edx
        call    FUN_0062b5c0
        test    al, al
        jz      Lc1aa
        dec     ebx
Lc1aa:
        lea     eax, [ebx*0x8 + 0x0]
        sub     eax, ebx
        lea     ecx, [ebp*0x8 + 0x0]
        sub     ecx, ebp
        lea     esi, [edi + eax*0x4]
        mov     eax, dword ptr [esp + 0x10]
        lea     edi, [edi + ecx*0x4]
        mov     ebp, ebx
        lea     ebx, [ebx + ebx*0x1 + 0x2]
        cmp     ebx, eax
        mov     ecx, 0x7
        rep     movsd
        jl      Lc18c
        cmp     ebx, eax
Lc1d9:
        jnz     Lc202
        mov     eax, dword ptr [esp + 0x58]
        lea     edx, [ebx*0x8 + 0x0]
        lea     ecx, [ebp*0x8 + 0x0]
        sub     edx, ebx
        sub     ecx, ebp
        lea     edi, [eax + ecx*0x4]
        lea     esi, [eax + edx*0x4 - 0x1c]
        mov     ecx, 0x7
        rep     movsd
        lea     ebp, [ebx - 0x1]
Lc202:
        lea     eax, [ebp - 0x1]
        cdq
        sub     eax, edx
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, 0x7
        lea     esi, [esp + 0x38]
        lea     edi, [esp + 0x1c]
        sar     ebx, 0x1
        cmp     ebp, eax
        rep     movsd
        mov     edi, ebp
        jle     Lc26e
Lc225:
        mov     ebp, dword ptr [esp + 0x58]
        lea     edx, [ebx*0x8 + 0x0]
        sub     edx, ebx
        lea     esi, [ebp + edx*0x4]
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    FUN_0062b5c0
        test    al, al
        jz      Lc272
        lea     ecx, [edi*0x8 + 0x0]
        sub     ecx, edi
        lea     eax, [ebx - 0x1]
        cdq
        lea     edi, [ebp + ecx*0x4]
        sub     eax, edx
        mov     ecx, 0x7
        sar     eax, 0x1
        rep     movsd
        mov     edi, ebx
        mov     ebx, eax
        cmp     edi, dword ptr [esp + 0x5c]
        jg      Lc225
        jmp     Lc272
Lc26e:
        mov     ebp, dword ptr [esp + 0x58]
Lc272:
        mov     eax, dword ptr [esp + 0x5c]
        lea     edx, [edi*0x8 + 0x0]
        sub     edx, edi
        test    eax, eax
        lea     edi, [ebp + edx*0x4]
        mov     ecx, 0x7
        lea     esi, [esp + 0x1c]
        rep     movsd
        jz      Lc2b8
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, eax
        mov     eax, dword ptr [esp + 0x14]
        dec     edx
        sub     ecx, 0x2
        sub     eax, 0x1c
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x5c], edx
        mov     dword ptr [esp + 0x18], ecx
        mov     ebx, ecx
        mov     eax, edx
        jmp     Lc175
Lc2b8:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret
    }
}
