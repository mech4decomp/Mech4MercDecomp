/*
 * FUN_0068b950 (431 B) — __thiscall (ECX = this), RET 4.
 *
 * Appends a 12-byte element to a growable array (this+0x34 begin,
 * this+0x38 end, this+0x3c capacity). Grows the backing buffer via
 * FUN_004084d0 / FUN_005b8a30 when full.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f244c;
extern void __stdcall FUN_006f4950(int a);
extern void __stdcall FUN_006b0740(void *a);
extern int g_7b220c;
extern char __stdcall FUN_0041c540(void *a, void *b, int c);
extern void __stdcall FUN_006f49a0(void);
extern void *__stdcall FUN_004084d0(int a);
extern void *__stdcall FUN_005b8a30(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_0040c5d0(void *a);
extern void *__stdcall FUN_005b8a00(void *a, int b);

__declspec(naked) void __stdcall FUN_0068b950(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [g_7f244c]
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x20], eax
        call    FUN_006b0740
        mov     ecx, dword ptr [esi + 0x38]
        mov     ebp, dword ptr [esi + 0x34]
        sub     ecx, ebp
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        jz      L_b9de
        mov     ecx, dword ptr [g_7b220c]
        push    ecx
        mov     ecx, dword ptr [esi + 0x38]
        mov     ebx, ebp
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        lea     ecx, [edx + edx*0x2]
        mov     edx, ebp
        lea     eax, [edx + ecx*0x4 + -0xc]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_baf1
    L_b9de:
        mov     eax, dword ptr [esi + 0x3c]
        mov     ebp, dword ptr [esi + 0x38]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L_ba1d
        test    ebp, ebp
        jz      L_ba05
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], edx
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x4], eax
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [ebp + 0x8], ecx
    L_ba05:
        add     ebp, 0xc
        mov     dword ptr [esi + 0x38], ebp
        mov     byte ptr [esi + 0x24], 0x1
        call    FUN_006f49a0
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    L_ba1d:
        push    edi
        mov     edi, dword ptr [esi + 0x34]
        mov     ecx, ebp
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [esp + 0x28], 0x1
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x28]
        jc      L_ba4e
        lea     eax, [esp + 0x10]
    L_ba4e:
        mov     ebx, dword ptr [eax]
        add     ebx, edx
        jz      L_ba69
        lea     ecx, [ebx + ebx*0x2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x28], eax
        jmp     L_ba71
    L_ba69:
        mov     dword ptr [esp + 0x28], 0x0
    L_ba71:
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    ebp
        push    edi
        call    FUN_005b8a30
        add     esp, 0x10
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L_ba9d
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    FUN_0040c5d0
        mov     eax, dword ptr [esp + 0x10]
    L_ba9d:
        mov     edx, dword ptr [esp + 0x28]
        push    edx
        add     eax, 0xc
        push    eax
        push    ebp
        push    ebp
        call    FUN_005b8a30
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x24]
        sub     eax, edi
        mov     ecx, eax
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     esp, 0x10
        add     edx, eax
        push    edx
        push    edi
        mov     dword ptr [esp + 0x18], edi
        lea     edi, [esi + 0x3c]
        mov     ecx, edi
        call    FUN_005b8a00
        mov     eax, dword ptr [esp + 0x28]
        lea     ecx, [ebx + ebx*0x2]
        lea     edx, [eax + ecx*0x4]
        mov     dword ptr [edi], edx
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x38], ebp
        pop     edi
        mov     byte ptr [esi + 0x24], 0x1
    L_baf1:
        call    FUN_006f49a0
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
