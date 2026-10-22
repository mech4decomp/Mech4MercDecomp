/*
 * FUN_005c2f60 (630 B) — __cdecl, 3 stack args. 3x3 matrix multiply with
 * a large FPU block, then two conditional helper-call sequences.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005cb330(void *a, void *b);
extern void __cdecl FUN_005cb390(int a, void *b);
extern void __cdecl FUN_005cb340(void *a, int b, void *c);
extern char __cdecl FUN_00415230(int a);
extern int DAT_007f25c0;

__declspec(naked) void func_005c2f60(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x54
        push    ebx
        mov     ebx, dword ptr [ebp + 0x10]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x124]
        test    eax, eax
        jnz     l_2f87
        mov     eax, dword ptr [edi + 0x128]
        test    eax, eax
        jz      l_315a
    l_2f87:
        mov     ecx, dword ptr [edi + 0xd8]
        add     ecx, 0x80
        add     eax, 0x10
        lea     edx, [ebp - 0x54]
        mov     dword ptr [ebp + 0x10], ecx
        mov     dword ptr [ebp - 0x4], eax
        mov     dword ptr [ebp + 0x8], edx
        mov     edx, dword ptr [ebp - 0x4]
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     eax, dword ptr [ebp - 0x48]
        mov     ecx, dword ptr [ebp - 0x38]
        mov     edx, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], ecx
        lea     eax, [ebp - 0x14]
        push    eax
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x8], edi
        call    FUN_005cb330
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005cb390
        lea     edx, [ebp + 0x10]
        push    edx
        mov     ecx, ebx
        call    FUN_005cb340
    l_315a:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [eax + 0x4]
        sub     ecx, dword ptr [eax]
        and     ecx, 0xfffffffc
        cmp     ecx, 0x4
        jnz     l_31cf
        mov     eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_31cf
        mov     eax, dword ptr [edi + 0xd8]
        mov     edx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [ebp - 0x24]
        mov     ecx, edx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, eax
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x20], ecx
        lea     eax, [ebp - 0x24]
        push    eax
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x1c], edx
        mov     dword ptr [ebp - 0x18], edi
        call    FUN_005cb330
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_005cb390
        lea     edx, [ebp + 0x10]
        push    edx
        mov     ecx, ebx
        call    FUN_005cb340
    l_31cf:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
