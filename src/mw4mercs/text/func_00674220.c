/*
 * FUN_00674220 (355 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Vector-style container push_back: appends a 12-byte element, growing the
 * backing array (operator new / delete) when full.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_00674220(void *param)
{
    __asm {
        sub     esp, 0x18
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        mov     ebp, ecx
        push    0
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_00707e70
        mov     esi, dword ptr [ebp + 0x88]
        cmp     esi, dword ptr [ebp + 0x8c]
        fstp    qword ptr [esp + 0x1c]
        jz      L_74271
        test    esi, esi
        jz      L_7425f
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, esi
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
L_7425f:
        add     esi, 0xc
        pop     edi
        mov     dword ptr [ebp + 0x88], esi
        pop     esi
        pop     ebp
        add     esp, 0x18
        ret     0x4
L_74271:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x84]
        mov     ecx, esi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x18], edx
        lea     eax, [esp + 0x10]
        jc      L_742a5
        lea     eax, [esp + 0x18]
L_742a5:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x18], eax
        jz      L_742c4
        lea     ecx, [eax + eax*0x2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_742cc
L_742c4:
        mov     dword ptr [esp + 0x10], 0x0
L_742cc:
        cmp     ebx, esi
        mov     eax, dword ptr [esp + 0x10]
        jz      L_742fc
        mov     ecx, ebx
        test    eax, eax
        jz      L_742f2
L_742d6:
        mov     edx, ecx
        mov     ebp, dword ptr [edx]
        mov     edi, eax
        mov     dword ptr [edi], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [edi + 0x4], ebp
        mov     edx, dword ptr [edx + 0x8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x8], edx
L_742f2:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, esi
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (off-by-4, rel32 call between branch and target) */
        __emit 0x75
        __emit 0xDA
L_742fc:
        test    eax, eax
        jz      L_74316
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, eax
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [edx + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [edx + 0x8], ecx
L_74316:
        cmp     esi, esi
        lea     edi, [eax + 0xc]
        jz      L_74348
        mov     eax, esi
        sub     eax, edi
        test    edi, edi
        jz      L_7433e
L_74321:
        lea     edx, [eax + edi]
        mov     ebp, dword ptr [edx]
        mov     ecx, edi
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x4], ebp
        mov     edx, dword ptr [edx + 0x8]
        mov     ebp, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x8], edx
L_7433e:
        add     edi, 0xc
        lea     ecx, [eax + edi]
        cmp     ecx, esi
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (off-by-4, rel32 call between branch and target) */
        __emit 0x75
        __emit 0xD9
L_74348:
        test    ebx, ebx
        mov     dword ptr [esp + 0x2c], ebx
        jz      L_74359
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
L_74359:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        pop     ebx
        mov     dword ptr [ebp + 0x88], edi
        lea     edx, [eax + eax*0x2]
        pop     edi
        lea     eax, [ecx + edx*0x4]
        pop     esi
        mov     dword ptr [ebp + 0x84], ecx
        mov     dword ptr [ebp + 0x8c], eax
        pop     ebp
        add     esp, 0x18
        ret     0x4
    }
}
