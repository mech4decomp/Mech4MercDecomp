/*
 * FUN_004a8aa0 (678 B) — MLR ShardCloud update/transform (__thiscall, RET 0x8).
 * Computes three rotated basis vectors (FPU) via FUN_0041c7d0, then evaluates
 * four 1-D spline segments (FUN_00495e30) and writes a 4x4 matrix into the
 * object's 0xb8 array region.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076df00;
extern float g_0076d070;
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00495e30(void);

__declspec(naked) void FUN_004a8aa0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0xa8]
        mov     ecx, dword ptr [esp + 0x2c]
        push    edi
        mov     edi, dword ptr [ebp + 0x10]
        mov     esi, dword ptr [edi + 0x270]
        imul    esi, ebx
        fld     dword ptr [esi + eax*1 + 0x68]
        fmul    dword ptr [esi + eax*1 + 0x6c]
        fmul    dword ptr [g_0076df00]
        add     esi, eax
        mov     eax, dword ptr [ebp + 0xb4]
        push    ecx
        lea     ebx, [ebx + ebx*2]
        lea     edx, [esp + 0x20]
        lea     ecx, [ebx + ebx*2]
        push    edx
        lea     ecx, [eax + ecx*4]
        fstp    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x2c], 0x0
        call    FUN_0041c7d0
        fld     dword ptr [esi + 0x68]
        mov     edx, dword ptr [esp + 0x30]
        fmul    dword ptr [esi + 0x70]
        lea     eax, [ebx + 0x1]
        push    edx
        lea     edx, [eax + eax*2]
        fmul    dword ptr [esi + 0x6c]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [ebp + 0xb4]
        lea     ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esi + 0x68]
        push    ecx
        fmul    dword ptr [esi + 0x6c]
        lea     ecx, [eax + edx*4]
        mov     dword ptr [esp + 0x2c], 0x0
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0041c7d0
        fld     dword ptr [esi + 0x68]
        fmul    dword ptr [esi + 0x70]
        mov     ecx, dword ptr [esp + 0x30]
        lea     eax, [ebx + 0x2]
        push    ecx
        fmul    dword ptr [esi + 0x6c]
        lea     ecx, [eax + eax*2]
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [ebp + 0xb4]
        fchs
        lea     edx, [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esi + 0x68]
        push    edx
        fmul    dword ptr [esi + 0x6c]
        lea     ecx, [eax + ecx*4]
        mov     dword ptr [esp + 0x2c], 0x0
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0041c7d0
        mov     edx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, eax
        lea     ecx, [edi + 0x1ec]
        push    edx
        mov     dword ptr [esp + 0x34], eax
        call    FUN_00495e30
        mov     ecx, dword ptr [edi + 0x1f0]
        lea     eax, [eax + eax*2]
        lea     eax, [ecx + eax*4]
        fld     dword ptr [esp + 0x30]
        fsub    dword ptr [eax]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0x204]
        test    al, al
        jz      L_4a8be1
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x200]
        fadd    dword ptr [edi + 0x1fc]
        fmulp   st(1), st(0)
L_4a8be1:
        mov     ebp, dword ptr [ebp + 0xb8]
        mov     eax, dword ptr [esi + 0x1c]
        mov     edx, dword ptr [esi + 0x18]
        shl     ebx, 0x4
        mov     ecx, eax
        fstp    dword ptr [ebx + ebp*1]
        add     ebx, ebp
        mov     dword ptr [esp + 0x14], ebp
        lea     ebp, [edi + 0x20c]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], eax
        call    FUN_00495e30
        fld     dword ptr [esp + 0x30]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [ebp + 0x4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0x224]
        test    al, al
        jz      L_4a8c43
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x220]
        fadd    dword ptr [edi + 0x21c]
        fmulp   st(1), st(0)
L_4a8c43:
        mov     edx, dword ptr [esi + 0x1c]
        fstp    dword ptr [ebx + 0x4]
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, edx
        mov     dword ptr [esp + 0x2c], ecx
        lea     ebp, [edi + 0x22c]
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x34], edx
        call    FUN_00495e30
        fld     dword ptr [esp + 0x30]
        mov     edx, dword ptr [ebp + 0x4]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0x244]
        test    al, al
        jz      L_4a8c96
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x240]
        fadd    dword ptr [edi + 0x23c]
        fmulp   st(1), st(0)
L_4a8c96:
        mov     ecx, dword ptr [esi + 0x1c]
        fstp    dword ptr [ebx + 0x8]
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, ecx
        mov     dword ptr [esp + 0x30], ecx
        lea     esi, [edi + 0x24c]
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00495e30
        fld     dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0x264]
        test    al, al
        jz      L_4a8ce9
        fld     dword ptr [esp + 0x2c]
        fmul    dword ptr [edi + 0x260]
        fadd    dword ptr [edi + 0x25c]
        fmulp   st(1), st(0)
L_4a8ce9:
        mov     ecx, dword ptr [esp + 0x14]
        fstp    dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        fld     dword ptr [ebx]
        shl     eax, 0x4
        fst     dword ptr [eax + ecx*1]
        add     eax, ecx
        fld     dword ptr [ebx + 0x4]
        pop     edi
        fst     dword ptr [esp + 0x2c]
        pop     esi
        mov     edx, dword ptr [esp + 0x28]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ebx + 0x8]
        pop     ebp
        fst     dword ptr [esp + 0x20]
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [ebx + 0xc]
        pop     ebx
        fst     dword ptr [esp + 0x4]
        fstp    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x8]
        shl     eax, 0x4
        add     eax, ecx
        mov     ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], edx
        add     esp, 0x18
        ret     0x8
    }
}
