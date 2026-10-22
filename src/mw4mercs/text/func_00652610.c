/*
 * FUN_00652610 (314 B) — __thiscall, RET 0xc. Vector push_back of a 12-byte
 * record with growth/reallocation (capacity doubling via 0x2aaaaaab div-by-12).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00652760(void);

__declspec(naked) void FUN_00652610(void)
{
    __asm {
        sub     esp, 0x14
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    esi
        mov     esi, dword ptr [ebx + 0x4]
        mov     dword ptr [esp + 0x18], edx
        cmp     esi, dword ptr [ebx + 0x8]
        mov     dword ptr [esp + 0x8], ebx
        jz      L_652653
        test    esi, esi
        jz      L_652645
        mov     edx, esi
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edx + 0x4], ecx
        mov     dword ptr [edx + 0x8], eax
L_652645:
        add     esi, 0xc
        mov     dword ptr [ebx + 0x4], esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     0xc
L_652653:
        push    ebp
        mov     ebp, dword ptr [ebx]
        mov     ecx, esi
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 0x1
        push    edi
        mov     dword ptr [esp + 0x30], 0x1
        mov     dword ptr [esp + 0x14], edx
        lea     eax, [esp + 0x30]
        jc      L_652684
        lea     eax, [esp + 0x14]
L_652684:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x14], eax
        jz      L_6526a3
        lea     edx, [eax + eax*0x2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x30], eax
        jmp     L_6526ab
L_6526a3:
        mov     dword ptr [esp + 0x30], 0x0
L_6526ab:
        cmp     ebp, esi
        mov     edi, dword ptr [esp + 0x30]
        jz      L_6526cd
        mov     ebx, ebp
L_6526b5:
        push    ebx
        push    edi
        call    FUN_00652760
        add     ebx, 0xc
        add     esp, 0x8
        add     edi, 0xc
        cmp     ebx, esi
        jnz     L_6526b5
        mov     ebx, dword ptr [esp + 0x10]
L_6526cd:
        test    edi, edi
        jz      L_6526e7
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x20]
        mov     ecx, edi
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x8], edx
L_6526e7:
        add     edi, 0xc
        cmp     esi, esi
        jz      L_652719
        mov     eax, esi
        sub     eax, edi
L_6526f2:
        test    edi, edi
        jz      L_65270f
        lea     ecx, [eax + edi*0x1]
        mov     ebx, dword ptr [ecx]
        mov     edx, edi
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + 0x4], ebx
        mov     ecx, dword ptr [ecx + 0x8]
        mov     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [edx + 0x8], ecx
L_65270f:
        add     edi, 0xc
        lea     edx, [eax + edi*0x1]
        cmp     edx, esi
        jnz     L_6526f2
L_652719:
        test    ebp, ebp
        mov     dword ptr [esp + 0x28], ebp
        jz      L_65272a
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
L_65272a:
        mov     ecx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx + 0x4], edi
        pop     edi
        mov     dword ptr [ebx], ecx
        lea     eax, [eax + eax*0x2]
        pop     ebp
        lea     ecx, [ecx + eax*0x4]
        pop     esi
        mov     dword ptr [ebx + 0x8], ecx
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
