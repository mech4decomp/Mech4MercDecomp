/*
 * FUN_0061d990 (121 B) — __fastcall (ECX = this), no stack params.
 *
 * Destructor: sets vtable, frees each non-null entry in the [0x10,0x14)
 * range via FUN_006f4230, compacts the range, frees the buffer at
 * this+0xc via FUN_006f4850, and frees this+0x10 via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f4850(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_0061d990(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x10]
        mov     dword ptr [edi], 0x78c938
        mov     ebx, dword ptr [edi + 0x14]
        cmp     esi, ebx
        jz      L_0061d9be
L_0061d9a5:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_0061d9b7
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0
L_0061d9b7:
        add     esi, 0x4
        cmp     esi, ebx
        jnz     L_0061d9a5
L_0061d9be:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, dword ptr [edi + 0x10]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 0x2
        test    ecx, ecx
        jle     L_0061d9dc
L_0061d9cf:
        mov     esi, dword ptr [eax]
        mov     dword ptr [edx], esi
        add     eax, 0x4
        add     edx, 0x4
        dec     ecx
        jnz     L_0061d9cf
L_0061d9dc:
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [edi + 0x14], edx
        jz      L_0061d9f5
        push    0x0
        push    eax
        call    FUN_006f4850
        mov     dword ptr [edi + 0xc], 0x0
L_0061d9f5:
        mov     edi, dword ptr [edi + 0x10]
        test    edi, edi
        jz      L_0061da05
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_0061da05:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
