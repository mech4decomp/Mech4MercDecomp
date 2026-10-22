/*
 * FUN_00687960 (366 B) — __thiscall (ECX = this), RET 8 (two stack params).
 * Vector-style resize/insert with 0xc-byte elements: grows the backing
 * array (FUN_00687da0), copies elements, and updates the container's
 * begin/end/capacity pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00687da0(void);
extern void __cdecl FUN_00687c50(void);
extern void __cdecl FUN_00687ad0(void);

__declspec(naked) void __fastcall FUN_00687960(void *param)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp]
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     esi, edx
        jbe     L_6879f1
        mov     cl, byte ptr [ebp + 0x8]
        lea     edx, [esp + 0x24]
        push    edx
        mov     byte ptr [esp + 0x28], cl
        push    esi
        lea     ecx, [esp + 0x1c]
        call    FUN_00687da0
        test    esi, esi
        mov     ebx, dword ptr [esp + 0x14]
        jbe     L_6879bb
L_6879a7:
        mov     eax, dword ptr [esp + 0x28]
        push    eax
        push    ebx
        call    FUN_00687c50
        add     esp, 0x8
        add     ebx, 0xc
        dec     esi
        jnz     L_6879a7
L_6879bb:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], eax
        mov     ecx, dword ptr [ebp + 0x4]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 0x4], ebx
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [esp + 0x18], ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [ebp + 0x8], eax
        call    FUN_00687ad0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_6879f1:
        mov     ecx, dword ptr [ebp + 0x4]
        mov     edx, ecx
        sub     edx, edi
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     esi, edx
        mov     dword ptr [esp + 0x10], edx
        jbe     L_687a6a
        mov     eax, edi
        cmp     eax, ecx
        jz      L_687a37
L_687a16:
        mov     edx, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [edx]
        mov     edi, eax
        mov     dword ptr [edi], ebx
        mov     ebx, dword ptr [edx + 0x4]
        mov     edx, dword ptr [edx + 0x8]
        add     eax, 0xc
        cmp     eax, ecx
        mov     dword ptr [edi + 0x4], ebx
        mov     dword ptr [edi + 0x8], edx
        jnz     L_687a16
        mov     edx, dword ptr [esp + 0x10]
L_687a37:
        sub     esi, edx
        jz      L_687a5d
        mov     eax, dword ptr [esp + 0x28]
        test    ecx, ecx
        jz      L_687a57
L_687a3f:
        mov     edx, eax
        mov     ebx, dword ptr [edx]
        mov     edi, ecx
        mov     dword ptr [edi], ebx
        mov     ebx, dword ptr [edx + 0x4]
        mov     edx, dword ptr [edx + 0x8]
        mov     dword ptr [edi + 0x4], ebx
        mov     dword ptr [edi + 0x8], edx
L_687a57:
        add     ecx, 0xc
        dec     esi
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (off-by-4) */
        __emit 0x75
        __emit 0xE2
L_687a5d:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], ecx
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
L_687a6a:
        test    esi, esi
        jbe     L_687a8a
L_687a6e:
        mov     eax, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [eax]
        mov     edx, edi
        mov     dword ptr [edx], ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [edx + 0x4], ebx
        add     edi, 0xc
        dec     esi
        mov     dword ptr [edx + 0x8], eax
        jnz     L_687a6e
L_687a8a:
        mov     edx, ecx
        sub     edx, ecx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        mov     esi, edi
        jle     L_687ac1
        sub     ecx, edi
        lea     eax, [ecx + esi]
L_687aa6:
        mov     ebx, dword ptr [eax]
        mov     edi, esi
        mov     dword ptr [edi], ebx
        mov     ebx, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x4], ebx
        mov     eax, dword ptr [eax + 0x8]
        add     esi, 0xc
        dec     edx
        mov     dword ptr [edi + 0x8], eax
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (off-by-4) */
        __emit 0x75
        __emit 0xE5
L_687ac1:
        pop     edi
        mov     dword ptr [ebp + 0x4], esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x8
    }
}
