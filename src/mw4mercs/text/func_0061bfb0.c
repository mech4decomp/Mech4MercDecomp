/*
 * FUN_0061BFB0 (475 B) — Interpolated keyframe lookup (__thiscall, RET 0xC).
 *
 * ECX = this, [ESP+4] = out struct, [ESP+8] = float param, [ESP+0xC] = index.
 * Computes a fractional position into a keyframe table (this+0x57e0),
 * interpolates between two keyframes (0x58-byte entries) via FUN_0041d810.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern void __cdecl FUN_0061ae40(void);
extern int __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0041d810(void *a, void *b, float c);

__declspec(naked) void __fastcall FUN_0061bfb0(void *param1, void *param2)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x10], esi
        call    FUN_0061ae40
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_61c181
        mov     edi, dword ptr [esi + 0x24]
        mov     dword ptr [esp + 0x20], edi
        fild    dword ptr [esp + 0x20]
        fmul    dword ptr [esi + 0x18]
        fcomp   dword ptr [esp + 0x24]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_61c181
        test    edi, edi
        jz      L_61c181
        fld     dword ptr [esp + 0x24]
        fdiv    dword ptr [esi + 0x18]
        call    FUN_0075db4a
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        lea     ecx, [eax + 0x1]
        jge     L_61c01d
        xor     eax, eax
        jmp     L_61c026
L_61c01d:
        lea     edx, [edi - 0x1]
        cmp     eax, edx
        jle     L_61c02a
        mov     eax, edx
L_61c026:
        mov     dword ptr [esp + 0x20], eax
L_61c02a:
        test    ecx, ecx
        jge     L_61c032
        xor     ecx, ecx
        jmp     L_61c03b
L_61c032:
        lea     edx, [edi - 0x1]
        cmp     ecx, edx
        jle     L_61c03b
        mov     ecx, edx
L_61c03b:
        mov     edx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esi + edx*4 + 0x57e0]
        lea     edx, [ecx + ecx*4]
        lea     edx, [ecx + edx*2]
        mov     esi, dword ptr [ebp + edx*8]
        cmp     esi, 0x1
        lea     edx, [ebp + edx*8]
        mov     dword ptr [esp + 0x18], edx
        jnz     L_61c130
        cmp     ecx, eax
        jz      L_61c130
        fild    dword ptr [esp + 0x20]
        lea     ecx, [eax + eax*4]
        lea     eax, [eax + ecx*2]
        lea     ebp, [ebp + eax*8]
        mov     eax, dword ptr [ebp + 0x4]
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [ebp + 0x1c]
        mov     dword ptr [ebx + 0x1c], eax
        mov     al, byte ptr [ebp + 0x54]
        mov     byte ptr [ebx + 0x54], al
        mov     al, byte ptr [ebp + 0x56]
        mov     byte ptr [ebx + 0x56], al
        mov     eax, dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x18]
        mov     ecx, dword ptr [ebp]
        mov     dword ptr [ebx], ecx
        mov     ecx, dword ptr [ebp + 0x18]
        fsubr   dword ptr [esp + 0x24]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, dword ptr [ebp + 0x20]
        fdiv    dword ptr [eax + 0x18]
        mov     dword ptr [ebx + 0x20], ecx
        mov     cl, byte ptr [ebp + 0x55]
        mov     byte ptr [ebx + 0x55], cl
        lea     edi, [ebx + 0x24]
        lea     esi, [ebp + 0x24]
        mov     ecx, 0xc
        rep movsd
        lea     eax, [esp + 0x28]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [edx + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        lea     edx, [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [ebp + 0x14]
        push    edx
        fstp    dword ptr [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_0041d810
        mov     eax, dword ptr [esp + 0x18]
        fld     dword ptr [eax + 0x8]
        mov     ecx, dword ptr [esp + 0x14]
        fsub    dword ptr [ebp + 0x8]
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x14], ecx
        fmul    dword ptr [esp + 0x1c]
        fadd    dword ptr [ebp + 0x8]
        fstp    dword ptr [ebx + 0x8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [ebp + 0xc]
        fmul    dword ptr [esp + 0x1c]
        fadd    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebx + 0xc]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [ebp + 0x10]
        fmul    dword ptr [esp + 0x1c]
        fadd    dword ptr [ebp + 0x10]
        pop     ebp
        fstp    dword ptr [ebx + 0x10]
        pop     ebx
        add     esp, 0xc
        ret     0xc
L_61c130:
        mov     eax, dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edx + 0x18]
        mov     dword ptr [ebx + 0x4], eax
        mov     eax, dword ptr [edx + 0x1c]
        mov     dword ptr [ebx + 0x18], ecx
        mov     ecx, dword ptr [edx + 0x20]
        mov     dword ptr [ebx + 0x1c], eax
        mov     al, byte ptr [edx + 0x54]
        mov     dword ptr [ebx + 0x20], ecx
        mov     cl, byte ptr [edx + 0x55]
        mov     byte ptr [ebx + 0x54], al
        mov     al, byte ptr [edx + 0x56]
        mov     byte ptr [ebx + 0x55], cl
        mov     dword ptr [ebx], esi
        lea     esi, [edx + 0x24]
        mov     byte ptr [ebx + 0x56], al
        mov     eax, dword ptr [edx + 0x8]
        lea     edi, [ebx + 0x24]
        mov     ecx, 0xc
        rep movsd
        mov     ecx, dword ptr [edx + 0x14]
        mov     dword ptr [ebx + 0x14], ecx
        mov     ecx, dword ptr [edx + 0xc]
        mov     edx, dword ptr [edx + 0x10]
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebx + 0xc], ecx
        mov     dword ptr [ebx + 0x10], edx
L_61c181:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
