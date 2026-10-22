/*
 * FUN_006285A0 (242 B) — __thiscall, RET 4 (1 stack param).
 * Growable uint-array push helper (this+0xf8/0xfc/0x100). Reallocates via
 * FUN_004084d0 when full, frees old buffer via FUN_004084e0. Contains an
 * unreachable copy block (0x00628642).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_006285A0(void *param_1)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0x100]
        push    edi
        mov     edi, dword ptr [ecx + 0xfc]
        cmp     edi, eax
        mov     dword ptr [esp + 0xc], ecx
        jz      L_85D2
        test    edi, edi
        jz      L_85C2
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi], eax
L_85C2:
        add     edi, 0x4
        mov     dword ptr [ecx + 0xfc], edi
        pop     edi
        add     esp, 0xc
        ret     0x4
L_85D2:
        push    ebx
        mov     ebx, dword ptr [ecx + 0xf8]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 0x2
        cmp     eax, 0x1
        push    ebp
        push    esi
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x10]
        jc      L_85FB
        lea     ecx, [esp + 0x14]
L_85FB:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      L_8615
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        jmp     L_8617
L_8615:
        xor     ebp, ebp
L_8617:
        cmp     ebx, edi
        mov     eax, ebp
        jz      L_8631
        mov     ecx, ebx
L_861F:
        test    eax, eax
        jz      L_8627
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_8627:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edi
        jnz     L_861F
L_8631:
        test    eax, eax
        jz      L_863B
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [eax], ecx
L_863B:
        cmp     edi, edi
        lea     esi, [eax + 0x4]
        jz      L_8659
        mov     eax, edi
        sub     eax, esi
L_8646:
        test    esi, esi
        jz      L_864F
        mov     edx, dword ptr [eax + esi]
        mov     dword ptr [esi], edx
L_864F:
        add     esi, 0x4
        lea     ecx, [eax + esi]
        cmp     ecx, edi
        jnz     L_8646
L_8659:
        test    ebx, ebx
        mov     dword ptr [esp + 0x20], ebx
        jz      L_866A
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_866A:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0xfc], esi
        pop     esi
        lea     ecx, [ebp + edx*4]
        mov     dword ptr [eax + 0xf8], ebp
        pop     ebp
        pop     ebx
        mov     dword ptr [eax + 0x100], ecx
        pop     edi
        add     esp, 0xc
        ret     0x4
    }
}
