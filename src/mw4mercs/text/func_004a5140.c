/*
 * FUN_004a5140 (916 B) — MLR vertex/lighting transform (__thiscall, RET 0x8).
 * Computes 4 corner light values via FUN_0041c7d0, evaluates 4 (or 5)
 * spline/curve tables via FUN_00495e30, and writes a 2x4 float block at
 * [this+0xbc] indexed by param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00495e30(void);
extern float g_0076d070;
extern float g_0076dd60;

__declspec(naked) void FUN_004a5140(void)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [esp+0x28]
        push    ebx
        mov     ebx, dword ptr [ecx+0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [ebx+0x270]
        imul    esi, eax
        mov     ebp, dword ptr [ecx+0xb4]
        push    edi
        mov     edi, dword ptr [ecx+0xa8]
        mov     edx, dword ptr [esi+edi+0x18]
        add     esi, edi
        mov     dword ptr [esp+0x14], edx
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [esp+0x18], edx
        mov     edx, dword ptr [esi+0x6c]
        mov     dword ptr [esp+0x10], edx
        mov     edx, dword ptr [esp+0x3c]
        lea     edi, [eax*4+0]
        fld     dword ptr [esp+0x10]
        lea     eax, [edi+edi*2]
        fmul    dword ptr [esi+0x70]
        mov     dword ptr [esp+0x1c], ecx
        lea     ecx, [ebp+eax*4]
        fstp    dword ptr [esp+0x28]
        push    edx
        fld     dword ptr [esp+0x14]
        lea     eax, [esp+0x2c]
        fmul    dword ptr [esi+0x74]
        mov     dword ptr [esp+0x28], edi
        push    eax
        mov     dword ptr [esp+0x38], 0
        fchs
        fstp    dword ptr [esp+0x34]
        inc     edi
        call    FUN_0041c7d0
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x70]
        mov     edx, dword ptr [esp+0x3c]
        lea     ecx, [edi+edi*2]
        push    edx
        fchs
        lea     eax, [esp+0x2c]
        fstp    dword ptr [esp+0x2c]
        fld     dword ptr [esp+0x14]
        lea     ecx, [ebp+ecx*4]
        fmul    dword ptr [esi+0x74]
        push    eax
        mov     dword ptr [esp+0x38], 0
        inc     edi
        fchs
        fstp    dword ptr [esp+0x34]
        call    FUN_0041c7d0
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x70]
        mov     edx, dword ptr [esp+0x3c]
        push    edx
        lea     eax, [esp+0x2c]
        fchs
        lea     ecx, [edi+edi*2]
        fstp    dword ptr [esp+0x2c]
        fld     dword ptr [esp+0x14]
        lea     ecx, [ebp+ecx*4]
        fmul    dword ptr [esi+0x74]
        push    eax
        mov     dword ptr [esp+0x38], 0
        fstp    dword ptr [esp+0x34]
        call    FUN_0041c7d0
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x70]
        fstp    dword ptr [esp+0x28]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esi+0x74]
        mov     edx, dword ptr [esp+0x3c]
        fstp    dword ptr [esp+0x2c]
        push    edx
        lea     eax, [esp+0x2c]
        lea     ecx, [edi+edi*2+0x3]
        lea     ecx, [ebp+ecx*4]
        push    eax
        mov     dword ptr [esp+0x38], 0
        call    FUN_0041c7d0
        mov     edi, dword ptr [esp+0x18]
        lea     esi, [ebx+0x1ec]
        push    edi
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [esp+0x18]
        mov     edx, dword ptr [esi+0x4]
        lea     ecx, [eax+eax*2]
        fsub    dword ptr [edx+ecx*4]
        lea     eax, [edx+ecx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [ebx+0x204]
        test    al, al
        jz      L1
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ebx+0x200]
        fadd    dword ptr [ebx+0x1fc]
        fmulp st(1), st(0)
L1:
        mov     ecx, dword ptr [esp+0x1c]
        mov     eax, dword ptr [esp+0x38]
        mov     edx, dword ptr [ecx+0xb8]
        shl     eax, 0x4
        lea     esi, [edx+eax]
        lea     ebp, [ebx+0x20c]
        fstp    dword ptr [esi]
        push    edi
        mov     ecx, ebp
        call    FUN_00495e30
        fld     dword ptr [esp+0x18]
        mov     ecx, dword ptr [ebp+0x4]
        lea     eax, [eax+eax*2]
        fsub    dword ptr [ecx+eax*4]
        lea     eax, [ecx+eax*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [ebx+0x224]
        test    al, al
        jz      L2
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ebx+0x220]
        fadd    dword ptr [ebx+0x21c]
        fmulp st(1), st(0)
L2:
        lea     ebp, [ebx+0x22c]
        fstp    dword ptr [esi+0x4]
        push    edi
        mov     ecx, ebp
        call    FUN_00495e30
        fld     dword ptr [esp+0x18]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [ebp+0x4]
        fsub    dword ptr [eax+edx*4]
        lea     eax, [eax+edx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [ebx+0x244]
        test    al, al
        jz      L3
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ebx+0x240]
        fadd    dword ptr [ebx+0x23c]
        fmulp st(1), st(0)
L3:
        lea     ebp, [ebx+0x24c]
        fstp    dword ptr [esi+0x8]
        push    edi
        mov     ecx, ebp
        call    FUN_00495e30
        fld     dword ptr [esp+0x18]
        mov     edx, dword ptr [ebp+0x4]
        lea     ecx, [eax+eax*2]
        fsub    dword ptr [edx+ecx*4]
        lea     eax, [edx+ecx*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [ebx+0x264]
        test    al, al
        jz      L4
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ebx+0x260]
        fadd    dword ptr [ebx+0x25c]
        fmulp st(1), st(0)
L4:
        mov     eax, dword ptr [ebx+0x328]
        fstp    dword ptr [esi+0xc]
        fld     dword ptr [ebx+0x320]
        mov     ecx, dword ptr [ebx+0x330]
        mov     edx, dword ptr [ebx+0x338]
        fst     dword ptr [esp+0x20]
        mov     dword ptr [esp+0x3c], eax
        mov     al, byte ptr [ebx+0x33c]
        test    al, al
        mov     dword ptr [esp+0x38], ecx
        mov     dword ptr [esp+0x10], edx
        jz      L5
        lea     esi, [ebx+0x2f8]
        fstp    st(0)
        push    edi
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [esp+0x18]
        mov     ecx, dword ptr [esi+0x4]
        lea     eax, [eax+eax*2]
        fsub    dword ptr [ecx+eax*4]
        lea     eax, [ecx+eax*4]
        fmul    dword ptr [eax+0x4]
        fadd    dword ptr [eax+0x8]
        mov     al, byte ptr [ebx+0x318]
        test    al, al
        jz      L6
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [ebx+0x310]
        fadd    dword ptr [ebx+0x314]
        fmul    dword ptr [esp+0x14]
        fadd    dword ptr [ebx+0x30c]
        fmul    dword ptr [esp+0x14]
        fadd    dword ptr [ebx+0x308]
        fmulp st(1), st(0)
L6:
        mov     bl, byte ptr [ebx+0x33d]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp+0x18]
        mov     esi, ebx
        mov     ecx, dword ptr [esp+0x18]
        mov     eax, ecx
        and     eax, 0xff
        cdq
        and     esi, 0xff
        idiv    esi
        mov     dl, al
        mov     al, bl
        imul    dl
        sub     cl, al
        mov     byte ptr [esp+0x14], dl
        mov     edx, dword ptr [esp+0x14]
        and     ecx, 0xff
        mov     dword ptr [esp+0x18], ecx
        fild    dword ptr [esp+0x18]
        and     edx, 0xff
        fmul    dword ptr [esp+0x38]
        fadd    dword ptr [esp+0x20]
        mov     dword ptr [esp+0x20], edx
        fild    dword ptr [esp+0x20]
        fmul    dword ptr [esp+0x10]
        fadd    dword ptr [esp+0x3c]
        fstp    dword ptr [esp+0x3c]
L5:
        fld     dword ptr [esp+0x38]
        mov     eax, dword ptr [esp+0x24]
        mov     ecx, dword ptr [esp+0x1c]
        fadd    st(0), st(1)
        mov     ecx, dword ptr [ecx+0xbc]
        fld     dword ptr [esp+0x10]
        fadd    dword ptr [esp+0x3c]
        inc     eax
        fld     st(2)
        inc     eax
        fstp    dword ptr [ecx+eax*8-0x10]
        pop     edi
        inc     eax
        fst     dword ptr [ecx+eax*8-0x14]
        pop     esi
        fld     st(1)
        pop     ebp
        fstp    dword ptr [ecx+eax*8-0x10]
        pop     ebx
        fstp    dword ptr [ecx+eax*8-0xc]
        fstp    dword ptr [ecx+eax*8-0x8]
        fld     dword ptr [esp+0x2c]
        fstp    dword ptr [ecx+eax*8-0x4]
        fstp    dword ptr [ecx+eax*8]
        fld     dword ptr [esp+0x2c]
        fstp    dword ptr [ecx+eax*8+0x4]
        add     esp, 0x24
        ret     0x8
    }
}
