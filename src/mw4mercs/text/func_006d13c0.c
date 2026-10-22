/*
 * FUN_006d13c0 (400 B) — __fastcall (ECX = this), plain RET.
 * Reallocates a per-cell array (this+0x7c/0x80) sized by width*height,
 * copies old entries, then reinitializes per-cell byte arrays and a
 * per-column structure list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl  FUN_006cf3a0(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl  FUN_006d2a10(void);
extern void __stdcall FUN_006d2760(int a);
extern void __cdecl  FUN_006d4460(void);

__declspec(naked) void __cdecl FUN_006d13c0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esi + 0xc4]
        call    FUN_006cf3a0
        mov     ebp, dword ptr [esi + 0x4]
        imul    ebp, dword ptr [esi]
        mov     edi, dword ptr [esi + 0x80]
        cmp     ebp, edi
        jz      L_1499
        xor     ebx, ebx
        cmp     ebp, ebx
        jbe     L_1482
        lea     eax, [ebp*8 + 0x4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_1426
        lea     ecx, [ebp + -0x1]
        cmp     ecx, ebx
        lea     edx, [eax + 0x4]
        mov     dword ptr [eax], ebp
        mov     eax, edx
        jl      L_1420
        inc     ecx
L_1415:
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x4], ebx
        add     eax, 0x8
        dec     ecx
        jnz     L_1415
L_1420:
        mov     dword ptr [esp + 0x10], edx
        jmp     L_142a
L_1426:
        mov     dword ptr [esp + 0x10], ebx
L_142a:
        mov     ecx, dword ptr [esi + 0x7c]
        cmp     ecx, ebx
        jz      L_1479
        cmp     ebp, edi
        mov     eax, ebp
        jc      L_1439
        mov     eax, edi
L_1439:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_146b
        mov     edx, dword ptr [esp + 0x10]
        sub     ecx, edx
        lea     edi, [edx + eax*8]
        mov     dword ptr [esp + 0x14], ecx
        lea     ebx, [eax + 0x1]
L_1450:
        lea     eax, [ecx + edi*1]
        cmp     edi, eax
        jz      L_1463
        push    eax
        mov     ecx, edi
        call    FUN_006d2a10
        mov     ecx, dword ptr [esp + 0x14]
L_1463:
        dec     ebx
        sub     edi, 0x8
        test    ebx, ebx
        ja      L_1450
L_146b:
        mov     ecx, dword ptr [esi + 0x7c]
        test    ecx, ecx
        jz      L_1479
        push    0x3
        call    FUN_006d2760
L_1479:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x7c], eax
        jmp     L_1493
L_1482:
        mov     ecx, dword ptr [esi + 0x7c]
        cmp     ecx, ebx
        jz      L_1490
        push    0x3
        call    FUN_006d2760
L_1490:
        mov     dword ptr [esi + 0x7c], ebx
L_1493:
        mov     dword ptr [esi + 0x80], ebp
L_1499:
        mov     ecx, dword ptr [esi + 0x88]
        xor     eax, eax
        test    ecx, ecx
        jle     L_14c8
        mov     edx, dword ptr [esi + 0x84]
        mov     edi, dword ptr [esi + 0x8c]
        mov     ebx, dword ptr [esi + 0x94]
L_14b7:
        mov     byte ptr [edx + eax*1], 0xff
        mov     byte ptr [edi + eax*1], 0xff
        mov     byte ptr [ebx + eax*1], 0x0
        inc     eax
        cmp     eax, ecx
        jl      L_14b7
L_14c8:
        mov     ecx, dword ptr [esi + 0xbc]
        mov     ebx, dword ptr [ecx]
        xor     edx, edx
        cmp     ebx, 0x100
        setg    dl
        add     edx, 0x2
        mov     ecx, edx
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jle     L_1548
        mov     edi, 0xffffffe1
        lea     eax, [esi + 0xa4]
        sub     edi, esi
        lea     ebx, [esi + 0x1f]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], edi
L_1500:
        xor     edx, edx
        mov     byte ptr [ebx], 0x0
        mov     byte ptr [ebx + 0x5], 0x0
        mov     dl, byte ptr [ebx + -0x5]
        mov     ebp, edx
        test    ebp, ebp
        jle     L_1539
L_1517:
        mov     edi, dword ptr [eax]
        mov     esi, dword ptr [eax + -0x40]
        mov     ecx, edi
        mov     dword ptr [esi], 0x0
        call    FUN_006d4460
        add     esi, 0x4
        add     edi, 0x34
        dec     ebp
        __emit 0x75  /* __emit: backward jnz L_1517 rel-offset miscomputed by MSVC6 (75 E5 vs ref 75 EA) due to call-reloc between branch and target */
        __emit 0xEA
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
L_1539:
        inc     ebx
        add     eax, 0x8
        lea     edx, [edi + ebx*1]
        cmp     edx, ecx
        mov     dword ptr [esp + 0x10], eax
        jl      L_1500
L_1548:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
