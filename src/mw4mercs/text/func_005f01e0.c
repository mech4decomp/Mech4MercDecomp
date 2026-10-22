/*
 * FUN_005f01e0 (152 B) — __fastcall (ECX = this).
 *
 * Advances an animation counter: if this->0x184 != this->0x188,
 * computes next frame value, calls FUN_005fbe90 to test it, and on
 * success updates counters and calls FUN_005f0180().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f0180(void);
extern char __cdecl FUN_005fbe90(float f);

__declspec(naked) void __stdcall FUN_005f01e0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x184]
        cmp     eax, dword ptr [esi + 0x188]
        push    edi
        jz      L1
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [esi + 0x190]
        mov     ebx, eax
        mov     eax, dword ptr [esi + 0x184]
        lea     edi, [eax + 1]
        mov     dword ptr [esp + 0xc], edi
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [ebx + 0x38]
        fstp    dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        call    FUN_005fbe90
        test    al, al
        jz      L1
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0x188]
        cmp     edi, eax
        fadd    dword ptr [esi + 0x194]
        mov     dword ptr [esi + 0x184], edi
        fstp    dword ptr [esi + 0x194]
        jle     L2
        mov     dword ptr [esi + 0x184], eax
L2:
        mov     ecx, esi
        call    FUN_005f0180
        fild    dword ptr [esi + 0x184]
        mov     eax, dword ptr [esi + 0x190]
        fmul    dword ptr [ebx + 0x38]
        fadd    dword ptr [eax + 0x3b8]
        fstp    dword ptr [eax + 0x3b8]
L1:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }
}
