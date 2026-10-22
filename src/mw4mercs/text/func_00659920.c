/*
 * FUN_00659920 (215 B) — __cdecl (RET). Computes element count of a
 * 0x28-byte-element array via magic-number division (0x66666667), allocates
 * a copy buffer via FUN_004084d0, and copies elements (with a per-element
 * FUN_0040c5d0 call) into param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void* __cdecl FUN_004084d0(int);
extern void  __cdecl FUN_0040c5d0(void);

__declspec(naked) void FUN_00659920(void)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        test    ebp, ebp
        jz      l_f5
        mov     eax, dword ptr [esp + 0xc]
        mov     cl, byte ptr [eax + 0x8]
        push    ebx
        mov     ebx, dword ptr [eax]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x14], cl
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x66666667
        imul    ecx
        mov     cl, byte ptr [esp + 0x14]
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, 0x0
        mov     dword ptr [ebp], eax
        mov     byte ptr [ebp + 0x8], cl
        mov     dword ptr [esp + 0x18], edi
        mov     esi, edx
        mov     dword ptr [ebp + 0x4], eax
        mov     dword ptr [ebp + 0x8], eax
        jz      l_81
        lea     edx, [esi + esi*4]
        shl     edx, 0x3
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
    l_81:
        cmp     ebx, edi
        lea     ecx, [esi + esi*4]
        lea     edx, [eax + ecx*8]
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x4], eax
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [esp + 0x14], eax
        jz      l_ef
        lea     esi, [eax + 0x8]
        lea     edi, [ebx + 0x8]
    l_9e:
        cmp     esi, 0x8
        jz      l_d7
        mov     ecx, dword ptr [ebx]
        mov     dl, byte ptr [edi - 0x4]
        mov     dword ptr [eax], ecx
        push    edi
        mov     ecx, esi
        mov     byte ptr [esi - 0x4], dl
        call    FUN_0040c5d0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [edi + 0x10]
        mov     edx, dword ptr [edi + 0x14]
        mov     dword ptr [esi + 0xc], eax
        mov     al, byte ptr [edi + 0x18]
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [edi + 0x1c]
        mov     byte ptr [esi + 0x18], al
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x1c], ecx
    l_d7:
        mov     ecx, dword ptr [esp + 0x18]
        add     ebx, 0x28
        add     eax, 0x28
        add     edi, 0x28
        add     esi, 0x28
        cmp     ebx, ecx
        mov     dword ptr [esp + 0x14], eax
        jnz     l_9e
    l_ef:
        pop     edi
        pop     esi
        mov     dword ptr [ebp + 0x4], eax
        pop     ebx
    l_f5:
        pop     ebp
        ret
    }
}
