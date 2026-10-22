/*
 * FUN_00687580 (322 B) — __thiscall growable-array push helper
 * (12-byte elements).
 *
 * Appends {param[0],param[1],param[2]} to a growable array at
 * ECX+0x00/0x04/0x08, reallocating (FUN_004084d0 / FUN_004084e0)
 * when full. Element count computed via the 0x2aaaaaab magic-number
 * divide-by-12.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00687580(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        cmp     edi, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_6875BB
        test    edi, edi
        jz      L_6875AD
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [eax]
        mov     edx, edi
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [edx + 0x4], esi
        mov     dword ptr [edx + 0x8], eax
L_6875AD:
        add     edi, 0xc
        mov     dword ptr [ecx + 0x4], edi
        pop     edi
        pop     esi
        add     esp, 0xc
        ret     4
L_6875BB:
        push    ebx
        mov     ebx, dword ptr [ecx]
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     edx, 0x1
        push    ebp
        mov     dword ptr [esp + 0x14], 0x1
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x14]
        jc      L_6875EC
        lea     eax, [esp + 0x10]
L_6875EC:
        mov     ebp, dword ptr [eax]
        add     ebp, edx
        mov     dword ptr [esp + 0x14], ebp
        jz      L_68760C
        lea     edx, [ebp + ebp*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_687614
L_68760C:
        mov     dword ptr [esp + 0x10], 0x0
L_687614:
        cmp     ebx, edi
        mov     eax, dword ptr [esp + 0x10]
        jz      L_687644
L_68761C:
        mov     ecx, ebx
L_68761E:
        test    eax, eax
        jz      L_68763A
        mov     edx, ecx
        mov     ebp, dword ptr [edx]
        mov     esi, eax
        mov     dword ptr [esi], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x4], ebp
        mov     edx, dword ptr [edx + 0x8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x8], edx
L_68763A:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, edi
        jnz     L_68761E
L_687644:
        test    eax, eax
        jz      L_68765E
        mov     ecx, dword ptr [esp + 0x20]
        mov     esi, dword ptr [ecx]
        mov     edx, eax
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [edx + 0x4], esi
        mov     dword ptr [edx + 0x8], ecx
L_68765E:
        cmp     edi, edi
        lea     esi, [eax + 0xc]
        jz      L_687690
L_687665:
        mov     eax, edi
        sub     eax, esi
L_687669:
        test    esi, esi
        jz      L_687686
        lea     edx, [eax + esi]
        mov     ebp, dword ptr [edx]
        mov     ecx, esi
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], ebp
        mov     edx, dword ptr [edx + 0x8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x8], edx
L_687686:
        add     esi, 0xc
        lea     ecx, [eax + esi]
        cmp     ecx, edi
        jnz     L_687669
L_687690:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_6876A1
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_6876A1:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        lea     edx, [ebp + ebp*2]
        pop     ebp
        pop     ebx
        mov     dword ptr [eax], ecx
        lea     ecx, [ecx + edx*4]
        pop     edi
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax + 0x8], ecx
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
