/*
 * FUN_005a19c0 (2140 B) - __thiscall (ECX = this), RET 4. Bone/site matrix
 * update. Initializes joint matrices (3x 4x4 matrix multiplies via FPU),
 * then runs a state machine (switch on [EBX+0x10]) with interpolation.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_005a2230(void);
extern void __cdecl FUN_005a2c00(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_0040cb70(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_004daa20(void);
extern int DAT_005a221c;   /* jump table base (just past function end) */

__declspec(naked) void __cdecl FUN_005a19c0(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xf0
        push    ebx
        mov     ebx, ecx
        mov     al, byte ptr [ebx + 0x134]
        test    al, al
        push    esi
        push    edi
        jnz     l_1dd5
        mov     esi, dword ptr [ebx + 0x140]
        push    0x782054
        mov     ecx, esi
        mov     byte ptr [ebx + 0x134], 0x1
        call    FUN_005f8fa0
        push    0x77d12c
        mov     ecx, esi
        mov     [ebp - 0xc], eax
        mov     [ebx + 0x14c], eax
        call    FUN_005f8fa0
        mov     edi, eax
        push    0x781fc8
        mov     ecx, esi
        mov     [ebp - 0x8], edi
        mov     [ebx + 0x144], edi
        call    FUN_005f8fa0
        mov     edx, [ebp - 0xc]
        mov     [ebp - 0x4], eax
        mov     eax, [edi + 0xc4]
        lea     edi, [ebx + 0xa4]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep     movsd
        lea     edi, [ebx + 0xd4]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep     movsd
        mov     ecx, [ebp - 0x8]
        mov     [ebx + 0x148], eax
        mov     eax, [ecx + 0xd8]
        lea     esi, [eax + 0x50]
        mov     [ebp - 0x8], eax
        mov     eax, [edx + 0xd8]
        lea     edi, [ebx + 0x14]
        mov     ecx, 0xc
        add     eax, 0x80
        rep     movsd
        push    eax
        lea     ecx, [ebp - 0x78]
        call    FUN_004206b0
        mov     edi, [ebp - 0x4]
        mov     ecx, [edi + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [ebp - 0xc0]
        call    FUN_004206b0
        mov     edx, [ebp - 0x8]
        add     edx, 0x80
        lea     eax, [ebp - 0xc0]
        lea     ecx, [ebx + 0x44]
        mov     [ebp - 0x8], edx
        mov     [ebp - 0xc], eax
        mov     [ebp - 0x4], ecx
        mov     edx, [ebp - 0x8]
        push    esi
        mov     esi, [ebp - 0xc]
        mov     eax, [ebp - 0x4]
        /* ---- matrix multiply block 1 (-> [EBX+0x44]) ---- */
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        /* ---- matrix multiply block 2 (-> [EBX+0x74]) ---- */
        mov     edx, [edi + 0xd8]
        add     edx, 0x80
        lea     eax, [ebp - 0x78]
        lea     ecx, [ebx + 0x74]
        mov     [ebp - 0x8], edx
        mov     [ebp - 0xc], eax
        mov     [ebp - 0x4], ecx
        mov     edx, [ebp - 0x8]
        push    esi
        mov     esi, [ebp - 0xc]
        mov     eax, [ebp - 0x4]
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
    l_1dd5:
        mov     edx, [ebx + 0x140]
        mov     al, byte ptr [edx + 0x4a1]
        test    al, al
        jnz     l_1f8a
        lea     eax, [ebx + 0x14]
        lea     ecx, [ebx + 0xd4]
        lea     edx, [ebp - 0x48]
        mov     [ebp - 0x4], eax
        mov     [ebp - 0xc], ecx
        mov     [ebp + 0x8], edx
        mov     edx, [ebp - 0xc]
        push    esi
        mov     esi, [ebp - 0x4]
        mov     eax, [ebp + 0x8]
        /* ---- matrix multiply block 3 (-> [EBP-0x48]) ---- */
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
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
        fxch    st(1)
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
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     ebx, [ebx + 0x144]
        lea     eax, [ebp - 0x48]
        push    eax
        jmp     l_2001
    l_1f8a:
        mov     eax, [ebx + 0x10]
        cmp     eax, 0x3
        ja      l_2213
        jmp     dword ptr [eax*4 + DAT_005a221c]
        /* case 0 */
        lea     eax, [ebp - 0x48]
        push    eax
        mov     ecx, ebx
        call    FUN_005a2230
        mov     ebx, [ebx + 0x144]
        lea     ecx, [ebp - 0x48]
        jmp     l_2000
        /* case 1 */
        lea     eax, [ebp - 0x48]
        push    eax
        mov     ecx, ebx
        call    FUN_005a2c00
        mov     ebx, [ebx + 0x144]
        lea     ecx, [ebp - 0x48]
        jmp     l_2000
        /* case 2 */
        fld     dword ptr [ebp + 0x8]
        fadd    dword ptr [ebx + 0x138]
        fst     dword ptr [ebx + 0x138]
        fcomp   dword ptr [ebx + 0x13c]
        fnstsw ax
        test    ah, 0x41
        jnz     l_201a
        lea     eax, [ebp - 0x48]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x10], 0x1
        call    FUN_005a2c00
        mov     ebx, [ebx + 0x144]
        lea     ecx, [ebp - 0x48]
    l_2000:
        push    ecx
    l_2001:
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    l_201a:
        lea     eax, [ebp - 0xc0]
        push    eax
        mov     ecx, ebx
        call    FUN_005a2230
        lea     ecx, [ebp - 0x78]
        push    ecx
        mov     ecx, ebx
        call    FUN_005a2c00
        fld     dword ptr [ebx + 0x138]
        fdiv    dword ptr [ebx + 0x13c]
        lea     edx, [ebp - 0xc0]
        push    edx
        lea     ecx, [ebp - 0xd0]
        fstp    dword ptr [ebp + 0x8]
        call    FUN_0041afd0
        lea     eax, [ebp - 0x78]
        push    eax
        lea     ecx, [ebp - 0xf0]
        call    FUN_0041afd0
        mov     esi, [ebp + 0x8]
        push    esi
        lea     ecx, [ebp - 0xf0]
        push    ecx
        lea     edx, [ebp - 0xd0]
        push    edx
        lea     ecx, [ebp - 0xe0]
        call    FUN_0041bb80
        mov     eax, [ebp - 0xb4]
        mov     ecx, [ebp - 0xa4]
        mov     edx, [ebp - 0x94]
        mov     [ebp - 0x90], eax
        mov     eax, [ebp - 0x6c]
        mov     [ebp - 0x8c], ecx
        mov     ecx, [ebp - 0x5c]
        mov     [ebp - 0x18], eax
        push    esi
        mov     [ebp - 0x14], ecx
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0x90]
        mov     [ebp - 0x88], edx
        mov     edx, [ebp - 0x4c]
        push    ecx
        lea     ecx, [ebp - 0x84]
        mov     [ebp - 0x10], edx
        call    FUN_0040cb70
        lea     edx, [ebp - 0xe0]
        push    edx
        lea     ecx, [ebp - 0x48]
        call    FUN_0041a160
        mov     eax, [ebp - 0x84]
        mov     ecx, [ebp - 0x80]
        mov     edx, [ebp - 0x7c]
        mov     ebx, [ebx + 0x144]
        mov     [ebp - 0x3c], eax
        lea     eax, [ebp - 0x48]
        mov     [ebp - 0x2c], ecx
        mov     [ebp - 0x1c], edx
        push    eax
        jmp     l_2001
        /* case 3 */
        fld     dword ptr [ebp + 0x8]
        fadd    dword ptr [ebx + 0x138]
        fst     dword ptr [ebx + 0x138]
        fcomp   dword ptr [ebx + 0x13c]
        fnstsw ax
        test    ah, 0x41
        jnz     l_213c
        lea     eax, [ebp - 0x48]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x10], 0x0
        call    FUN_005a2230
        mov     ebx, [ebx + 0x144]
        lea     ecx, [ebp - 0x48]
        jmp     l_2000
    l_213c:
        lea     eax, [ebp - 0x48]
        push    eax
        mov     ecx, ebx
        call    FUN_005a2230
        lea     ecx, [ebp - 0x78]
        push    ecx
        mov     ecx, ebx
        call    FUN_005a2c00
        fld     dword ptr [ebx + 0x138]
        fdiv    dword ptr [ebx + 0x13c]
        lea     edx, [ebp - 0x78]
        push    edx
        lea     ecx, [ebp - 0xd0]
        fstp    dword ptr [ebp + 0x8]
        call    FUN_0041afd0
        lea     eax, [ebp - 0x48]
        push    eax
        lea     ecx, [ebp - 0xe0]
        call    FUN_0041afd0
        mov     ecx, [ebp + 0x8]
        push    ecx
        lea     edx, [ebp - 0xe0]
        push    edx
        lea     eax, [ebp - 0xd0]
        push    eax
        lea     ecx, [ebp - 0xf0]
        call    FUN_0041bb80
        fld     dword ptr [ebp - 0x3c]
        fsub    dword ptr [ebp - 0x6c]
        lea     ecx, [ebp - 0xf0]
        push    ecx
        lea     ecx, [ebp - 0xc0]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [ebp - 0x6c]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x2c]
        fsub    dword ptr [ebp - 0x5c]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp + 0x8]
        fadd    dword ptr [ebp - 0x4c]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_0041a160
        mov     edx, [ebp - 0x18]
        mov     ecx, [ebp - 0x10]
        mov     eax, [ebp - 0x14]
        mov     ebx, [ebx + 0x144]
        mov     [ebp - 0xb4], edx
        lea     edx, [ebp - 0xc0]
        mov     [ebp - 0x94], ecx
        push    edx
        mov     ecx, ebx
        mov     [ebp - 0xa4], eax
        call    FUN_004daa20
        mov     eax, [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
    l_2213:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }


}
