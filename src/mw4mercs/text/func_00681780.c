/*
 * FUN_00681780 (336 B) — Linked-list walker that filters nodes (skipping
 * those with bit 0x13 set) through a predicate list (param_2), appending
 * surviving nodes into a growable array (param_3), reallocating via
 * FUN_004084d0 / FUN_004084e0 and copying with FUN_005cbbc0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_005cbbc0(int a, void *b);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_00681780(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        push    ebx
        mov     ebx, dword ptr [eax]
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x2c], 0x0
L_1799:
        test    ebx, ebx
        jz      L_17AA
        mov     ecx, dword ptr [ebx + 0x4]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esp + 0x24], ecx
        mov     ebx, ecx
        jmp     L_17AC
L_17AA:
        xor     eax, eax
L_17AC:
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        jz      L_18C8
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        test    dl, 0x1
        jnz     L_1799
        mov     eax, dword ptr [esp + 0x30]
        mov     esi, dword ptr [eax]
        mov     edi, dword ptr [eax + 0x4]
        cmp     esi, edi
        jz      L_17EB
L_17D0:
        mov     edx, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [esp + 0x30]
        push    edx
        call    dword ptr [eax]
        cmp     al, 0x1
        jz      L_1799
        add     esi, 0x4
        cmp     esi, edi
        jnz     L_17D0
L_17EB:
        mov     ebp, dword ptr [esp + 0x34]
        mov     esi, dword ptr [ebp + 0x4]
        cmp     esi, dword ptr [ebp + 0x8]
        jz      L_1809
        test    esi, esi
        jz      L_1801
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [esi], eax
L_1801:
        add     esi, 0x4
        mov     dword ptr [ebp + 0x4], esi
        jmp     L_1799
L_1809:
        mov     ebx, dword ptr [ebp]
        mov     eax, esi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_182C
        lea     ecx, [esp + 0x14]
L_182C:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_1848
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_1850
L_1848:
        mov     dword ptr [esp + 0x10], 0x0
L_1850:
        cmp     ebx, esi
        mov     edi, dword ptr [esp + 0x10]
        jz      L_1872
        mov     ebp, ebx
L_185A:
        push    ebp
        push    edi
        call    FUN_005cbbc0
        add     ebp, 0x4
        add     esp, 0x8
        add     edi, 0x4
        cmp     ebp, esi
        jnz     L_185A
        mov     ebp, dword ptr [esp + 0x34]
L_1872:
        test    edi, edi
        jz      L_187C
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [edi], edx
L_187C:
        add     edi, 0x4
        cmp     esi, esi
        jz      L_189A
L_1883:
        mov     eax, esi
        sub     eax, edi
L_1887:
        test    edi, edi
        jz      L_1890
        mov     ecx, dword ptr [eax + edi*0x1]
        mov     dword ptr [edi], ecx
L_1890:
        add     edi, 0x4
        lea     edx, [eax + edi*0x1]
        cmp     edx, esi
        jnz     L_1887
L_189A:
        test    ebx, ebx
        mov     dword ptr [esp + 0x18], ebx
        jz      L_18AB
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_18AB:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x24]
        lea     edx, [eax + ecx*0x4]
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], edi
        mov     dword ptr [ebp + 0x8], edx
        jmp     L_1799
L_18C8:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret
    }
}
