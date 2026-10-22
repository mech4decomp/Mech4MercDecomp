/*
 * FUN_005C7170 (342 B) — __thiscall (ECX=this), RET 4 (one stack param).
 *
 * Visibility/angle check. Validates a global flag (FUN_00415230) and a
 * param, computes a squared-distance and angle (fpatan) against thresholds,
 * returns 1 if the object is within the view cone, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __stdcall FUN_00415230(void *this, int arg);
extern void __fastcall FUN_0041c830(void *this, void *a, void *b);

__declspec(naked) char __fastcall FUN_005c7170(void)
{
    

extern int DAT_007f25c0;
extern int DAT_007878f8;
extern int DAT_007878d8;
extern int DAT_0076d070;
extern int DAT_007b220c;
extern int DAT_007878dc;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x54
        mov eax, dword ptr [DAT_007f25c0]
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L72BC
        test    esi, esi
        jz      L72BC
        fld     dword ptr [esi + 0x444]
        fcomp dword ptr [DAT_007878f8]
        fnstsw  ax
        test    ah, 1
        jnz     L72BC
        mov     eax, dword ptr [esi]
        lea     ecx, [ebp - 0x54]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xF0]
        fld dword ptr [DAT_007878d8]
        mov     edx, dword ptr [edi + 0x170]
        fmul dword ptr [DAT_0076d070]
        mov     eax, dword ptr [edx + 0xD8]
        mov     ecx, dword ptr [eax + 0x8C]
        add     eax, 0x80
        fstp    dword ptr [ebp + 8]
        mov     dword ptr [ebp - 0x24], ecx
        mov     edx, dword ptr [eax + 0x1C]
        mov     dword ptr [ebp - 0x20], edx
        mov     eax, dword ptr [eax + 0x2C]
        lea     ecx, [ebp - 0x54]
        push    ecx
        lea     edx, [ebp - 0x24]
        push    edx
        lea     ecx, [ebp - 0x18]
        mov     dword ptr [ebp - 0x1C], eax
        call    FUN_0041c830
        fld     dword ptr [ebp + 8]
        fabs
        fstp    dword ptr [ebp + 8]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fadd    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x8]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0xC], eax
        fld     dword ptr [ebp - 0xC]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      L72BC
        mov     eax, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0xC], eax
        mov     eax, dword ptr [ebp - 0xC]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L728C
        fld     dword ptr [ebp + 8]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 1
        jnz     L72BC
        pop     edi
        mov     al, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    L728C:
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x10]
        fpatan
        fabs
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 0x41
        jz      L72B2
        fld     dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x4]
        fpatan
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 1
        jnz     L72BC
    L72B2:
        pop     edi
        mov     al, 1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    L72BC:
        pop     edi
        xor     al, al
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
