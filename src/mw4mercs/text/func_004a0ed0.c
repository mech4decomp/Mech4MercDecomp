/*
 * FUN_004a0ed0 (1940 B) — MLR particle/shrapnel: main update loop. Computes
 * fragment transforms (matrix multiplies + polynomial evaluation), writes
 * them into the ring buffer, and calls FUN_00494990. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_00491670(void *a, void *b);
extern void __cdecl FUN_00419480(void *a);
extern void __cdecl FUN_004206b0(void *a, void *b);
extern void __cdecl FUN_0041c830(void *a, void *b);
extern float __cdecl FUN_00495e60(float a, int b);
extern float __cdecl FUN_00495e10(float a, int b);
extern void __cdecl FUN_0040ca40(void *a, void *b);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041fde0(void *a, int b, int c, int d);
extern void __cdecl FUN_0041c7d0(int a, void *b);
extern void __cdecl FUN_0048e890(void *a);
extern void __cdecl FUN_00494990(void *a);

__declspec(naked) void FUN_004a0ed0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1ac
        push    ebx
        mov     ebx, ecx
        cmp     dword ptr [ebx+0xac], 0x1
        push    esi
        push    edi
        jle     L1650
        lea     ecx, [ebp-0xbc]
        call    FUN_0048bcf0
        mov     edi, dword ptr [ebx+0x10]
        mov     esi, dword ptr [ebp+0x8]
        mov     eax, dword ptr [ebx+0xcc]
        lea     ecx, [edi+0x48]
        push    ecx
        lea     edx, [esi+0x8]
        push    edx
        lea     ecx, [ebp-0xb8]
        mov     dword ptr [ebp-0xbc], eax
        call    FUN_00491670
        mov     eax, dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ebp-0xa0], eax
        lea     edx, [ebx+0x58]
        lea     eax, [ebp-0x11c]
        mov     dword ptr [ebp-0x10], ecx
        mov     dword ptr [ebp-0x14], edx
        mov     dword ptr [ebp-0x8], eax
        mov     edx, dword ptr [ebp-0x14]
        push    esi
        mov     esi, dword ptr [ebp-0x10]
        mov     eax, dword ptr [ebp-0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        mov     eax, dword ptr [ebx+0xac]
        lea     ecx, [ebp-0x11c]
        mov     dword ptr [ebp-0x9c], ecx
        mov     esi, dword ptr [edi+0x238]
        mov     edx, eax
        lea     eax, [eax+eax*1-0x2]
        imul    edx, esi
        lea     ecx, [esi-1]
        imul    eax, ecx
        mov     dword ptr [ebx+0xb0], eax
        cmp     dword ptr [edi+0x22c], 0x1
        mov     dword ptr [ebp-0x40], esi
        mov     dword ptr [ebx+0xb4], edx
        jnz     L163e
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [eax+0x20]
        mov     edx, dword ptr [ebx+0xa0]
        add     ecx, 0x44
        push    ecx
        lea     ecx, [ebp-0x4c]
        mov     dword ptr [ebp-0xc], edx
        call    FUN_00419480
        lea     edx, [ebp-0x11c]
        push    edx
        lea     ecx, [ebp-0x14c]
        call    FUN_004206b0
        lea     eax, [ebp-0x98]
        lea     ecx, [ebp-0x17c]
        lea     esi, [esi+esi*2]
        mov     dword ptr [ebp-0x54], eax
        mov     dword ptr [ebp-0x5c], ecx
        lea     edx, [ebp-0x14c]
        lea     eax, [ebp-0x17c]
        lea     ecx, [ebp-0x1ac]
        shl     esi, 0x2
        mov     dword ptr [ebp-0x50], edx
        mov     dword ptr [ebp-0x68], eax
        mov     dword ptr [ebp-0x60], ecx
        mov     dword ptr [ebp-0x10], 0x0
        mov     dword ptr [ebp-0x58], esi
L1165:
        mov     eax, dword ptr [ebp-0xc]
        lea     edx, [eax+eax*8]
        mov     eax, dword ptr [ebx+0xbc]
        lea     esi, [eax+edx*8]
        push    esi
        lea     ecx, [ebp-0x4c]
        push    ecx
        lea     ecx, [ebp-0x3c]
        mov     dword ptr [ebp-0x64], esi
        call    FUN_0041c830
        mov     edx, dword ptr [esi+0x3c]
        mov     eax, dword ptr [esi+0x44]
        mov     ecx, edx
        push    0x0
        push    ecx
        lea     ecx, [edi+0xd4]
        mov     dword ptr [ebp-0x24], edx
        mov     dword ptr [ebp-0x14], eax
        call    FUN_00495e60
        fstp    dword ptr [ebp-0x4]
        mov     al, byte ptr [edi+0xf4]
        test    al, al
        jz      L11c4
        mov     edx, dword ptr [ebp-0x14]
        push    0x0
        push    edx
        lea     ecx, [edi+0xe0]
        call    FUN_00495e10
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x4]
L11c4:
        mov     eax, dword ptr [ebp-0x24]
        push    0x0
        push    eax
        lea     ecx, [edi+0xac]
        call    FUN_00495e60
        fst     dword ptr [ebp-0x8]
        mov     al, byte ptr [edi+0xcc]
        test    al, al
        jz      L11f8
        mov     ecx, dword ptr [ebp-0x14]
        fstp    st(0)
        push    0x0
        push    ecx
        lea     ecx, [edi+0xb8]
        call    FUN_00495e10
        fmul    dword ptr [ebp-0x8]
L11f8:
        push    ecx
        fstp    dword ptr [esp]
        add     esi, 0x30
        push    esi
        lea     ecx, [ebp-0x20]
        call    FUN_0040ca40
        fld     dword ptr [ebp-0x3c]
        fsub    dword ptr [ebp-0x20]
        lea     ecx, [ebp-0xec]
        fstp    dword ptr [ebp-0x30]
        fld     dword ptr [ebp-0x38]
        fsub    dword ptr [ebp-0x1c]
        fstp    dword ptr [ebp-0x2c]
        fld     dword ptr [ebp-0x34]
        fsub    dword ptr [ebp-0x18]
        fstp    dword ptr [ebp-0x28]
        call    FUN_00419e70
        push    -0x1
        push    0x1
        push    0x2
        lea     edx, [ebp-0x30]
        push    edx
        lea     ecx, [ebp-0xec]
        call    FUN_0041fde0
        fld     dword ptr [ebp-0xec]
        fmul    dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x20]
        mov     ecx, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [ebp-0x18]
        fstp    dword ptr [ebp-0x98]
        mov     dword ptr [ebp-0x8c], eax
        fld     dword ptr [ebp-0xdc]
        mov     dword ptr [ebp-0x7c], ecx
        fmul    dword ptr [ebp-0x4]
        mov     dword ptr [ebp-0x6c], edx
        fstp    dword ptr [ebp-0x88]
        fld     dword ptr [ebp-0xcc]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x78]
        fld     dword ptr [ebp-0xe8]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x94]
        fld     dword ptr [ebp-0xd8]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x84]
        fld     dword ptr [ebp-0xc8]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x74]
        fld     dword ptr [ebp-0xe4]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x90]
        fld     dword ptr [ebp-0xd4]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x80]
        fld     dword ptr [ebp-0xc4]
        fmul    dword ptr [ebp-0x4]
        fstp    dword ptr [ebp-0x70]
        mov     edx, dword ptr [ebp-0x54]
        push    esi
        mov     esi, dword ptr [ebp-0x64]
        mov     eax, dword ptr [ebp-0x5c]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        mov     edx, dword ptr [ebp-0x68]
        push    esi
        mov     esi, dword ptr [ebp-0x50]
        mov     eax, dword ptr [ebp-0x60]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        fxch
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fxch
        fadd    dword ptr [esi+0xc]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        fxch
        fstp    dword ptr [eax+0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x14]
        fxch
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fxch
        fadd    dword ptr [esi+0x1c]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        fxch
        fstp    dword ptr [eax+0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi+0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x24]
        fxch
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi+0x2c]
        fstp    dword ptr [eax+0x2c]
        pop     esi
        mov     ecx, dword ptr [ebp-0x40]
        test    ecx, ecx
        jbe     L1620
        mov     eax, dword ptr [edi+0x234]
        mov     esi, dword ptr [ebx+0xd0]
        mov     dword ptr [ebp-0x4], eax
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [ebp-0x8], ecx
        mov     ecx, dword ptr [ebp-0x58]
        add     esi, eax
        add     eax, ecx
        mov     dword ptr [ebp-0x10], eax
L15f9:
        mov     eax, dword ptr [ebp-0x4]
        lea     edx, [ebp-0x1ac]
        push    edx
        mov     ecx, esi
        push    eax
        add     esi, 0xc
        call    FUN_0041c7d0
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ebp-0x8]
        add     ecx, 0xc
        dec     eax
        mov     dword ptr [ebp-0x4], ecx
        mov     dword ptr [ebp-0x8], eax
        jnz     L15f9
L1620:
        dec     dword ptr [ebp-0xc]
        jns     L162f
        mov     eax, dword ptr [edi+0x228]
        dec     eax
        mov     dword ptr [ebp-0xc], eax
L162f:
        mov     ecx, dword ptr [ebp-0xc]
        cmp     ecx, dword ptr [ebx+0xa4]
        jnz     L1165
L163e:
        mov     eax, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [eax+0x20]
        lea     edx, [ebp-0xbc]
        push    edx
        call    FUN_0048e890
L1650:
        mov     ecx, dword ptr [ebp+0x8]
        push    ecx
        mov     ecx, ebx
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
