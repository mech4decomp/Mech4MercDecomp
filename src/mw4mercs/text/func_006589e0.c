/*
 * FUN_006589e0 (261 B) — Vector-like grow/insert routine (identical
 * structure to FUN_00641090).
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 * this layout: [0]=begin, [4]=end, [8]=capacity.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_006589e0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp + 0x4]
        mov     ecx, dword ptr [ebp]
        mov     eax, ebx
        sub     eax, ecx
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        sar     eax, 3
        cmp     eax, esi
        push    edi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      L_658a08
        lea     ecx, [esp + 0x10]
L_658a08:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_658a28
        lea     eax, [ecx*8]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp + 0x20], eax
        jmp     L_658a30
L_658a28:
        mov     dword ptr [esp + 0x20], 0
L_658a30:
        mov     edi, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [ebp]
        cmp     ecx, edi
        mov     eax, dword ptr [esp + 0x20]
        jz      L_658a57
L_658a3f:
        test    eax, eax
        jz      L_658a4d
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
L_658a4d:
        add     ecx, 8
        add     eax, 8
        cmp     ecx, edi
        jnz     L_658a3f
L_658a57:
        cmp     esi, 1
        jnz     L_658a73
        test    eax, eax
        jz      L_658a6e
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
L_658a6e:
        add     eax, 8
        jmp     L_658a91
L_658a73:
        test    esi, esi
        jbe     L_658a91
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, esi
L_658a7d:
        test    eax, eax
        jz      L_658a8b
        mov     esi, dword ptr [edx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [edx + 0x4]
        mov     dword ptr [eax + 0x4], esi
L_658a8b:
        add     eax, 8
        dec     ecx
        jnz     L_658a7d
L_658a91:
        cmp     edi, ebx
        mov     esi, eax
        jz      L_658ab5
        mov     ecx, edi
        sub     ecx, eax
L_658a9b:
        test    esi, esi
        jz      L_658aab
        mov     edx, dword ptr [ecx + esi]
        mov     eax, dword ptr [ecx + esi + 0x4]
        mov     dword ptr [esi], edx
        mov     dword ptr [esi + 0x4], eax
L_658aab:
        add     esi, 8
        lea     edx, [ecx + esi]
        cmp     edx, ebx
        jnz     L_658a9b
L_658ab5:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_658ac9
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_658ac9:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebp + 0x4], esi
        lea     edx, [eax + ecx*8]
        pop     esi
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x8], edx
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
