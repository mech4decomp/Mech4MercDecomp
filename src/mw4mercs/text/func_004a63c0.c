/*
 * FUN_004a63c0 (667 B) — MLR: per-vertex animation/lighting evaluation
 * (__thiscall, RET 0x8). Evaluates 4 spline/curve channels (FUN_00495e30
 * lookup + optional scale/offset) into this+0xb8 buffer, then 4 more via
 * FUN_00495e60, and finally a loop scaling a 3-vector by fVar2 through
 * FUN_0041c7d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_0041c7d0(void);

__declspec(naked) void FUN_004a63c0(void)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ebx, dword ptr [ebp + 0xa8]
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        push    edi
        mov     edi, dword ptr [esi + 0x270]
        imul    edi, eax
        mov     edx, dword ptr [edi + ebx + 0x1c]
        mov     ecx, dword ptr [edi + ebx + 0x18]
        add     edi, ebx
        mov     ebx, edx
        mov     dword ptr [esp + 0x10], ecx
        add     eax, eax
        lea     ecx, [esi + 0x304]
        push    ebx
        mov     dword ptr [esp + 0x1c], ebp
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00495e30
        mov     edx, dword ptr [esi + 0x308]
        fld     dword ptr [esp + 0x14]
        lea     ecx, [eax + eax*2]
        lea     eax, [edx + ecx*4]
        fsub    dword ptr [eax]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x31c]
        test    al, al
        jz      L643d
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x318]
        fadd    dword ptr [esi + 0x314]
        fmulp   st(1), st(0)
L643d:
        mov     eax, dword ptr [esp + 0x2c]
        mov     ebp, dword ptr [ebp + 0xb8]
        shl     eax, 0x4
        add     ebp, eax
        lea     ecx, [esi + 0x324]
        fstp    dword ptr [ebp]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi + 0x328]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x33c]
        test    al, al
        jz      L6490
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x338]
        fadd    dword ptr [esi + 0x334]
        fmulp   st(1), st(0)
L6490:
        lea     ecx, [esi + 0x344]
        fstp    dword ptr [ebp + 0x4]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esi + 0x348]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x35c]
        test    al, al
        jz      L64d4
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x358]
        fadd    dword ptr [esi + 0x354]
        fmulp   st(1), st(0)
L64d4:
        lea     ecx, [esi + 0x364]
        fstp    dword ptr [ebp + 0x8]
        push    ebx
        call    FUN_00495e30
        fld     dword ptr [esp + 0x14]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x368]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [esi + 0x37c]
        test    al, al
        jz      L6518
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x378]
        fadd    dword ptr [esi + 0x374]
        fmulp   st(1), st(0)
L6518:
        fstp    dword ptr [ebp + 0xc]
        mov     ebp, dword ptr [esp + 0x2c]
        push    0x0
        inc     ebp
        push    ebx
        lea     ecx, [esi + 0x1ec]
        mov     dword ptr [esp + 0x34], ebp
        call    FUN_00495e60
        mov     al, byte ptr [esi + 0x204]
        test    al, al
        jz      L654e
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x200]
        fadd    dword ptr [esi + 0x1fc]
        fmulp   st(1), st(0)
L654e:
        mov     edx, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edx + 0xb8]
        shl     ecx, 0x4
        lea     ebp, [ecx + eax]
        push    0x0
        fstp    dword ptr [ebp]
        push    ebx
        lea     ecx, [esi + 0x20c]
        call    FUN_00495e60
        mov     al, byte ptr [esi + 0x224]
        test    al, al
        jz      L658f
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x220]
        fadd    dword ptr [esi + 0x21c]
        fmulp   st(1), st(0)
L658f:
        push    0x0
        fstp    dword ptr [ebp + 0x4]
        push    ebx
        lea     ecx, [esi + 0x22c]
        call    FUN_00495e60
        mov     al, byte ptr [esi + 0x244]
        test    al, al
        jz      L65bc
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x240]
        fadd    dword ptr [esi + 0x23c]
        fmulp   st(1), st(0)
L65bc:
        push    0x0
        fstp    dword ptr [ebp + 0x8]
        push    ebx
        lea     ecx, [esi + 0x24c]
        call    FUN_00495e60
        mov     al, byte ptr [esi + 0x264]
        test    al, al
        jz      L65e9
        fld     dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x260]
        fadd    dword ptr [esi + 0x25c]
        fmulp   st(1), st(0)
L65e9:
        mov     eax, dword ptr [edi + 0x6c]
        fstp    dword ptr [ebp + 0xc]
        mov     esi, dword ptr [esi + 0x380]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, esi
        imul    eax, dword ptr [esp + 0x2c]
        test    esi, esi
        jbe     L6651
        mov     edx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x30]
        lea     ecx, [eax + eax*2]
        mov     eax, dword ptr [edx + 0xb4]
        lea     ebx, [eax + ecx*4]
        add     edi, 0x78
L661b:
        fld     dword ptr [esp + 0x14]
        push    ebp
        fmul    dword ptr [edi - 0x8]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebx
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edi - 0x4]
        fstp    dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [edi]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0041c7d0
        add     edi, 0xc
        add     ebx, 0xc
        dec     esi
        jnz     L661b
L6651:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x18
        ret     0x8
    }
}
