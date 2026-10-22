/*
 * FUN_0062BAD0 (312 B) — __thiscall (ECX = this), RET 0xC (three stack params).
 * Vector insert of 7-dword (0x1C-byte) elements with backing-array growth.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0062bad0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 4]
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 8], eax
        push    esi
        mov     esi, dword ptr [eax]
        mov     dword ptr [esp + 8], ecx
        sub     ecx, esi
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, ebx
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x20]
        jc      L_bb0d
        lea     eax, [esp + 0x10]
    L_bb0d:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x10], eax
        jz      L_bb32
        lea     ecx, [eax*8]
        sub     ecx, eax
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        jmp     L_bb3a
    L_bb32:
        mov     dword ptr [esp + 0x20], 0
    L_bb3a:
        mov     eax, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        cmp     esi, ebp
        push    edi
        jz      L_bb63
    L_bb48:
        mov     edx, esi
    L_bb4a:
        test    eax, eax
        jz      L_bb59
        mov     ecx, 7
        mov     esi, edx
        mov     edi, eax
        rep movsd
    L_bb59:
        add     edx, 0x1c
        add     eax, 0x1c
        cmp     edx, ebp
        jnz     L_bb4a
    L_bb63:
        cmp     ebx, 1
        jnz     L_bb7e
        test    eax, eax
        jz      L_bb79
        mov     esi, dword ptr [esp + 0x24]
        mov     ecx, 7
        mov     edi, eax
        rep movsd
    L_bb79:
        add     eax, 0x1c
        jmp     L_bb9d
    L_bb7e:
        test    ebx, ebx
        jbe     L_bb9d
        mov     edx, ebx
        mov     ebx, dword ptr [esp + 0x24]
    L_bb88:
        test    eax, eax
        jz      L_bb97
        mov     ecx, 7
        mov     esi, ebx
        mov     edi, eax
        rep movsd
    L_bb97:
        add     eax, 0x1c
        dec     edx
        jnz     L_bb88
    L_bb9d:
        cmp     ebp, dword ptr [esp + 0x10]
        mov     ebx, eax
        jz      L_bbc7
    L_bba5:
        mov     edx, ebp
        sub     edx, eax
    L_bba9:
        test    ebx, ebx
        jz      L_bbb9
        lea     esi, [edx + ebx]
        mov     ecx, 7
        mov     edi, ebx
        rep movsd
    L_bbb9:
        mov     ecx, dword ptr [esp + 0x10]
        add     ebx, 0x1c
        lea     eax, [edx + ebx]
        cmp     eax, ecx
        jnz     L_bba9
    L_bbc7:
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        pop     edi
        mov     dword ptr [esp + 0x20], eax
        pop     ebp
        jz      L_bbe0
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_bbe0:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0xc]
        lea     esi, [edx*8]
        sub     esi, edx
        lea     edx, [ecx + esi*4]
        pop     esi
        mov     dword ptr [eax + 4], ebx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 8], edx
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
