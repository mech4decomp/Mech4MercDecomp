/*
 * FUN_005C76D0 (249 B) — __fastcall (ECX=this), RET (no stack args).
 *
 * Recursive compaction of a 16-byte-element array at this+0x5E8..0x5EC.
 * Elements whose (global + offset) exceeds a threshold (FUN_00707e70)
 * are shifted out; recurses after each removal.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __stdcall FUN_00707e70(int param);

__declspec(naked) void __fastcall FUN_005c76d0(void)
{
    

extern int DAT_00787924;
__asm {
sub     esp, 0x14
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebp, dword ptr [esi + 0x5E8]
        mov     ecx, dword ptr [esi + 0x5EC]
        push    edi
        mov     edi, ebp
        xor     eax, eax
        sub     ecx, edi
        sar     ecx, 4
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x1C], ebp
        jz      L77C2
        push    ebx
        lea     ebx, [ebp + 0x10]
        mov     dword ptr [esp + 0x10], eax
    L7703:
        mov     edx, dword ptr [esi + 0x5E8]
        fld dword ptr [DAT_00787924]
        mov     eax, dword ptr [esp + 0x10]
        fadd    dword ptr [eax + edx + 0xC]
        push    0
        fstp    qword ptr [esp + 0x1C]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L7786
        mov     edi, dword ptr [esi + 0x5EC]
        cmp     ebx, edi
        jz      L7774
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 4
        test    eax, eax
        mov     ecx, ebp
        jle     L7774
        mov     dword ptr [esp + 0x18], eax
    L7748:
        lea     edx, [ecx + 0x10]
        mov     eax, edx
        mov     ebp, dword ptr [eax]
        mov     dword ptr [ecx], ebp
        mov     ebp, dword ptr [eax + 4]
        mov     dword ptr [ecx + 4], ebp
        mov     ebp, dword ptr [eax + 8]
        mov     dword ptr [ecx + 8], ebp
        mov     eax, dword ptr [eax + 0xC]
        mov     dword ptr [ecx + 0xC], eax
        mov     eax, dword ptr [esp + 0x18]
        dec     eax
        mov     ecx, edx
        mov     dword ptr [esp + 0x18], eax
        jnz     L7748
        mov     ebp, dword ptr [esp + 0x20]
    L7774:
        add     edi, -0x10
        mov     ecx, esi
        mov     dword ptr [esi + 0x5EC], edi
        call    FUN_005c76d0
        jmp     L77A4
    L7786:
        mov     edi, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        inc     edi
        add     edx, 0x10
        add     ebp, 0x10
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x20], ebp
        add     ebx, 0x10
    L77A4:
        mov     ecx, dword ptr [esi + 0x5EC]
        mov     edi, dword ptr [esi + 0x5E8]
        mov     eax, dword ptr [esp + 0x14]
        sub     ecx, edi
        sar     ecx, 4
        cmp     eax, ecx
        jc      L7703
        pop     ebx
    L77C2:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x14
        ret
    }


}
