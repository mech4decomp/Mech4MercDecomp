/*
 * FUN_004b6c10 (134 B) — MLR element registration (__thiscall, 3 args).
 * Computes an index into the array at this+0x144 from (this+0x151 *
 * (arg1&0xff) + (arg2&0xff)), stores arg3 there, links arg3 back to
 * this, and conditionally adjusts arg3's flags (this+0x18) based on an
 * FPU compare against 0x76c5b0, then makes two virtual calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;

__declspec(naked) void FUN_004b6c10(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x151]
        and     edx, 0xff
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        imul    eax, edx
        mov     edx, dword ptr [esp + 0xc]
        and     edx, 0xff
        add     eax, edx
        mov     edx, dword ptr [ecx + 0x144]
        mov     dword ptr [edx + eax*4], esi
        mov     dword ptr [esi + 0x10], ecx
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, ecx
        and     eax, 0xc0
        cmp     al, 0xc0
        jz      L_6C92
        fld     dword ptr [esi + 0xec]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_6C78
        mov     edx, ecx
        shr     edx, 0x3
        test    dl, 0x1
        jnz     L_6C78
        and     ecx, 0xffffffbf
        or      ecx, 0x80
        jmp     L_6C81
    L_6C78:
        and     ecx, 0xffffff7f
        or      ecx, 0x44
    L_6C81:
        mov     eax, dword ptr [esi]
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x10]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
    L_6C92:
        pop     esi
        ret     0xc
    }
}
