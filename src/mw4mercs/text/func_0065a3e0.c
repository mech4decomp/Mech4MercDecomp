/*
 * FUN_0065a3e0 (444 B) — __thiscall (ECX = this), RET 0xc.
 *
 * Reallocates and rebuilds a growable array of 0xc-byte elements
 * (this[0] begin, this[1] end, this[2] capacity). Copies elements,
 * optionally transforms them, and frees the old buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int a);
extern void __stdcall FUN_0065a5d0(void *a);
extern void __stdcall FUN_005da500(int a, void *b);
extern void *__stdcall FUN_0065a680(void *a, void *b, void *c, void *d);
extern void __stdcall FUN_0065a670(void *a, void *b, void *c);
extern void __stdcall FUN_0065a5c0(void *a, int b);
extern void __stdcall FUN_005b8a20(void *a, int b);
extern void __stdcall FUN_0065a5a0(void *a);
extern void __stdcall FUN_004084e0(void *a);

__declspec(naked) void __stdcall FUN_0065a3e0(void)
{
    __asm {
        sub     esp, 0x10
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [ebp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp]
        mov     dword ptr [esp + 0xc], ecx
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x10], edx
        lea     eax, [esp + 0x28]
        jc      L_41a
        lea     eax, [esp + 0x10]
    L_41a:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x18], eax
        jz      L_439
        lea     ecx, [eax + eax*0x2]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L_441
    L_439:
        mov     dword ptr [esp + 0x10], 0x0
    L_441:
        mov     esi, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x24]
        cmp     edi, ebx
        jz      L_464
    L_44e:
        test    esi, esi
        jz      L_45a
        push    edi
        mov     ecx, esi
        call    FUN_0065a5d0
    L_45a:
        add     edi, 0xc
        add     esi, 0xc
        cmp     edi, ebx
        jnz     L_44e
    L_464:
        mov     edi, dword ptr [esp + 0x2c]
        cmp     edi, 0x1
        jnz     L_4c0
        test    esi, esi
        jz      L_4bb
        mov     eax, dword ptr [esp + 0x28]
        mov     dl, byte ptr [eax + 0x8]
        mov     edi, dword ptr [eax + 0x4]
        mov     ebx, dword ptr [eax]
        lea     eax, [esp + 0x2c]
        push    eax
        mov     byte ptr [esp + 0x30], dl
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        push    edx
        mov     ecx, esi
        call    FUN_005da500
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esi]
        push    edx
        push    eax
        push    edi
        push    ebx
        call    FUN_0065a680
        mov     ebx, dword ptr [esp + 0x34]
        add     esp, 0x10
        mov     dword ptr [esi + 0x4], eax
    L_4bb:
        add     esi, 0xc
        jmp     L_4da
    L_4c0:
        test    edi, edi
        jbe     L_4da
    L_4c4:
        test    esi, esi
        jz      L_4d4
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    FUN_0065a5d0
    L_4d4:
        add     esi, 0xc
        dec     edi
        jnz     L_4c4
    L_4da:
        cmp     ebx, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x2c], esi
        jz      L_509
        mov     edi, ebx
        sub     edi, esi
    L_4e8:
        test    esi, esi
        jz      L_4f7
        lea     edx, [edi + esi*0x1]
        push    edx
        mov     ecx, esi
        call    FUN_0065a5d0
    L_4f7:
        mov     ecx, dword ptr [esp + 0x10]
        add     esi, 0xc
        lea     eax, [edi + esi*0x1]
        cmp     eax, ecx
        jnz     L_4e8
        mov     dword ptr [esp + 0x2c], esi
    L_509:
        mov     ebx, dword ptr [ebp]
        cmp     ebx, dword ptr [esp + 0x10]
        jz      L_56b
    L_515:
        lea     esi, [ebx + 0x8]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi + -0x4]
        mov     edi, dword ptr [ebx]
        push    ecx
        push    edx
        push    edi
        call    FUN_0065a670
        mov     ecx, dword ptr [esi]
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    0x0
        push    esi
        mov     ebp, edx
        call    FUN_0065a5c0
        push    ebp
        push    edi
        call    FUN_005b8a20
        add     esp, 0x1c
        mov     ecx, esi
        call    FUN_0065a5a0
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 0xc
        add     esi, 0xc
        cmp     ebx, eax
        __emit 0x75 /* __emit: backward JNZ rel8 off-by-3 (call-relocs between branch & target) */
        __emit 0xB2
        mov     ebp, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x2c]
    L_56b:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        pop     ebx
        jz      L_57c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_57c:
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [ecx + ecx*0x2]
        pop     edi
        mov     dword ptr [ebp + 0x4], esi
        lea     edx, [eax + ecx*0x4]
        pop     esi
        mov     dword ptr [ebp], eax
        mov     dword ptr [ebp + 0x8], edx
        pop     ebp
        add     esp, 0x10
        ret     0xc
    }
}
