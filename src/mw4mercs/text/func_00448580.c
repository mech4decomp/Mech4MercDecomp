/*
 * FUN_00448580 (361 B) — MLR vertex/color quantization helper (__cdecl):
 * normalizes a vertex, applies color-matrix constants, packs 8-bit color
 * components into a dword. FPU-heavy with float-to-fixed packing.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007da87c;
extern float g_007da874;
extern float g_007da878;
extern float g_007da870;
extern float g_76e7e4;
extern int g_7b9490;

__declspec(naked) void FUN_00448580(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi
        mov     ecx, dword ptr [ebp + 0xc]
        fld1
        mov     edi, dword ptr [ebp + 0x14]
        mov     eax, edi
        shl     eax, 0x4
        fdiv    dword ptr [eax + ecx*0x1 + 0xc]
        add     eax, ecx
        mov     edx, dword ptr [ebp + 0x8]
        fst     dword ptr [edx + 0xc]
        fld     st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x4]
        fmul    st(0), st(1)
        fstp    dword ptr [edx + 0x4]
        fmul    dword ptr [eax + 0x8]
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [g_007da87c]
        mov     edx, dword ptr [ebp + 0x8]
        fmul    dword ptr [edx]
        mov     eax, dword ptr [ebp + 0x10]
        xor     edi, edi
        cmp     eax, edi
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [edx]
        fld     dword ptr [g_007da878]
        fmul    dword ptr [edx + 0x4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [edx + 0x4]
        jz      Lee
        mov     ecx, dword ptr [ebp + 0x14]
        shl     ecx, 0x4
        add     ecx, eax
        mov     dword ptr [ebp + 0x8], ecx
        jmp     Lf5
Lee:
        mov     dword ptr [ebp + 0x8], offset g_7b9490
Lf5:
        fld     dword ptr [g_76e7e4]
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + 0x14], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x14]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x14], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x14]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x14], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + 0x14]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + 0x14], ecx
        mov     eax, dword ptr [ebp + 0x14]
        mov     dword ptr [edx + 0x18], edi
        mov     dword ptr [edx + 0x1c], edi
        pop     edi
        pop     esi
        mov     dword ptr [edx + 0x10], eax
        mov     al, 0x1
        pop     ebx
        pop     ebp
        ret
    }
}
