/*
 * FUN_00659620 (600 B) — __thiscall vector-like container resize/assign.
 * Copies a range of 0x28-byte records from param_1 into `this`, growing
 * the backing store as needed (division-by-40 via 0x66666667 magic).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(unsigned int);
extern void   __cdecl FUN_004084e0(void *);
extern void   __cdecl FUN_00659a00(void *, void *);
extern void   __cdecl FUN_00659550(void *);
extern void   __cdecl FUN_00421100(void *);

__declspec(naked) void FUN_00659620(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        mov     esi, ecx
        cmp     eax, esi
        mov     dword ptr [esp + 0x8], esi
        jz      L5986f
        push    ebx
        mov     ebx, dword ptr [eax]
        push    ebp
        push    edi
        mov     edi, dword ptr [eax + 0x4]
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [esi]
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebp, edx
        mov     edx, dword ptr [esi + 0x8]
        sub     edx, ecx
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     ebp, edx
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x10], ebp
        jbe     L596ea
        test    ebp, ebp
        jz      L59693
        lea     ecx, [ebp + ebp*0x4]
        shl     ecx, 0x3
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x2c], eax
        jmp     L5969b
L59693:
        mov     dword ptr [esp + 0x2c], 0x0
L5969b:
        cmp     ebx, edi
        jz      L596c2
        mov     eax, dword ptr [esp + 0x2c]
        sub     eax, ebx
        mov     dword ptr [esp + 0x1c], eax
        jmp     L596af
L596ab:
        mov     eax, dword ptr [esp + 0x1c]
L596af:
        add     eax, ebx
        push    ebx
        push    eax
        call    FUN_00659a00
        add     ebx, 0x28
        add     esp, 0x8
        cmp     ebx, edi
        jnz     L596ab
L596c2:
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     dword ptr [esp + 0x24], eax
        jz      L596d5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L596d5:
        mov     eax, dword ptr [esp + 0x2c]
        lea     edx, [ebp + ebp*0x4]
        mov     dword ptr [esi], eax
        lea     eax, [eax + edx*0x8]
        mov     dword ptr [esi + 0x8], eax
        jmp     L59857
L596ea:
        mov     edx, dword ptr [esi + 0x4]
        sub     edx, ecx
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, ebp
        jc      L5973d
        sub     edi, ebx
        mov     eax, 0x66666667
        imul    edi
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        mov     ebp, ecx
        jle     L59853
        sub     ebx, ecx
        add     ebx, ebp
        mov     edi, edx
L59727:
        push    ebx
        mov     ecx, ebp
        call    FUN_00659550
        add     ebp, 0x28
        add     ebx, 0x28
        dec     edi
        jnz     L59727
        jmp     L59853
L5973d:
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [edx + edx*0x4]
        shl     ecx, 0x3
        lea     esi, [ecx + ebx*0x1]
        mov     ebp, ebx
        mov     edx, esi
        sub     edx, ebp
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        mov     dword ptr [esp + 0x24], ecx
        mov     dword ptr [esp + 0x1c], esi
        jle     L597db
        mov     ecx, dword ptr [esp + 0x2c]
        lea     edi, [ecx + 0x8]
        lea     esi, [ebp + 0x8]
        mov     dword ptr [esp + 0x18], edx
L5977b:
        mov     cl, byte ptr [esi + -0x4]
        mov     edx, dword ptr [ebp]
        mov     eax, dword ptr [esp + 0x2c]
        mov     byte ptr [edi + -0x4], cl
        push    esi
        mov     ecx, edi
        mov     dword ptr [eax], edx
        call    FUN_00421100
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [edi + 0xc], edx
        mov     dl, byte ptr [esi + 0x18]
        mov     dword ptr [edi + 0x10], eax
        mov     eax, dword ptr [esi + 0x1c]
        mov     byte ptr [edi + 0x18], dl
        mov     edx, dword ptr [esp + 0x2c]
        mov     dword ptr [edi + 0x1c], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x14], ecx
        add     edx, 0x28
        add     ebp, 0x28
        add     esi, 0x28
        add     edi, 0x28
        dec     eax
        mov     dword ptr [esp + 0x2c], edx
        mov     dword ptr [esp + 0x18], eax
        jnz     L5977b
        mov     edi, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x1c]
L597db:
        mov     eax, esi
        cmp     eax, edi
        jz      L5984f
        mov     edx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edx + 0x4]
        mov     ebp, edx
        sub     ebp, ecx
        mov     ecx, edx
        mov     edx, dword ptr [esp + 0x1c]
        sub     ebp, ebx
        lea     esi, [eax + 0x10]
        lea     ebp, [eax + ebp*0x1 + 0x8]
        sub     ecx, edx
L597fd:
        cmp     ebp, 0x8
        jz      L59845
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + eax*0x1], edx
        mov     dl, byte ptr [esi + -0xc]
        mov     byte ptr [ecx + eax*0x1 + 0x4], dl
        mov     edx, dword ptr [esi + -0x8]
        mov     dword ptr [ecx + eax*0x1 + 0x8], edx
        mov     edx, dword ptr [esi + -0x4]
        mov     dword ptr [ecx + eax*0x1 + 0xc], edx
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx + eax*0x1 + 0x10], edx
        mov     edx, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + eax*0x1 + 0x14], edx
        mov     edx, dword ptr [esi + 0x8]
        mov     dword ptr [ecx + eax*0x1 + 0x18], edx
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [ecx + eax*0x1 + 0x1c], edx
        mov     dl, byte ptr [esi + 0x10]
        mov     byte ptr [ecx + eax*0x1 + 0x20], dl
        mov     edx, dword ptr [esi + 0x14]
        mov     dword ptr [ecx + eax*0x1 + 0x24], edx
L59845:
        add     eax, 0x28
        add     esi, 0x28
        cmp     eax, edi
        jnz     L597fd
L5984f:
        mov     esi, dword ptr [esp + 0x14]
L59853:
        mov     ebp, dword ptr [esp + 0x10]
L59857:
        mov     ecx, dword ptr [esi]
        pop     edi
        lea     eax, [ebp + ebp*0x4]
        pop     ebp
        lea     edx, [ecx + eax*0x8]
        pop     ebx
        mov     dword ptr [esi + 0x4], edx
        mov     eax, esi
        pop     esi
        add     esp, 0x18
        ret     0x4
L5986f:
        mov     eax, esi
        pop     esi
        add     esp, 0x18
        ret     0x4
    }
}
